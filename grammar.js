const BIN = /[01]+/;
const HEX = /[A-Fa-f\d]+/;
const DEC = /-?\d+/;

const opt = (v) => optional(field(v, v));

const data = (type, value) => $ => seq("@data", opt("export"), type, field("label", $.label), value($));
// array does not use lines because they don't *need* to be on newlines
const array = (...params) => $ => seq(...params.slice(0, -1),
    "[",
    repeat(choice(field("value", params.pop()($)), /[\r\n]/)),
    "]",
);
const lines = (x) => seq(repeat1(/[\r\n]/), repeat(seq(x, repeat1(/[\r\n]/))));
const lines_exhaustive = (x) => seq(optional(x), lines(x), optional(x));
const param_value = (f) => $ => seq("@param", "value", field("param", $.param), f($));

const definitions = {
    param_option: $ => seq("@param", "option", field("param", $.param)),
    param_value_set: param_value($ => seq("set", field("value", $.number))),
    param_value_equ: param_value($ => seq("equ", field("value", $._equ))),

    include: $ => seq("@include", $.string, optional(seq("only", field("only", $.seg)))),

    segment: $ => seq(
        "@segment", field("seg", $.seg),
        field("address", $._addr),
        lines(field("def", $._definition)),
        "@segment", "end"),
    code: $ => seq(
        "@code", opt("export"), field("label", $.label),
        lines(field("inst", $._instruction)),
        "@code", "end"
    ),
    relocate: $ => seq("@relocate", field("seg", $.seg), field("address", $._addr)),

    data_string: data("string", $ => seq($.string, opt("null"))),
    data_reserve: data("reserve", $ => seq(field("count", $.number), optional(field("value", $.number)))),

    data_array: data("array", array($ => $.number)),
    data_bin_array: data("array", array("bin", $ => alias(BIN, $.number))),
    data_hex_array: data("array", array("hex", $ => alias(HEX, $.number))),
    data_dec_array: data("array", array("dec", $ => alias(DEC, $.number))),
};

module.exports = grammar({
    name: "phinix",
    extras: $ => [$._whitespace, $.comment],

    rules: {
        source_file: $ => lines_exhaustive(field("def", $._definition)),
        // greedy: matching non-newline will ensure it is followed by a newline
        comment: $ => /;[^\r\n]+/,
        _whitespace: $ => /[\t\f\v \u00a0\u1680\u2000-\u200a\u2028\u2029\u202f\u205f\u3000\ufeff]/, // \s without [\r\n]

        _definition: $ => choice(...Object.keys(definitions).map(key => $[key])),
        ...definitions,
        _equ: $ => repeat1(choice(
            seq($.seg_label, /[#$]?/),
            $.number,
            $.param,
            /[*+-]/, // ???
        )),

        _addr: $ => choice($.param, $.number),
        number: $ => token(seq(choice(
            seq(BIN, "b"),
            seq(HEX, "h"),
            seq(DEC, "d"),
        ), /[lsx]?/)),

        label: $ => /:\w+/,
        string: $ => /"[^"]+"/,
        param: $ => /%\w+/,
        seg: $ => /!\w*/,
        seg_label: $ => seq(field("seg", $.seg), field("label", $.label)),

        register: $ => choice(
            // zero reg, ret ptr, frame ptr, stack ptr
            "zr", "rp", "fp", "sp",
            // args
            "a0", "a1", "a2",
            // volatile general purpose
            "v0", "v1", "v2", "v3",
            // saved general purpose
            "s0", "s1", "s2", "s3", "s4", "s5", "s6",
        ),
        prefix_dec: $ => seq("-", field("reg", $.register)),
        prefix_inc: $ => seq("+", field("reg", $.register)),
        postfix_inc: $ => seq(field("reg", $.register), "+"),
        register_update: $ => choice($.prefix_dec, $.prefix_inc, $.postfix_inc, $.register),
        base_offset: $ => seq($.register, "#", $.number),
        base_offset_update: $ => seq($.register_update, "#", $.number),
        _instruction: $ => /[^@\r\n]+/,
    },
})