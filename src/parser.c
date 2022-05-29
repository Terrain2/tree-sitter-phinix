#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 131
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 79
#define ALIAS_COUNT 0
#define TOKEN_COUNT 54
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 11
#define MAX_ALIAS_SEQUENCE_LENGTH 8
#define PRODUCTION_ID_COUNT 35

enum {
  aux_sym_source_file_token1 = 1,
  sym_comment = 2,
  sym__whitespace = 3,
  anon_sym_ATparam = 4,
  anon_sym_option = 5,
  anon_sym_value = 6,
  anon_sym_set = 7,
  anon_sym_equ = 8,
  anon_sym_ATinclude = 9,
  anon_sym_only = 10,
  anon_sym_ATsegment = 11,
  anon_sym_end = 12,
  anon_sym_ATcode = 13,
  anon_sym_export = 14,
  anon_sym_ATrelocate = 15,
  anon_sym_ATdata = 16,
  anon_sym_string = 17,
  anon_sym_null = 18,
  anon_sym_reserve = 19,
  anon_sym_array = 20,
  anon_sym_LBRACK = 21,
  anon_sym_RBRACK = 22,
  anon_sym_bin = 23,
  aux_sym_data_bin_array_token1 = 24,
  anon_sym_hex = 25,
  aux_sym_data_hex_array_token1 = 26,
  anon_sym_dec = 27,
  aux_sym_data_dec_array_token1 = 28,
  aux_sym__equ_token1 = 29,
  sym_number = 30,
  sym_label = 31,
  sym_string = 32,
  sym_param = 33,
  sym_seg = 34,
  anon_sym_zr = 35,
  anon_sym_rp = 36,
  anon_sym_fp = 37,
  anon_sym_sp = 38,
  anon_sym_a0 = 39,
  anon_sym_a1 = 40,
  anon_sym_a2 = 41,
  anon_sym_v0 = 42,
  anon_sym_v1 = 43,
  anon_sym_v2 = 44,
  anon_sym_v3 = 45,
  anon_sym_s0 = 46,
  anon_sym_s1 = 47,
  anon_sym_s2 = 48,
  anon_sym_s3 = 49,
  anon_sym_s4 = 50,
  anon_sym_s5 = 51,
  anon_sym_s6 = 52,
  sym_instruction = 53,
  sym_source_file = 54,
  sym__definition = 55,
  sym_param_option = 56,
  sym_param_value_set = 57,
  sym_param_value_equ = 58,
  sym_include = 59,
  sym_segment = 60,
  sym_code = 61,
  sym_relocate = 62,
  sym_data_string = 63,
  sym_data_reserve = 64,
  sym_data_array = 65,
  sym_data_bin_array = 66,
  sym_data_hex_array = 67,
  sym_data_dec_array = 68,
  sym__equ = 69,
  sym__addr = 70,
  sym_seg_label = 71,
  aux_sym_source_file_repeat1 = 72,
  aux_sym_source_file_repeat2 = 73,
  aux_sym_code_repeat1 = 74,
  aux_sym_data_array_repeat1 = 75,
  aux_sym_data_bin_array_repeat1 = 76,
  aux_sym_data_hex_array_repeat1 = 77,
  aux_sym_data_dec_array_repeat1 = 78,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [aux_sym_source_file_token1] = "source_file_token1",
  [sym_comment] = "comment",
  [sym__whitespace] = "_whitespace",
  [anon_sym_ATparam] = "@param",
  [anon_sym_option] = "option",
  [anon_sym_value] = "value",
  [anon_sym_set] = "set",
  [anon_sym_equ] = "equ",
  [anon_sym_ATinclude] = "@include",
  [anon_sym_only] = "only",
  [anon_sym_ATsegment] = "@segment",
  [anon_sym_end] = "end",
  [anon_sym_ATcode] = "@code",
  [anon_sym_export] = "export",
  [anon_sym_ATrelocate] = "@relocate",
  [anon_sym_ATdata] = "@data",
  [anon_sym_string] = "string",
  [anon_sym_null] = "null",
  [anon_sym_reserve] = "reserve",
  [anon_sym_array] = "array",
  [anon_sym_LBRACK] = "[",
  [anon_sym_RBRACK] = "]",
  [anon_sym_bin] = "bin",
  [aux_sym_data_bin_array_token1] = "number",
  [anon_sym_hex] = "hex",
  [aux_sym_data_hex_array_token1] = "number",
  [anon_sym_dec] = "dec",
  [aux_sym_data_dec_array_token1] = "number",
  [aux_sym__equ_token1] = "_equ_token1",
  [sym_number] = "number",
  [sym_label] = "label",
  [sym_string] = "string",
  [sym_param] = "param",
  [sym_seg] = "seg",
  [anon_sym_zr] = "zr",
  [anon_sym_rp] = "rp",
  [anon_sym_fp] = "fp",
  [anon_sym_sp] = "sp",
  [anon_sym_a0] = "a0",
  [anon_sym_a1] = "a1",
  [anon_sym_a2] = "a2",
  [anon_sym_v0] = "v0",
  [anon_sym_v1] = "v1",
  [anon_sym_v2] = "v2",
  [anon_sym_v3] = "v3",
  [anon_sym_s0] = "s0",
  [anon_sym_s1] = "s1",
  [anon_sym_s2] = "s2",
  [anon_sym_s3] = "s3",
  [anon_sym_s4] = "s4",
  [anon_sym_s5] = "s5",
  [anon_sym_s6] = "s6",
  [sym_instruction] = "instruction",
  [sym_source_file] = "source_file",
  [sym__definition] = "_definition",
  [sym_param_option] = "param_option",
  [sym_param_value_set] = "param_value_set",
  [sym_param_value_equ] = "param_value_equ",
  [sym_include] = "include",
  [sym_segment] = "segment",
  [sym_code] = "code",
  [sym_relocate] = "relocate",
  [sym_data_string] = "data_string",
  [sym_data_reserve] = "data_reserve",
  [sym_data_array] = "data_array",
  [sym_data_bin_array] = "data_bin_array",
  [sym_data_hex_array] = "data_hex_array",
  [sym_data_dec_array] = "data_dec_array",
  [sym__equ] = "_equ",
  [sym__addr] = "_addr",
  [sym_seg_label] = "seg_label",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_source_file_repeat2] = "source_file_repeat2",
  [aux_sym_code_repeat1] = "code_repeat1",
  [aux_sym_data_array_repeat1] = "data_array_repeat1",
  [aux_sym_data_bin_array_repeat1] = "data_bin_array_repeat1",
  [aux_sym_data_hex_array_repeat1] = "data_hex_array_repeat1",
  [aux_sym_data_dec_array_repeat1] = "data_dec_array_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [aux_sym_source_file_token1] = aux_sym_source_file_token1,
  [sym_comment] = sym_comment,
  [sym__whitespace] = sym__whitespace,
  [anon_sym_ATparam] = anon_sym_ATparam,
  [anon_sym_option] = anon_sym_option,
  [anon_sym_value] = anon_sym_value,
  [anon_sym_set] = anon_sym_set,
  [anon_sym_equ] = anon_sym_equ,
  [anon_sym_ATinclude] = anon_sym_ATinclude,
  [anon_sym_only] = anon_sym_only,
  [anon_sym_ATsegment] = anon_sym_ATsegment,
  [anon_sym_end] = anon_sym_end,
  [anon_sym_ATcode] = anon_sym_ATcode,
  [anon_sym_export] = anon_sym_export,
  [anon_sym_ATrelocate] = anon_sym_ATrelocate,
  [anon_sym_ATdata] = anon_sym_ATdata,
  [anon_sym_string] = anon_sym_string,
  [anon_sym_null] = anon_sym_null,
  [anon_sym_reserve] = anon_sym_reserve,
  [anon_sym_array] = anon_sym_array,
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [anon_sym_bin] = anon_sym_bin,
  [aux_sym_data_bin_array_token1] = sym_number,
  [anon_sym_hex] = anon_sym_hex,
  [aux_sym_data_hex_array_token1] = sym_number,
  [anon_sym_dec] = anon_sym_dec,
  [aux_sym_data_dec_array_token1] = sym_number,
  [aux_sym__equ_token1] = aux_sym__equ_token1,
  [sym_number] = sym_number,
  [sym_label] = sym_label,
  [sym_string] = sym_string,
  [sym_param] = sym_param,
  [sym_seg] = sym_seg,
  [anon_sym_zr] = anon_sym_zr,
  [anon_sym_rp] = anon_sym_rp,
  [anon_sym_fp] = anon_sym_fp,
  [anon_sym_sp] = anon_sym_sp,
  [anon_sym_a0] = anon_sym_a0,
  [anon_sym_a1] = anon_sym_a1,
  [anon_sym_a2] = anon_sym_a2,
  [anon_sym_v0] = anon_sym_v0,
  [anon_sym_v1] = anon_sym_v1,
  [anon_sym_v2] = anon_sym_v2,
  [anon_sym_v3] = anon_sym_v3,
  [anon_sym_s0] = anon_sym_s0,
  [anon_sym_s1] = anon_sym_s1,
  [anon_sym_s2] = anon_sym_s2,
  [anon_sym_s3] = anon_sym_s3,
  [anon_sym_s4] = anon_sym_s4,
  [anon_sym_s5] = anon_sym_s5,
  [anon_sym_s6] = anon_sym_s6,
  [sym_instruction] = sym_instruction,
  [sym_source_file] = sym_source_file,
  [sym__definition] = sym__definition,
  [sym_param_option] = sym_param_option,
  [sym_param_value_set] = sym_param_value_set,
  [sym_param_value_equ] = sym_param_value_equ,
  [sym_include] = sym_include,
  [sym_segment] = sym_segment,
  [sym_code] = sym_code,
  [sym_relocate] = sym_relocate,
  [sym_data_string] = sym_data_string,
  [sym_data_reserve] = sym_data_reserve,
  [sym_data_array] = sym_data_array,
  [sym_data_bin_array] = sym_data_bin_array,
  [sym_data_hex_array] = sym_data_hex_array,
  [sym_data_dec_array] = sym_data_dec_array,
  [sym__equ] = sym__equ,
  [sym__addr] = sym__addr,
  [sym_seg_label] = sym_seg_label,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_source_file_repeat2] = aux_sym_source_file_repeat2,
  [aux_sym_code_repeat1] = aux_sym_code_repeat1,
  [aux_sym_data_array_repeat1] = aux_sym_data_array_repeat1,
  [aux_sym_data_bin_array_repeat1] = aux_sym_data_bin_array_repeat1,
  [aux_sym_data_hex_array_repeat1] = aux_sym_data_hex_array_repeat1,
  [aux_sym_data_dec_array_repeat1] = aux_sym_data_dec_array_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [aux_sym_source_file_token1] = {
    .visible = false,
    .named = false,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [sym__whitespace] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_ATparam] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_option] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_value] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_set] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_equ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ATinclude] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_only] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ATsegment] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_end] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ATcode] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_export] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ATrelocate] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ATdata] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_string] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_null] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_reserve] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_array] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_bin] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_data_bin_array_token1] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_hex] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_data_hex_array_token1] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_dec] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_data_dec_array_token1] = {
    .visible = true,
    .named = true,
  },
  [aux_sym__equ_token1] = {
    .visible = false,
    .named = false,
  },
  [sym_number] = {
    .visible = true,
    .named = true,
  },
  [sym_label] = {
    .visible = true,
    .named = true,
  },
  [sym_string] = {
    .visible = true,
    .named = true,
  },
  [sym_param] = {
    .visible = true,
    .named = true,
  },
  [sym_seg] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_zr] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_rp] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_fp] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_sp] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_a0] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_a1] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_a2] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_v0] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_v1] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_v2] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_v3] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_s0] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_s1] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_s2] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_s3] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_s4] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_s5] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_s6] = {
    .visible = true,
    .named = false,
  },
  [sym_instruction] = {
    .visible = true,
    .named = true,
  },
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym__definition] = {
    .visible = false,
    .named = true,
  },
  [sym_param_option] = {
    .visible = true,
    .named = true,
  },
  [sym_param_value_set] = {
    .visible = true,
    .named = true,
  },
  [sym_param_value_equ] = {
    .visible = true,
    .named = true,
  },
  [sym_include] = {
    .visible = true,
    .named = true,
  },
  [sym_segment] = {
    .visible = true,
    .named = true,
  },
  [sym_code] = {
    .visible = true,
    .named = true,
  },
  [sym_relocate] = {
    .visible = true,
    .named = true,
  },
  [sym_data_string] = {
    .visible = true,
    .named = true,
  },
  [sym_data_reserve] = {
    .visible = true,
    .named = true,
  },
  [sym_data_array] = {
    .visible = true,
    .named = true,
  },
  [sym_data_bin_array] = {
    .visible = true,
    .named = true,
  },
  [sym_data_hex_array] = {
    .visible = true,
    .named = true,
  },
  [sym_data_dec_array] = {
    .visible = true,
    .named = true,
  },
  [sym__equ] = {
    .visible = false,
    .named = true,
  },
  [sym__addr] = {
    .visible = false,
    .named = true,
  },
  [sym_seg_label] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_source_file_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_source_file_repeat2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_code_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_data_array_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_data_bin_array_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_data_hex_array_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_data_dec_array_repeat1] = {
    .visible = false,
    .named = false,
  },
};

enum {
  field_address = 1,
  field_count = 2,
  field_def = 3,
  field_export = 4,
  field_inst = 5,
  field_label = 6,
  field_null = 7,
  field_only = 8,
  field_param = 9,
  field_seg = 10,
  field_value = 11,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_address] = "address",
  [field_count] = "count",
  [field_def] = "def",
  [field_export] = "export",
  [field_inst] = "inst",
  [field_label] = "label",
  [field_null] = "null",
  [field_only] = "only",
  [field_param] = "param",
  [field_seg] = "seg",
  [field_value] = "value",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 1},
  [2] = {.index = 1, .length = 1},
  [3] = {.index = 2, .length = 1},
  [4] = {.index = 3, .length = 1},
  [5] = {.index = 4, .length = 2},
  [6] = {.index = 6, .length = 2},
  [7] = {.index = 8, .length = 2},
  [8] = {.index = 10, .length = 2},
  [9] = {.index = 12, .length = 2},
  [10] = {.index = 14, .length = 1},
  [11] = {.index = 15, .length = 1},
  [12] = {.index = 16, .length = 2},
  [13] = {.index = 18, .length = 3},
  [14] = {.index = 21, .length = 2},
  [15] = {.index = 23, .length = 1},
  [16] = {.index = 24, .length = 1},
  [17] = {.index = 25, .length = 2},
  [18] = {.index = 27, .length = 2},
  [19] = {.index = 29, .length = 3},
  [20] = {.index = 32, .length = 2},
  [21] = {.index = 34, .length = 3},
  [22] = {.index = 37, .length = 1},
  [23] = {.index = 38, .length = 2},
  [24] = {.index = 40, .length = 2},
  [25] = {.index = 42, .length = 2},
  [26] = {.index = 44, .length = 3},
  [27] = {.index = 47, .length = 4},
  [28] = {.index = 51, .length = 2},
  [29] = {.index = 53, .length = 2},
  [30] = {.index = 55, .length = 3},
  [31] = {.index = 58, .length = 3},
  [32] = {.index = 61, .length = 3},
  [33] = {.index = 64, .length = 2},
  [34] = {.index = 66, .length = 3},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_def, 0},
  [1] =
    {field_def, 1},
  [2] =
    {field_def, 1, .inherited = true},
  [3] =
    {field_param, 2},
  [4] =
    {field_address, 2},
    {field_seg, 1},
  [6] =
    {field_def, 0},
    {field_def, 2},
  [8] =
    {field_def, 0},
    {field_def, 2, .inherited = true},
  [10] =
    {field_def, 1, .inherited = true},
    {field_def, 2},
  [12] =
    {field_def, 0, .inherited = true},
    {field_def, 1, .inherited = true},
  [14] =
    {field_only, 3},
  [15] =
    {field_label, 2},
  [16] =
    {field_count, 3},
    {field_label, 2},
  [18] =
    {field_def, 0},
    {field_def, 2, .inherited = true},
    {field_def, 3},
  [21] =
    {field_param, 2},
    {field_value, 4},
  [23] =
    {field_label, 1},
  [24] =
    {field_inst, 0},
  [25] =
    {field_inst, 0, .inherited = true},
    {field_inst, 1, .inherited = true},
  [27] =
    {field_export, 1},
    {field_label, 3},
  [29] =
    {field_count, 4},
    {field_export, 1},
    {field_label, 3},
  [32] =
    {field_label, 2},
    {field_null, 4},
  [34] =
    {field_count, 3},
    {field_label, 2},
    {field_value, 4},
  [37] =
    {field_value, 0},
  [38] =
    {field_label, 1},
    {field_seg, 0},
  [40] =
    {field_export, 1},
    {field_label, 2},
  [42] =
    {field_inst, 3, .inherited = true},
    {field_label, 1},
  [44] =
    {field_export, 1},
    {field_label, 3},
    {field_null, 5},
  [47] =
    {field_count, 4},
    {field_export, 1},
    {field_label, 3},
    {field_value, 5},
  [51] =
    {field_label, 2},
    {field_value, 4, .inherited = true},
  [53] =
    {field_value, 0, .inherited = true},
    {field_value, 1, .inherited = true},
  [55] =
    {field_address, 2},
    {field_def, 4, .inherited = true},
    {field_seg, 1},
  [58] =
    {field_export, 1},
    {field_inst, 4, .inherited = true},
    {field_label, 2},
  [61] =
    {field_export, 1},
    {field_label, 3},
    {field_value, 5, .inherited = true},
  [64] =
    {field_label, 2},
    {field_value, 5, .inherited = true},
  [66] =
    {field_export, 1},
    {field_label, 3},
    {field_value, 6, .inherited = true},
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
};

static const uint16_t ts_non_terminal_alias_map[] = {
  0,
};

static inline bool sym__whitespace_character_set_1(int32_t c) {
  return (c < 8232
    ? (c < 160
      ? (c < ' '
        ? (c >= '\t' && c <= '\f')
        : c <= ' ')
      : (c <= 160 || (c < 8192
        ? c == 5760
        : c <= 8202)))
    : (c <= 8233 || (c < 12288
      ? (c < 8287
        ? c == 8239
        : c <= 8287)
      : (c <= 12288 || c == 65279))));
}

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(93);
      if (lookahead == '!') ADVANCE(145);
      if (lookahead == '"') ADVANCE(91);
      if (lookahead == '%') ADVANCE(88);
      if (lookahead == '-') ADVANCE(137);
      if (lookahead == ':') ADVANCE(89);
      if (lookahead == ';') ADVANCE(90);
      if (lookahead == '@') ADVANCE(15);
      if (lookahead == '[') ADVANCE(116);
      if (lookahead == ']') ADVANCE(117);
      if (lookahead == 'a') ADVANCE(122);
      if (lookahead == 'b') ADVANCE(126);
      if (lookahead == 'd') ADVANCE(125);
      if (lookahead == 'e') ADVANCE(127);
      if (lookahead == 'f') ADVANCE(128);
      if (lookahead == 'h') ADVANCE(24);
      if (lookahead == 'n') ADVANCE(78);
      if (lookahead == 'o') ADVANCE(57);
      if (lookahead == 'r') ADVANCE(26);
      if (lookahead == 's') ADVANCE(3);
      if (lookahead == 'v') ADVANCE(4);
      if (lookahead == 'z') ADVANCE(65);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(94);
      if (lookahead == '*' ||
          lookahead == '+') ADVANCE(136);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(119);
      if (('A' <= lookahead && lookahead <= 'F') ||
          lookahead == 'c') ADVANCE(130);
      if (('2' <= lookahead && lookahead <= '9')) ADVANCE(124);
      if (sym__whitespace_character_set_1(lookahead)) ADVANCE(97);
      END_STATE();
    case 1:
      if (lookahead == '"') ADVANCE(143);
      if (lookahead != 0) ADVANCE(1);
      END_STATE();
    case 2:
      if (lookahead == '-') ADVANCE(87);
      if (lookahead == ';') ADVANCE(90);
      if (lookahead == ']') ADVANCE(117);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(94);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(135);
      if (sym__whitespace_character_set_1(lookahead)) ADVANCE(97);
      END_STATE();
    case 3:
      if (lookahead == '0') ADVANCE(157);
      if (lookahead == '1') ADVANCE(158);
      if (lookahead == '2') ADVANCE(159);
      if (lookahead == '3') ADVANCE(160);
      if (lookahead == '4') ADVANCE(161);
      if (lookahead == '5') ADVANCE(162);
      if (lookahead == '6') ADVANCE(163);
      if (lookahead == 'e') ADVANCE(73);
      if (lookahead == 'p') ADVANCE(149);
      if (lookahead == 't') ADVANCE(67);
      END_STATE();
    case 4:
      if (lookahead == '0') ADVANCE(153);
      if (lookahead == '1') ADVANCE(154);
      if (lookahead == '2') ADVANCE(155);
      if (lookahead == '3') ADVANCE(156);
      if (lookahead == 'a') ADVANCE(48);
      END_STATE();
    case 5:
      if (lookahead == ';') ADVANCE(90);
      if (lookahead == '[') ADVANCE(116);
      if (lookahead == ']') ADVANCE(117);
      if (lookahead == 'b') ADVANCE(43);
      if (lookahead == 'd') ADVANCE(35);
      if (lookahead == 'h') ADVANCE(24);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(94);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(120);
      if (sym__whitespace_character_set_1(lookahead)) ADVANCE(97);
      END_STATE();
    case 6:
      if (lookahead == ';') ADVANCE(90);
      if (lookahead == ']') ADVANCE(117);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(94);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(131);
      if (sym__whitespace_character_set_1(lookahead)) ADVANCE(97);
      END_STATE();
    case 7:
      if (lookahead == ';') ADVANCE(164);
      if (lookahead == '@') ADVANCE(14);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(94);
      if (sym__whitespace_character_set_1(lookahead)) ADVANCE(98);
      if (lookahead != 0) ADVANCE(165);
      END_STATE();
    case 8:
      if (lookahead == 'a') ADVANCE(111);
      END_STATE();
    case 9:
      if (lookahead == 'a') ADVANCE(85);
      END_STATE();
    case 10:
      if (lookahead == 'a') ADVANCE(52);
      END_STATE();
    case 11:
      if (lookahead == 'a') ADVANCE(76);
      END_STATE();
    case 12:
      if (lookahead == 'a') ADVANCE(77);
      END_STATE();
    case 13:
      if (lookahead == 'a') ADVANCE(70);
      END_STATE();
    case 14:
      if (lookahead == 'c') ADVANCE(60);
      END_STATE();
    case 15:
      if (lookahead == 'c') ADVANCE(60);
      if (lookahead == 'd') ADVANCE(11);
      if (lookahead == 'i') ADVANCE(54);
      if (lookahead == 'p') ADVANCE(13);
      if (lookahead == 'r') ADVANCE(34);
      if (lookahead == 's') ADVANCE(27);
      END_STATE();
    case 16:
      if (lookahead == 'c') ADVANCE(132);
      END_STATE();
    case 17:
      if (lookahead == 'c') ADVANCE(50);
      END_STATE();
    case 18:
      if (lookahead == 'c') ADVANCE(12);
      END_STATE();
    case 19:
      if (lookahead == 'd') ADVANCE(141);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(19);
      END_STATE();
    case 20:
      if (lookahead == 'd') ADVANCE(107);
      END_STATE();
    case 21:
      if (lookahead == 'd') ADVANCE(140);
      if (lookahead == 'h') ADVANCE(141);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(21);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(42);
      END_STATE();
    case 22:
      if (lookahead == 'd') ADVANCE(28);
      END_STATE();
    case 23:
      if (lookahead == 'd') ADVANCE(31);
      END_STATE();
    case 24:
      if (lookahead == 'e') ADVANCE(83);
      END_STATE();
    case 25:
      if (lookahead == 'e') ADVANCE(71);
      END_STATE();
    case 26:
      if (lookahead == 'e') ADVANCE(71);
      if (lookahead == 'p') ADVANCE(147);
      END_STATE();
    case 27:
      if (lookahead == 'e') ADVANCE(38);
      END_STATE();
    case 28:
      if (lookahead == 'e') ADVANCE(108);
      END_STATE();
    case 29:
      if (lookahead == 'e') ADVANCE(101);
      END_STATE();
    case 30:
      if (lookahead == 'e') ADVANCE(114);
      END_STATE();
    case 31:
      if (lookahead == 'e') ADVANCE(104);
      END_STATE();
    case 32:
      if (lookahead == 'e') ADVANCE(110);
      END_STATE();
    case 33:
      if (lookahead == 'e') ADVANCE(73);
      if (lookahead == 't') ADVANCE(67);
      END_STATE();
    case 34:
      if (lookahead == 'e') ADVANCE(49);
      END_STATE();
    case 35:
      if (lookahead == 'e') ADVANCE(16);
      END_STATE();
    case 36:
      if (lookahead == 'e') ADVANCE(66);
      END_STATE();
    case 37:
      if (lookahead == 'e') ADVANCE(59);
      END_STATE();
    case 38:
      if (lookahead == 'g') ADVANCE(53);
      END_STATE();
    case 39:
      if (lookahead == 'g') ADVANCE(112);
      END_STATE();
    case 40:
      if (lookahead == 'h') ADVANCE(141);
      if (lookahead == 'n') ADVANCE(20);
      if (lookahead == 'q') ADVANCE(79);
      if (lookahead == 'x') ADVANCE(64);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(42);
      END_STATE();
    case 41:
      if (lookahead == 'h') ADVANCE(141);
      if (lookahead == 'r') ADVANCE(68);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(42);
      END_STATE();
    case 42:
      if (lookahead == 'h') ADVANCE(141);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(42);
      END_STATE();
    case 43:
      if (lookahead == 'i') ADVANCE(55);
      END_STATE();
    case 44:
      if (lookahead == 'i') ADVANCE(58);
      END_STATE();
    case 45:
      if (lookahead == 'i') ADVANCE(63);
      END_STATE();
    case 46:
      if (lookahead == 'l') ADVANCE(84);
      END_STATE();
    case 47:
      if (lookahead == 'l') ADVANCE(113);
      END_STATE();
    case 48:
      if (lookahead == 'l') ADVANCE(80);
      END_STATE();
    case 49:
      if (lookahead == 'l') ADVANCE(61);
      END_STATE();
    case 50:
      if (lookahead == 'l') ADVANCE(81);
      END_STATE();
    case 51:
      if (lookahead == 'l') ADVANCE(47);
      END_STATE();
    case 52:
      if (lookahead == 'm') ADVANCE(99);
      END_STATE();
    case 53:
      if (lookahead == 'm') ADVANCE(37);
      END_STATE();
    case 54:
      if (lookahead == 'n') ADVANCE(17);
      END_STATE();
    case 55:
      if (lookahead == 'n') ADVANCE(118);
      END_STATE();
    case 56:
      if (lookahead == 'n') ADVANCE(100);
      END_STATE();
    case 57:
      if (lookahead == 'n') ADVANCE(46);
      if (lookahead == 'p') ADVANCE(72);
      END_STATE();
    case 58:
      if (lookahead == 'n') ADVANCE(39);
      END_STATE();
    case 59:
      if (lookahead == 'n') ADVANCE(75);
      END_STATE();
    case 60:
      if (lookahead == 'o') ADVANCE(22);
      END_STATE();
    case 61:
      if (lookahead == 'o') ADVANCE(18);
      END_STATE();
    case 62:
      if (lookahead == 'o') ADVANCE(69);
      END_STATE();
    case 63:
      if (lookahead == 'o') ADVANCE(56);
      END_STATE();
    case 64:
      if (lookahead == 'p') ADVANCE(62);
      END_STATE();
    case 65:
      if (lookahead == 'r') ADVANCE(146);
      END_STATE();
    case 66:
      if (lookahead == 'r') ADVANCE(82);
      END_STATE();
    case 67:
      if (lookahead == 'r') ADVANCE(44);
      END_STATE();
    case 68:
      if (lookahead == 'r') ADVANCE(9);
      END_STATE();
    case 69:
      if (lookahead == 'r') ADVANCE(74);
      END_STATE();
    case 70:
      if (lookahead == 'r') ADVANCE(10);
      END_STATE();
    case 71:
      if (lookahead == 's') ADVANCE(36);
      END_STATE();
    case 72:
      if (lookahead == 't') ADVANCE(45);
      END_STATE();
    case 73:
      if (lookahead == 't') ADVANCE(102);
      END_STATE();
    case 74:
      if (lookahead == 't') ADVANCE(109);
      END_STATE();
    case 75:
      if (lookahead == 't') ADVANCE(106);
      END_STATE();
    case 76:
      if (lookahead == 't') ADVANCE(8);
      END_STATE();
    case 77:
      if (lookahead == 't') ADVANCE(32);
      END_STATE();
    case 78:
      if (lookahead == 'u') ADVANCE(51);
      END_STATE();
    case 79:
      if (lookahead == 'u') ADVANCE(103);
      END_STATE();
    case 80:
      if (lookahead == 'u') ADVANCE(29);
      END_STATE();
    case 81:
      if (lookahead == 'u') ADVANCE(23);
      END_STATE();
    case 82:
      if (lookahead == 'v') ADVANCE(30);
      END_STATE();
    case 83:
      if (lookahead == 'x') ADVANCE(121);
      END_STATE();
    case 84:
      if (lookahead == 'y') ADVANCE(105);
      END_STATE();
    case 85:
      if (lookahead == 'y') ADVANCE(115);
      END_STATE();
    case 86:
      if (lookahead == 'b' ||
          lookahead == 'd') ADVANCE(140);
      if (lookahead == 'h') ADVANCE(141);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(86);
      if (('2' <= lookahead && lookahead <= '9')) ADVANCE(21);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(42);
      END_STATE();
    case 87:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(135);
      END_STATE();
    case 88:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(144);
      END_STATE();
    case 89:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(142);
      END_STATE();
    case 90:
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(96);
      END_STATE();
    case 91:
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(1);
      END_STATE();
    case 92:
      if (eof) ADVANCE(93);
      if (lookahead == '!') ADVANCE(145);
      if (lookahead == '%') ADVANCE(88);
      if (lookahead == '-') ADVANCE(138);
      if (lookahead == ':') ADVANCE(89);
      if (lookahead == ';') ADVANCE(90);
      if (lookahead == ']') ADVANCE(117);
      if (lookahead == 'a') ADVANCE(41);
      if (lookahead == 'e') ADVANCE(40);
      if (lookahead == 'r') ADVANCE(25);
      if (lookahead == 's') ADVANCE(33);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(94);
      if (lookahead == '*' ||
          lookahead == '+') ADVANCE(136);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(86);
      if (('2' <= lookahead && lookahead <= '9')) ADVANCE(21);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('b' <= lookahead && lookahead <= 'f')) ADVANCE(42);
      if (sym__whitespace_character_set_1(lookahead)) ADVANCE(97);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(aux_sym_source_file_token1);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '@') ADVANCE(96);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(95);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(96);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(sym__whitespace);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(sym__whitespace);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '@') ADVANCE(165);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(anon_sym_ATparam);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(anon_sym_option);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(anon_sym_value);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(anon_sym_set);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(anon_sym_equ);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(anon_sym_ATinclude);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(anon_sym_only);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(anon_sym_ATsegment);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(anon_sym_end);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(anon_sym_ATcode);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(anon_sym_export);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(anon_sym_ATrelocate);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(anon_sym_ATdata);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(anon_sym_string);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(anon_sym_null);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(anon_sym_reserve);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(anon_sym_array);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(anon_sym_bin);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(aux_sym_data_bin_array_token1);
      if (lookahead == 'b' ||
          lookahead == 'd') ADVANCE(129);
      if (lookahead == 'h') ADVANCE(141);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(119);
      if (('2' <= lookahead && lookahead <= '9')) ADVANCE(124);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(130);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(aux_sym_data_bin_array_token1);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(120);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(anon_sym_hex);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(aux_sym_data_hex_array_token1);
      if (lookahead == '0') ADVANCE(150);
      if (lookahead == '1') ADVANCE(151);
      if (lookahead == '2') ADVANCE(152);
      if (lookahead == 'h') ADVANCE(141);
      if (lookahead == 'r') ADVANCE(68);
      if (('3' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(130);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(aux_sym_data_hex_array_token1);
      if (lookahead == 'c') ADVANCE(133);
      if (lookahead == 'h') ADVANCE(141);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(130);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(aux_sym_data_hex_array_token1);
      if (lookahead == 'd') ADVANCE(129);
      if (lookahead == 'h') ADVANCE(141);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(124);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(130);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(aux_sym_data_hex_array_token1);
      if (lookahead == 'e') ADVANCE(123);
      if (lookahead == 'h') ADVANCE(141);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(130);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(aux_sym_data_hex_array_token1);
      if (lookahead == 'h') ADVANCE(141);
      if (lookahead == 'i') ADVANCE(55);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(130);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(aux_sym_data_hex_array_token1);
      if (lookahead == 'h') ADVANCE(141);
      if (lookahead == 'n') ADVANCE(20);
      if (lookahead == 'q') ADVANCE(79);
      if (lookahead == 'x') ADVANCE(64);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(130);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(aux_sym_data_hex_array_token1);
      if (lookahead == 'h') ADVANCE(141);
      if (lookahead == 'p') ADVANCE(148);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(130);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(aux_sym_data_hex_array_token1);
      if (lookahead == 'h') ADVANCE(141);
      if (lookahead == 'l' ||
          lookahead == 's' ||
          lookahead == 'x') ADVANCE(139);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(130);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(aux_sym_data_hex_array_token1);
      if (lookahead == 'h') ADVANCE(141);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(130);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(aux_sym_data_hex_array_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(131);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(anon_sym_dec);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(anon_sym_dec);
      if (lookahead == 'h') ADVANCE(141);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(130);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(aux_sym_data_dec_array_token1);
      if (lookahead == 'd') ADVANCE(141);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(134);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(aux_sym_data_dec_array_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(135);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(aux_sym__equ_token1);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(aux_sym__equ_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(134);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(aux_sym__equ_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(19);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(sym_number);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == 'h') ADVANCE(141);
      if (lookahead == 'l' ||
          lookahead == 's' ||
          lookahead == 'x') ADVANCE(139);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(42);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == 'l' ||
          lookahead == 's' ||
          lookahead == 'x') ADVANCE(139);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(sym_label);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(142);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(sym_string);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(sym_param);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(144);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(sym_seg);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(145);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(anon_sym_zr);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(anon_sym_rp);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(anon_sym_fp);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(anon_sym_sp);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(anon_sym_a0);
      if (lookahead == 'h') ADVANCE(141);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(130);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(anon_sym_a1);
      if (lookahead == 'h') ADVANCE(141);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(130);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(anon_sym_a2);
      if (lookahead == 'h') ADVANCE(141);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(130);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(anon_sym_v0);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(anon_sym_v1);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(anon_sym_v2);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(anon_sym_v3);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(anon_sym_s0);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(anon_sym_s1);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(anon_sym_s2);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(anon_sym_s3);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(anon_sym_s4);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(anon_sym_s5);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(anon_sym_s6);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(sym_instruction);
      if (lookahead == '@') ADVANCE(96);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(95);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(sym_instruction);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '@') ADVANCE(165);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 0},
  [2] = {.lex_state = 0},
  [3] = {.lex_state = 0},
  [4] = {.lex_state = 0},
  [5] = {.lex_state = 0},
  [6] = {.lex_state = 0},
  [7] = {.lex_state = 0},
  [8] = {.lex_state = 0},
  [9] = {.lex_state = 0},
  [10] = {.lex_state = 0},
  [11] = {.lex_state = 92},
  [12] = {.lex_state = 7},
  [13] = {.lex_state = 7},
  [14] = {.lex_state = 5},
  [15] = {.lex_state = 6},
  [16] = {.lex_state = 92},
  [17] = {.lex_state = 5},
  [18] = {.lex_state = 6},
  [19] = {.lex_state = 2},
  [20] = {.lex_state = 7},
  [21] = {.lex_state = 6},
  [22] = {.lex_state = 5},
  [23] = {.lex_state = 5},
  [24] = {.lex_state = 92},
  [25] = {.lex_state = 2},
  [26] = {.lex_state = 2},
  [27] = {.lex_state = 6},
  [28] = {.lex_state = 7},
  [29] = {.lex_state = 92},
  [30] = {.lex_state = 2},
  [31] = {.lex_state = 2},
  [32] = {.lex_state = 6},
  [33] = {.lex_state = 5},
  [34] = {.lex_state = 92},
  [35] = {.lex_state = 92},
  [36] = {.lex_state = 92},
  [37] = {.lex_state = 5},
  [38] = {.lex_state = 5},
  [39] = {.lex_state = 0},
  [40] = {.lex_state = 92},
  [41] = {.lex_state = 0},
  [42] = {.lex_state = 0},
  [43] = {.lex_state = 0},
  [44] = {.lex_state = 0},
  [45] = {.lex_state = 92},
  [46] = {.lex_state = 7},
  [47] = {.lex_state = 2},
  [48] = {.lex_state = 5},
  [49] = {.lex_state = 92},
  [50] = {.lex_state = 7},
  [51] = {.lex_state = 7},
  [52] = {.lex_state = 92},
  [53] = {.lex_state = 0},
  [54] = {.lex_state = 6},
  [55] = {.lex_state = 0},
  [56] = {.lex_state = 92},
  [57] = {.lex_state = 92},
  [58] = {.lex_state = 0},
  [59] = {.lex_state = 0},
  [60] = {.lex_state = 0},
  [61] = {.lex_state = 0},
  [62] = {.lex_state = 0},
  [63] = {.lex_state = 0},
  [64] = {.lex_state = 0},
  [65] = {.lex_state = 0},
  [66] = {.lex_state = 92},
  [67] = {.lex_state = 0},
  [68] = {.lex_state = 92},
  [69] = {.lex_state = 0},
  [70] = {.lex_state = 0},
  [71] = {.lex_state = 0},
  [72] = {.lex_state = 0},
  [73] = {.lex_state = 0},
  [74] = {.lex_state = 0},
  [75] = {.lex_state = 0},
  [76] = {.lex_state = 0},
  [77] = {.lex_state = 0},
  [78] = {.lex_state = 0},
  [79] = {.lex_state = 0},
  [80] = {.lex_state = 0},
  [81] = {.lex_state = 0},
  [82] = {.lex_state = 0},
  [83] = {.lex_state = 0},
  [84] = {.lex_state = 0},
  [85] = {.lex_state = 0},
  [86] = {.lex_state = 0},
  [87] = {.lex_state = 0},
  [88] = {.lex_state = 0},
  [89] = {.lex_state = 0},
  [90] = {.lex_state = 92},
  [91] = {.lex_state = 0},
  [92] = {.lex_state = 0},
  [93] = {.lex_state = 0},
  [94] = {.lex_state = 0},
  [95] = {.lex_state = 0},
  [96] = {.lex_state = 0},
  [97] = {.lex_state = 0},
  [98] = {.lex_state = 0},
  [99] = {.lex_state = 0},
  [100] = {.lex_state = 92},
  [101] = {.lex_state = 0},
  [102] = {.lex_state = 0},
  [103] = {.lex_state = 0},
  [104] = {.lex_state = 92},
  [105] = {.lex_state = 0},
  [106] = {.lex_state = 0},
  [107] = {.lex_state = 0},
  [108] = {.lex_state = 0},
  [109] = {.lex_state = 0},
  [110] = {.lex_state = 0},
  [111] = {.lex_state = 0},
  [112] = {.lex_state = 0},
  [113] = {.lex_state = 92},
  [114] = {.lex_state = 0},
  [115] = {.lex_state = 0},
  [116] = {.lex_state = 92},
  [117] = {.lex_state = 0},
  [118] = {.lex_state = 92},
  [119] = {.lex_state = 92},
  [120] = {.lex_state = 0},
  [121] = {.lex_state = 92},
  [122] = {.lex_state = 0},
  [123] = {.lex_state = 0},
  [124] = {.lex_state = 92},
  [125] = {.lex_state = 0},
  [126] = {.lex_state = 0},
  [127] = {.lex_state = 0},
  [128] = {.lex_state = 0},
  [129] = {.lex_state = 0},
  [130] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [aux_sym_source_file_token1] = ACTIONS(1),
    [sym_comment] = ACTIONS(3),
    [sym__whitespace] = ACTIONS(3),
    [anon_sym_ATparam] = ACTIONS(1),
    [anon_sym_option] = ACTIONS(1),
    [anon_sym_value] = ACTIONS(1),
    [anon_sym_set] = ACTIONS(1),
    [anon_sym_equ] = ACTIONS(1),
    [anon_sym_ATinclude] = ACTIONS(1),
    [anon_sym_only] = ACTIONS(1),
    [anon_sym_ATsegment] = ACTIONS(1),
    [anon_sym_end] = ACTIONS(1),
    [anon_sym_ATcode] = ACTIONS(1),
    [anon_sym_export] = ACTIONS(1),
    [anon_sym_ATrelocate] = ACTIONS(1),
    [anon_sym_ATdata] = ACTIONS(1),
    [anon_sym_string] = ACTIONS(1),
    [anon_sym_null] = ACTIONS(1),
    [anon_sym_reserve] = ACTIONS(1),
    [anon_sym_array] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [anon_sym_bin] = ACTIONS(1),
    [aux_sym_data_bin_array_token1] = ACTIONS(1),
    [anon_sym_hex] = ACTIONS(1),
    [aux_sym_data_hex_array_token1] = ACTIONS(1),
    [anon_sym_dec] = ACTIONS(1),
    [aux_sym_data_dec_array_token1] = ACTIONS(1),
    [aux_sym__equ_token1] = ACTIONS(1),
    [sym_number] = ACTIONS(1),
    [sym_label] = ACTIONS(1),
    [sym_string] = ACTIONS(1),
    [sym_param] = ACTIONS(1),
    [sym_seg] = ACTIONS(1),
    [anon_sym_zr] = ACTIONS(1),
    [anon_sym_rp] = ACTIONS(1),
    [anon_sym_fp] = ACTIONS(1),
    [anon_sym_sp] = ACTIONS(1),
    [anon_sym_a0] = ACTIONS(1),
    [anon_sym_a1] = ACTIONS(1),
    [anon_sym_a2] = ACTIONS(1),
    [anon_sym_v0] = ACTIONS(1),
    [anon_sym_v1] = ACTIONS(1),
    [anon_sym_v2] = ACTIONS(1),
    [anon_sym_v3] = ACTIONS(1),
    [anon_sym_s0] = ACTIONS(1),
    [anon_sym_s1] = ACTIONS(1),
    [anon_sym_s2] = ACTIONS(1),
    [anon_sym_s3] = ACTIONS(1),
    [anon_sym_s4] = ACTIONS(1),
    [anon_sym_s5] = ACTIONS(1),
    [anon_sym_s6] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(120),
    [sym__definition] = STATE(75),
    [sym_param_option] = STATE(75),
    [sym_param_value_set] = STATE(75),
    [sym_param_value_equ] = STATE(75),
    [sym_include] = STATE(75),
    [sym_segment] = STATE(75),
    [sym_code] = STATE(75),
    [sym_relocate] = STATE(75),
    [sym_data_string] = STATE(75),
    [sym_data_reserve] = STATE(75),
    [sym_data_array] = STATE(75),
    [sym_data_bin_array] = STATE(75),
    [sym_data_hex_array] = STATE(75),
    [sym_data_dec_array] = STATE(75),
    [aux_sym_source_file_repeat1] = STATE(2),
    [aux_sym_source_file_token1] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [sym__whitespace] = ACTIONS(3),
    [anon_sym_ATparam] = ACTIONS(7),
    [anon_sym_ATinclude] = ACTIONS(9),
    [anon_sym_ATsegment] = ACTIONS(11),
    [anon_sym_ATcode] = ACTIONS(13),
    [anon_sym_ATrelocate] = ACTIONS(15),
    [anon_sym_ATdata] = ACTIONS(17),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 12,
    ACTIONS(7), 1,
      anon_sym_ATparam,
    ACTIONS(9), 1,
      anon_sym_ATinclude,
    ACTIONS(11), 1,
      anon_sym_ATsegment,
    ACTIONS(13), 1,
      anon_sym_ATcode,
    ACTIONS(15), 1,
      anon_sym_ATrelocate,
    ACTIONS(17), 1,
      anon_sym_ATdata,
    ACTIONS(19), 1,
      ts_builtin_sym_end,
    ACTIONS(21), 1,
      aux_sym_source_file_token1,
    STATE(5), 1,
      aux_sym_source_file_repeat2,
    STATE(10), 1,
      aux_sym_source_file_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    STATE(39), 14,
      sym__definition,
      sym_param_option,
      sym_param_value_set,
      sym_param_value_equ,
      sym_include,
      sym_segment,
      sym_code,
      sym_relocate,
      sym_data_string,
      sym_data_reserve,
      sym_data_array,
      sym_data_bin_array,
      sym_data_hex_array,
      sym_data_dec_array,
  [51] = 12,
    ACTIONS(7), 1,
      anon_sym_ATparam,
    ACTIONS(9), 1,
      anon_sym_ATinclude,
    ACTIONS(11), 1,
      anon_sym_ATsegment,
    ACTIONS(13), 1,
      anon_sym_ATcode,
    ACTIONS(15), 1,
      anon_sym_ATrelocate,
    ACTIONS(17), 1,
      anon_sym_ATdata,
    ACTIONS(21), 1,
      aux_sym_source_file_token1,
    ACTIONS(23), 1,
      ts_builtin_sym_end,
    STATE(7), 1,
      aux_sym_source_file_repeat2,
    STATE(10), 1,
      aux_sym_source_file_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    STATE(41), 14,
      sym__definition,
      sym_param_option,
      sym_param_value_set,
      sym_param_value_equ,
      sym_include,
      sym_segment,
      sym_code,
      sym_relocate,
      sym_data_string,
      sym_data_reserve,
      sym_data_array,
      sym_data_bin_array,
      sym_data_hex_array,
      sym_data_dec_array,
  [102] = 11,
    ACTIONS(7), 1,
      anon_sym_ATparam,
    ACTIONS(9), 1,
      anon_sym_ATinclude,
    ACTIONS(13), 1,
      anon_sym_ATcode,
    ACTIONS(15), 1,
      anon_sym_ATrelocate,
    ACTIONS(17), 1,
      anon_sym_ATdata,
    ACTIONS(21), 1,
      aux_sym_source_file_token1,
    ACTIONS(25), 1,
      anon_sym_ATsegment,
    STATE(8), 1,
      aux_sym_source_file_repeat2,
    STATE(10), 1,
      aux_sym_source_file_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    STATE(63), 14,
      sym__definition,
      sym_param_option,
      sym_param_value_set,
      sym_param_value_equ,
      sym_include,
      sym_segment,
      sym_code,
      sym_relocate,
      sym_data_string,
      sym_data_reserve,
      sym_data_array,
      sym_data_bin_array,
      sym_data_hex_array,
      sym_data_dec_array,
  [150] = 10,
    ACTIONS(7), 1,
      anon_sym_ATparam,
    ACTIONS(9), 1,
      anon_sym_ATinclude,
    ACTIONS(11), 1,
      anon_sym_ATsegment,
    ACTIONS(13), 1,
      anon_sym_ATcode,
    ACTIONS(15), 1,
      anon_sym_ATrelocate,
    ACTIONS(17), 1,
      anon_sym_ATdata,
    ACTIONS(27), 1,
      ts_builtin_sym_end,
    STATE(6), 1,
      aux_sym_source_file_repeat2,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    STATE(42), 14,
      sym__definition,
      sym_param_option,
      sym_param_value_set,
      sym_param_value_equ,
      sym_include,
      sym_segment,
      sym_code,
      sym_relocate,
      sym_data_string,
      sym_data_reserve,
      sym_data_array,
      sym_data_bin_array,
      sym_data_hex_array,
      sym_data_dec_array,
  [195] = 10,
    ACTIONS(29), 1,
      ts_builtin_sym_end,
    ACTIONS(31), 1,
      anon_sym_ATparam,
    ACTIONS(34), 1,
      anon_sym_ATinclude,
    ACTIONS(37), 1,
      anon_sym_ATsegment,
    ACTIONS(40), 1,
      anon_sym_ATcode,
    ACTIONS(43), 1,
      anon_sym_ATrelocate,
    ACTIONS(46), 1,
      anon_sym_ATdata,
    STATE(6), 1,
      aux_sym_source_file_repeat2,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    STATE(63), 14,
      sym__definition,
      sym_param_option,
      sym_param_value_set,
      sym_param_value_equ,
      sym_include,
      sym_segment,
      sym_code,
      sym_relocate,
      sym_data_string,
      sym_data_reserve,
      sym_data_array,
      sym_data_bin_array,
      sym_data_hex_array,
      sym_data_dec_array,
  [240] = 10,
    ACTIONS(7), 1,
      anon_sym_ATparam,
    ACTIONS(9), 1,
      anon_sym_ATinclude,
    ACTIONS(11), 1,
      anon_sym_ATsegment,
    ACTIONS(13), 1,
      anon_sym_ATcode,
    ACTIONS(15), 1,
      anon_sym_ATrelocate,
    ACTIONS(17), 1,
      anon_sym_ATdata,
    ACTIONS(49), 1,
      ts_builtin_sym_end,
    STATE(6), 1,
      aux_sym_source_file_repeat2,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    STATE(53), 14,
      sym__definition,
      sym_param_option,
      sym_param_value_set,
      sym_param_value_equ,
      sym_include,
      sym_segment,
      sym_code,
      sym_relocate,
      sym_data_string,
      sym_data_reserve,
      sym_data_array,
      sym_data_bin_array,
      sym_data_hex_array,
      sym_data_dec_array,
  [285] = 9,
    ACTIONS(7), 1,
      anon_sym_ATparam,
    ACTIONS(9), 1,
      anon_sym_ATinclude,
    ACTIONS(13), 1,
      anon_sym_ATcode,
    ACTIONS(15), 1,
      anon_sym_ATrelocate,
    ACTIONS(17), 1,
      anon_sym_ATdata,
    ACTIONS(51), 1,
      anon_sym_ATsegment,
    STATE(6), 1,
      aux_sym_source_file_repeat2,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    STATE(63), 14,
      sym__definition,
      sym_param_option,
      sym_param_value_set,
      sym_param_value_equ,
      sym_include,
      sym_segment,
      sym_code,
      sym_relocate,
      sym_data_string,
      sym_data_reserve,
      sym_data_array,
      sym_data_bin_array,
      sym_data_hex_array,
      sym_data_dec_array,
  [327] = 4,
    ACTIONS(21), 1,
      aux_sym_source_file_token1,
    STATE(10), 1,
      aux_sym_source_file_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(53), 7,
      ts_builtin_sym_end,
      anon_sym_ATparam,
      anon_sym_ATinclude,
      anon_sym_ATsegment,
      anon_sym_ATcode,
      anon_sym_ATrelocate,
      anon_sym_ATdata,
  [347] = 4,
    ACTIONS(57), 1,
      aux_sym_source_file_token1,
    STATE(10), 1,
      aux_sym_source_file_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(55), 7,
      ts_builtin_sym_end,
      anon_sym_ATparam,
      anon_sym_ATinclude,
      anon_sym_ATsegment,
      anon_sym_ATcode,
      anon_sym_ATrelocate,
      anon_sym_ATdata,
  [367] = 5,
    ACTIONS(60), 1,
      aux_sym__equ_token1,
    ACTIONS(64), 1,
      sym_seg,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(62), 2,
      sym_number,
      sym_param,
    STATE(58), 2,
      sym__equ,
      sym_seg_label,
  [386] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(66), 1,
      aux_sym_source_file_token1,
    ACTIONS(68), 1,
      sym__whitespace,
    ACTIONS(70), 1,
      anon_sym_ATcode,
    ACTIONS(72), 1,
      sym_instruction,
    STATE(28), 1,
      aux_sym_source_file_repeat1,
    STATE(50), 1,
      aux_sym_code_repeat1,
  [408] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(66), 1,
      aux_sym_source_file_token1,
    ACTIONS(68), 1,
      sym__whitespace,
    ACTIONS(72), 1,
      sym_instruction,
    ACTIONS(74), 1,
      anon_sym_ATcode,
    STATE(28), 1,
      aux_sym_source_file_repeat1,
    STATE(51), 1,
      aux_sym_code_repeat1,
  [430] = 5,
    ACTIONS(76), 1,
      aux_sym_source_file_token1,
    ACTIONS(78), 1,
      anon_sym_RBRACK,
    ACTIONS(80), 1,
      aux_sym_data_bin_array_token1,
    STATE(38), 1,
      aux_sym_data_bin_array_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [447] = 5,
    ACTIONS(82), 1,
      aux_sym_source_file_token1,
    ACTIONS(84), 1,
      anon_sym_RBRACK,
    ACTIONS(86), 1,
      aux_sym_data_hex_array_token1,
    STATE(27), 1,
      aux_sym_data_hex_array_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [464] = 5,
    ACTIONS(88), 1,
      aux_sym_source_file_token1,
    ACTIONS(90), 1,
      anon_sym_RBRACK,
    ACTIONS(92), 1,
      sym_number,
    STATE(34), 1,
      aux_sym_data_array_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [481] = 5,
    ACTIONS(94), 1,
      anon_sym_LBRACK,
    ACTIONS(96), 1,
      anon_sym_bin,
    ACTIONS(98), 1,
      anon_sym_hex,
    ACTIONS(100), 1,
      anon_sym_dec,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [498] = 5,
    ACTIONS(86), 1,
      aux_sym_data_hex_array_token1,
    ACTIONS(102), 1,
      aux_sym_source_file_token1,
    ACTIONS(104), 1,
      anon_sym_RBRACK,
    STATE(21), 1,
      aux_sym_data_hex_array_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [515] = 5,
    ACTIONS(106), 1,
      aux_sym_source_file_token1,
    ACTIONS(109), 1,
      anon_sym_RBRACK,
    ACTIONS(111), 1,
      aux_sym_data_dec_array_token1,
    STATE(19), 1,
      aux_sym_data_dec_array_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [532] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(66), 1,
      aux_sym_source_file_token1,
    ACTIONS(68), 1,
      sym__whitespace,
    ACTIONS(114), 1,
      anon_sym_ATcode,
    ACTIONS(116), 1,
      sym_instruction,
    STATE(28), 1,
      aux_sym_source_file_repeat1,
  [551] = 5,
    ACTIONS(118), 1,
      aux_sym_source_file_token1,
    ACTIONS(121), 1,
      anon_sym_RBRACK,
    ACTIONS(123), 1,
      aux_sym_data_hex_array_token1,
    STATE(21), 1,
      aux_sym_data_hex_array_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [568] = 5,
    ACTIONS(80), 1,
      aux_sym_data_bin_array_token1,
    ACTIONS(126), 1,
      aux_sym_source_file_token1,
    ACTIONS(128), 1,
      anon_sym_RBRACK,
    STATE(23), 1,
      aux_sym_data_bin_array_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [585] = 5,
    ACTIONS(130), 1,
      aux_sym_source_file_token1,
    ACTIONS(133), 1,
      anon_sym_RBRACK,
    ACTIONS(135), 1,
      aux_sym_data_bin_array_token1,
    STATE(23), 1,
      aux_sym_data_bin_array_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [602] = 5,
    ACTIONS(138), 1,
      aux_sym_source_file_token1,
    ACTIONS(141), 1,
      anon_sym_RBRACK,
    ACTIONS(143), 1,
      sym_number,
    STATE(24), 1,
      aux_sym_data_array_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [619] = 5,
    ACTIONS(146), 1,
      aux_sym_source_file_token1,
    ACTIONS(148), 1,
      anon_sym_RBRACK,
    ACTIONS(150), 1,
      aux_sym_data_dec_array_token1,
    STATE(19), 1,
      aux_sym_data_dec_array_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [636] = 5,
    ACTIONS(150), 1,
      aux_sym_data_dec_array_token1,
    ACTIONS(152), 1,
      aux_sym_source_file_token1,
    ACTIONS(154), 1,
      anon_sym_RBRACK,
    STATE(25), 1,
      aux_sym_data_dec_array_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [653] = 5,
    ACTIONS(86), 1,
      aux_sym_data_hex_array_token1,
    ACTIONS(102), 1,
      aux_sym_source_file_token1,
    ACTIONS(156), 1,
      anon_sym_RBRACK,
    STATE(21), 1,
      aux_sym_data_hex_array_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [670] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(55), 1,
      anon_sym_ATcode,
    ACTIONS(68), 1,
      sym__whitespace,
    ACTIONS(158), 1,
      aux_sym_source_file_token1,
    ACTIONS(161), 1,
      sym_instruction,
    STATE(28), 1,
      aux_sym_source_file_repeat1,
  [689] = 5,
    ACTIONS(92), 1,
      sym_number,
    ACTIONS(163), 1,
      aux_sym_source_file_token1,
    ACTIONS(165), 1,
      anon_sym_RBRACK,
    STATE(24), 1,
      aux_sym_data_array_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [706] = 5,
    ACTIONS(150), 1,
      aux_sym_data_dec_array_token1,
    ACTIONS(167), 1,
      aux_sym_source_file_token1,
    ACTIONS(169), 1,
      anon_sym_RBRACK,
    STATE(31), 1,
      aux_sym_data_dec_array_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [723] = 5,
    ACTIONS(146), 1,
      aux_sym_source_file_token1,
    ACTIONS(150), 1,
      aux_sym_data_dec_array_token1,
    ACTIONS(171), 1,
      anon_sym_RBRACK,
    STATE(19), 1,
      aux_sym_data_dec_array_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [740] = 5,
    ACTIONS(86), 1,
      aux_sym_data_hex_array_token1,
    ACTIONS(173), 1,
      aux_sym_source_file_token1,
    ACTIONS(175), 1,
      anon_sym_RBRACK,
    STATE(18), 1,
      aux_sym_data_hex_array_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [757] = 5,
    ACTIONS(80), 1,
      aux_sym_data_bin_array_token1,
    ACTIONS(177), 1,
      aux_sym_source_file_token1,
    ACTIONS(179), 1,
      anon_sym_RBRACK,
    STATE(22), 1,
      aux_sym_data_bin_array_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [774] = 5,
    ACTIONS(92), 1,
      sym_number,
    ACTIONS(163), 1,
      aux_sym_source_file_token1,
    ACTIONS(181), 1,
      anon_sym_RBRACK,
    STATE(24), 1,
      aux_sym_data_array_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [791] = 5,
    ACTIONS(183), 1,
      anon_sym_export,
    ACTIONS(185), 1,
      anon_sym_string,
    ACTIONS(187), 1,
      anon_sym_reserve,
    ACTIONS(189), 1,
      anon_sym_array,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [808] = 5,
    ACTIONS(92), 1,
      sym_number,
    ACTIONS(191), 1,
      aux_sym_source_file_token1,
    ACTIONS(193), 1,
      anon_sym_RBRACK,
    STATE(29), 1,
      aux_sym_data_array_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [825] = 5,
    ACTIONS(195), 1,
      anon_sym_LBRACK,
    ACTIONS(197), 1,
      anon_sym_bin,
    ACTIONS(199), 1,
      anon_sym_hex,
    ACTIONS(201), 1,
      anon_sym_dec,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [842] = 5,
    ACTIONS(80), 1,
      aux_sym_data_bin_array_token1,
    ACTIONS(126), 1,
      aux_sym_source_file_token1,
    ACTIONS(203), 1,
      anon_sym_RBRACK,
    STATE(23), 1,
      aux_sym_data_bin_array_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [859] = 4,
    ACTIONS(205), 1,
      ts_builtin_sym_end,
    ACTIONS(207), 1,
      aux_sym_source_file_token1,
    STATE(9), 1,
      aux_sym_source_file_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [873] = 3,
    ACTIONS(211), 1,
      sym_number,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(209), 2,
      ts_builtin_sym_end,
      aux_sym_source_file_token1,
  [885] = 4,
    ACTIONS(207), 1,
      aux_sym_source_file_token1,
    ACTIONS(213), 1,
      ts_builtin_sym_end,
    STATE(9), 1,
      aux_sym_source_file_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [899] = 4,
    ACTIONS(207), 1,
      aux_sym_source_file_token1,
    ACTIONS(215), 1,
      ts_builtin_sym_end,
    STATE(9), 1,
      aux_sym_source_file_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [913] = 3,
    ACTIONS(219), 1,
      anon_sym_only,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(217), 2,
      ts_builtin_sym_end,
      aux_sym_source_file_token1,
  [925] = 3,
    ACTIONS(223), 1,
      anon_sym_null,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(221), 2,
      ts_builtin_sym_end,
      aux_sym_source_file_token1,
  [937] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(225), 3,
      aux_sym_source_file_token1,
      anon_sym_RBRACK,
      sym_number,
  [947] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(68), 1,
      sym__whitespace,
    ACTIONS(227), 1,
      anon_sym_ATcode,
    ACTIONS(229), 1,
      sym_instruction,
    STATE(46), 1,
      aux_sym_code_repeat1,
  [963] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(232), 3,
      aux_sym_source_file_token1,
      anon_sym_RBRACK,
      aux_sym_data_dec_array_token1,
  [973] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(234), 3,
      aux_sym_source_file_token1,
      anon_sym_RBRACK,
      aux_sym_data_bin_array_token1,
  [983] = 4,
    ACTIONS(236), 1,
      anon_sym_string,
    ACTIONS(238), 1,
      anon_sym_reserve,
    ACTIONS(240), 1,
      anon_sym_array,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [997] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(68), 1,
      sym__whitespace,
    ACTIONS(72), 1,
      sym_instruction,
    ACTIONS(242), 1,
      anon_sym_ATcode,
    STATE(46), 1,
      aux_sym_code_repeat1,
  [1013] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(68), 1,
      sym__whitespace,
    ACTIONS(72), 1,
      sym_instruction,
    ACTIONS(244), 1,
      anon_sym_ATcode,
    STATE(46), 1,
      aux_sym_code_repeat1,
  [1029] = 3,
    STATE(87), 1,
      sym__addr,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(246), 2,
      sym_number,
      sym_param,
  [1041] = 4,
    ACTIONS(207), 1,
      aux_sym_source_file_token1,
    ACTIONS(248), 1,
      ts_builtin_sym_end,
    STATE(9), 1,
      aux_sym_source_file_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [1055] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(250), 3,
      aux_sym_source_file_token1,
      anon_sym_RBRACK,
      aux_sym_data_hex_array_token1,
  [1065] = 3,
    ACTIONS(254), 1,
      anon_sym_null,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(252), 2,
      ts_builtin_sym_end,
      aux_sym_source_file_token1,
  [1077] = 3,
    ACTIONS(258), 1,
      sym_number,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(256), 2,
      ts_builtin_sym_end,
      aux_sym_source_file_token1,
  [1089] = 3,
    STATE(98), 1,
      sym__addr,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(260), 2,
      sym_number,
      sym_param,
  [1101] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(262), 2,
      ts_builtin_sym_end,
      aux_sym_source_file_token1,
  [1110] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(264), 2,
      ts_builtin_sym_end,
      aux_sym_source_file_token1,
  [1119] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(266), 2,
      ts_builtin_sym_end,
      aux_sym_source_file_token1,
  [1128] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(268), 2,
      ts_builtin_sym_end,
      aux_sym_source_file_token1,
  [1137] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(270), 2,
      ts_builtin_sym_end,
      aux_sym_source_file_token1,
  [1146] = 3,
    ACTIONS(207), 1,
      aux_sym_source_file_token1,
    STATE(9), 1,
      aux_sym_source_file_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [1157] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(272), 2,
      ts_builtin_sym_end,
      aux_sym_source_file_token1,
  [1166] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(274), 2,
      ts_builtin_sym_end,
      aux_sym_source_file_token1,
  [1175] = 3,
    ACTIONS(276), 1,
      anon_sym_end,
    ACTIONS(278), 1,
      sym_seg,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [1186] = 3,
    ACTIONS(280), 1,
      anon_sym_option,
    ACTIONS(282), 1,
      anon_sym_value,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [1197] = 3,
    ACTIONS(284), 1,
      anon_sym_export,
    ACTIONS(286), 1,
      sym_label,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [1208] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(288), 2,
      ts_builtin_sym_end,
      aux_sym_source_file_token1,
  [1217] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(290), 2,
      ts_builtin_sym_end,
      aux_sym_source_file_token1,
  [1226] = 3,
    ACTIONS(292), 1,
      aux_sym_source_file_token1,
    STATE(20), 1,
      aux_sym_source_file_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [1237] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(294), 2,
      ts_builtin_sym_end,
      aux_sym_source_file_token1,
  [1246] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(296), 2,
      ts_builtin_sym_end,
      aux_sym_source_file_token1,
  [1255] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(298), 2,
      ts_builtin_sym_end,
      aux_sym_source_file_token1,
  [1264] = 3,
    ACTIONS(300), 1,
      aux_sym_source_file_token1,
    STATE(3), 1,
      aux_sym_source_file_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [1275] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(302), 2,
      ts_builtin_sym_end,
      aux_sym_source_file_token1,
  [1284] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(304), 2,
      ts_builtin_sym_end,
      aux_sym_source_file_token1,
  [1293] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(306), 2,
      ts_builtin_sym_end,
      aux_sym_source_file_token1,
  [1302] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(308), 2,
      ts_builtin_sym_end,
      aux_sym_source_file_token1,
  [1311] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(310), 2,
      ts_builtin_sym_end,
      aux_sym_source_file_token1,
  [1320] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(312), 2,
      ts_builtin_sym_end,
      aux_sym_source_file_token1,
  [1329] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(314), 2,
      ts_builtin_sym_end,
      aux_sym_source_file_token1,
  [1338] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(316), 2,
      ts_builtin_sym_end,
      aux_sym_source_file_token1,
  [1347] = 3,
    ACTIONS(318), 1,
      aux_sym_source_file_token1,
    STATE(13), 1,
      aux_sym_source_file_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [1358] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(320), 2,
      ts_builtin_sym_end,
      aux_sym_source_file_token1,
  [1367] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(322), 2,
      ts_builtin_sym_end,
      aux_sym_source_file_token1,
  [1376] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(324), 2,
      ts_builtin_sym_end,
      aux_sym_source_file_token1,
  [1385] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(326), 2,
      ts_builtin_sym_end,
      aux_sym_source_file_token1,
  [1394] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(328), 2,
      ts_builtin_sym_end,
      aux_sym_source_file_token1,
  [1403] = 3,
    ACTIONS(278), 1,
      sym_seg,
    ACTIONS(330), 1,
      anon_sym_end,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [1414] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(332), 2,
      ts_builtin_sym_end,
      aux_sym_source_file_token1,
  [1423] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(334), 2,
      ts_builtin_sym_end,
      aux_sym_source_file_token1,
  [1432] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(336), 2,
      ts_builtin_sym_end,
      aux_sym_source_file_token1,
  [1441] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(338), 2,
      ts_builtin_sym_end,
      aux_sym_source_file_token1,
  [1450] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(340), 2,
      ts_builtin_sym_end,
      aux_sym_source_file_token1,
  [1459] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(342), 2,
      ts_builtin_sym_end,
      aux_sym_source_file_token1,
  [1468] = 3,
    ACTIONS(344), 1,
      aux_sym_source_file_token1,
    STATE(12), 1,
      aux_sym_source_file_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [1479] = 3,
    ACTIONS(346), 1,
      aux_sym_source_file_token1,
    STATE(4), 1,
      aux_sym_source_file_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [1490] = 2,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
    ACTIONS(348), 2,
      ts_builtin_sym_end,
      aux_sym_source_file_token1,
  [1499] = 3,
    ACTIONS(350), 1,
      anon_sym_set,
    ACTIONS(352), 1,
      anon_sym_equ,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [1510] = 2,
    ACTIONS(354), 1,
      anon_sym_LBRACK,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [1518] = 2,
    ACTIONS(356), 1,
      sym_label,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [1526] = 2,
    ACTIONS(358), 1,
      sym_seg,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [1534] = 2,
    ACTIONS(360), 1,
      sym_number,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [1542] = 2,
    ACTIONS(362), 1,
      sym_param,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [1550] = 2,
    ACTIONS(364), 1,
      sym_label,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [1558] = 2,
    ACTIONS(366), 1,
      sym_label,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [1566] = 2,
    ACTIONS(368), 1,
      sym_label,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [1574] = 2,
    ACTIONS(370), 1,
      sym_string,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [1582] = 2,
    ACTIONS(372), 1,
      sym_label,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [1590] = 2,
    ACTIONS(374), 1,
      sym_param,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [1598] = 2,
    ACTIONS(376), 1,
      anon_sym_LBRACK,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [1606] = 2,
    ACTIONS(378), 1,
      sym_number,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [1614] = 2,
    ACTIONS(380), 1,
      anon_sym_LBRACK,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [1622] = 2,
    ACTIONS(382), 1,
      sym_label,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [1630] = 2,
    ACTIONS(384), 1,
      anon_sym_end,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [1638] = 2,
    ACTIONS(386), 1,
      sym_label,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [1646] = 2,
    ACTIONS(388), 1,
      sym_number,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [1654] = 2,
    ACTIONS(390), 1,
      anon_sym_end,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [1662] = 2,
    ACTIONS(392), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [1670] = 2,
    ACTIONS(394), 1,
      anon_sym_end,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [1678] = 2,
    ACTIONS(396), 1,
      sym_seg,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [1686] = 2,
    ACTIONS(398), 1,
      sym_string,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [1694] = 2,
    ACTIONS(400), 1,
      anon_sym_end,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [1702] = 2,
    ACTIONS(402), 1,
      sym_label,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [1710] = 2,
    ACTIONS(278), 1,
      sym_seg,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [1718] = 2,
    ACTIONS(404), 1,
      anon_sym_LBRACK,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [1726] = 2,
    ACTIONS(406), 1,
      anon_sym_LBRACK,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [1734] = 2,
    ACTIONS(408), 1,
      anon_sym_LBRACK,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
  [1742] = 2,
    ACTIONS(410), 1,
      sym_string,
    ACTIONS(3), 2,
      sym_comment,
      sym__whitespace,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 51,
  [SMALL_STATE(4)] = 102,
  [SMALL_STATE(5)] = 150,
  [SMALL_STATE(6)] = 195,
  [SMALL_STATE(7)] = 240,
  [SMALL_STATE(8)] = 285,
  [SMALL_STATE(9)] = 327,
  [SMALL_STATE(10)] = 347,
  [SMALL_STATE(11)] = 367,
  [SMALL_STATE(12)] = 386,
  [SMALL_STATE(13)] = 408,
  [SMALL_STATE(14)] = 430,
  [SMALL_STATE(15)] = 447,
  [SMALL_STATE(16)] = 464,
  [SMALL_STATE(17)] = 481,
  [SMALL_STATE(18)] = 498,
  [SMALL_STATE(19)] = 515,
  [SMALL_STATE(20)] = 532,
  [SMALL_STATE(21)] = 551,
  [SMALL_STATE(22)] = 568,
  [SMALL_STATE(23)] = 585,
  [SMALL_STATE(24)] = 602,
  [SMALL_STATE(25)] = 619,
  [SMALL_STATE(26)] = 636,
  [SMALL_STATE(27)] = 653,
  [SMALL_STATE(28)] = 670,
  [SMALL_STATE(29)] = 689,
  [SMALL_STATE(30)] = 706,
  [SMALL_STATE(31)] = 723,
  [SMALL_STATE(32)] = 740,
  [SMALL_STATE(33)] = 757,
  [SMALL_STATE(34)] = 774,
  [SMALL_STATE(35)] = 791,
  [SMALL_STATE(36)] = 808,
  [SMALL_STATE(37)] = 825,
  [SMALL_STATE(38)] = 842,
  [SMALL_STATE(39)] = 859,
  [SMALL_STATE(40)] = 873,
  [SMALL_STATE(41)] = 885,
  [SMALL_STATE(42)] = 899,
  [SMALL_STATE(43)] = 913,
  [SMALL_STATE(44)] = 925,
  [SMALL_STATE(45)] = 937,
  [SMALL_STATE(46)] = 947,
  [SMALL_STATE(47)] = 963,
  [SMALL_STATE(48)] = 973,
  [SMALL_STATE(49)] = 983,
  [SMALL_STATE(50)] = 997,
  [SMALL_STATE(51)] = 1013,
  [SMALL_STATE(52)] = 1029,
  [SMALL_STATE(53)] = 1041,
  [SMALL_STATE(54)] = 1055,
  [SMALL_STATE(55)] = 1065,
  [SMALL_STATE(56)] = 1077,
  [SMALL_STATE(57)] = 1089,
  [SMALL_STATE(58)] = 1101,
  [SMALL_STATE(59)] = 1110,
  [SMALL_STATE(60)] = 1119,
  [SMALL_STATE(61)] = 1128,
  [SMALL_STATE(62)] = 1137,
  [SMALL_STATE(63)] = 1146,
  [SMALL_STATE(64)] = 1157,
  [SMALL_STATE(65)] = 1166,
  [SMALL_STATE(66)] = 1175,
  [SMALL_STATE(67)] = 1186,
  [SMALL_STATE(68)] = 1197,
  [SMALL_STATE(69)] = 1208,
  [SMALL_STATE(70)] = 1217,
  [SMALL_STATE(71)] = 1226,
  [SMALL_STATE(72)] = 1237,
  [SMALL_STATE(73)] = 1246,
  [SMALL_STATE(74)] = 1255,
  [SMALL_STATE(75)] = 1264,
  [SMALL_STATE(76)] = 1275,
  [SMALL_STATE(77)] = 1284,
  [SMALL_STATE(78)] = 1293,
  [SMALL_STATE(79)] = 1302,
  [SMALL_STATE(80)] = 1311,
  [SMALL_STATE(81)] = 1320,
  [SMALL_STATE(82)] = 1329,
  [SMALL_STATE(83)] = 1338,
  [SMALL_STATE(84)] = 1347,
  [SMALL_STATE(85)] = 1358,
  [SMALL_STATE(86)] = 1367,
  [SMALL_STATE(87)] = 1376,
  [SMALL_STATE(88)] = 1385,
  [SMALL_STATE(89)] = 1394,
  [SMALL_STATE(90)] = 1403,
  [SMALL_STATE(91)] = 1414,
  [SMALL_STATE(92)] = 1423,
  [SMALL_STATE(93)] = 1432,
  [SMALL_STATE(94)] = 1441,
  [SMALL_STATE(95)] = 1450,
  [SMALL_STATE(96)] = 1459,
  [SMALL_STATE(97)] = 1468,
  [SMALL_STATE(98)] = 1479,
  [SMALL_STATE(99)] = 1490,
  [SMALL_STATE(100)] = 1499,
  [SMALL_STATE(101)] = 1510,
  [SMALL_STATE(102)] = 1518,
  [SMALL_STATE(103)] = 1526,
  [SMALL_STATE(104)] = 1534,
  [SMALL_STATE(105)] = 1542,
  [SMALL_STATE(106)] = 1550,
  [SMALL_STATE(107)] = 1558,
  [SMALL_STATE(108)] = 1566,
  [SMALL_STATE(109)] = 1574,
  [SMALL_STATE(110)] = 1582,
  [SMALL_STATE(111)] = 1590,
  [SMALL_STATE(112)] = 1598,
  [SMALL_STATE(113)] = 1606,
  [SMALL_STATE(114)] = 1614,
  [SMALL_STATE(115)] = 1622,
  [SMALL_STATE(116)] = 1630,
  [SMALL_STATE(117)] = 1638,
  [SMALL_STATE(118)] = 1646,
  [SMALL_STATE(119)] = 1654,
  [SMALL_STATE(120)] = 1662,
  [SMALL_STATE(121)] = 1670,
  [SMALL_STATE(122)] = 1678,
  [SMALL_STATE(123)] = 1686,
  [SMALL_STATE(124)] = 1694,
  [SMALL_STATE(125)] = 1702,
  [SMALL_STATE(126)] = 1710,
  [SMALL_STATE(127)] = 1718,
  [SMALL_STATE(128)] = 1726,
  [SMALL_STATE(129)] = 1734,
  [SMALL_STATE(130)] = 1742,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [19] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [23] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 2, .production_id = 1),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [27] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 2, .production_id = 3),
  [29] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat2, 2, .production_id = 9),
  [31] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat2, 2, .production_id = 9), SHIFT_REPEAT(67),
  [34] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat2, 2, .production_id = 9), SHIFT_REPEAT(130),
  [37] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat2, 2, .production_id = 9), SHIFT_REPEAT(126),
  [40] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat2, 2, .production_id = 9), SHIFT_REPEAT(68),
  [43] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat2, 2, .production_id = 9), SHIFT_REPEAT(122),
  [46] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat2, 2, .production_id = 9), SHIFT_REPEAT(35),
  [49] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 3, .production_id = 7),
  [51] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [53] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat2, 2, .production_id = 1),
  [55] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [57] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(10),
  [60] = {.entry = {.count = 1, .reusable = false}}, SHIFT(58),
  [62] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [64] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [66] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [68] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [70] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [72] = {.entry = {.count = 1, .reusable = false}}, SHIFT(71),
  [74] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [76] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [78] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [80] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [82] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [84] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [86] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [88] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [90] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [92] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [94] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [96] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [98] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [100] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [102] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [104] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [106] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_data_dec_array_repeat1, 2, .production_id = 29), SHIFT_REPEAT(19),
  [109] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_data_dec_array_repeat1, 2, .production_id = 29),
  [111] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_data_dec_array_repeat1, 2, .production_id = 29), SHIFT_REPEAT(47),
  [114] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_code_repeat1, 2, .production_id = 16),
  [116] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_code_repeat1, 2, .production_id = 16),
  [118] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_data_hex_array_repeat1, 2, .production_id = 29), SHIFT_REPEAT(21),
  [121] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_data_hex_array_repeat1, 2, .production_id = 29),
  [123] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_data_hex_array_repeat1, 2, .production_id = 29), SHIFT_REPEAT(54),
  [126] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [128] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [130] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_data_bin_array_repeat1, 2, .production_id = 29), SHIFT_REPEAT(23),
  [133] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_data_bin_array_repeat1, 2, .production_id = 29),
  [135] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_data_bin_array_repeat1, 2, .production_id = 29), SHIFT_REPEAT(48),
  [138] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_data_array_repeat1, 2, .production_id = 29), SHIFT_REPEAT(24),
  [141] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_data_array_repeat1, 2, .production_id = 29),
  [143] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_data_array_repeat1, 2, .production_id = 29), SHIFT_REPEAT(45),
  [146] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [148] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [150] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [152] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [154] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [156] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [158] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(28),
  [161] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [163] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [165] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [167] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [169] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [171] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [173] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [175] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [177] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [179] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [181] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [183] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [185] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [187] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [189] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [191] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [193] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [195] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [197] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [199] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [201] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [203] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [205] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 2, .production_id = 2),
  [207] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [209] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_data_reserve, 5, .production_id = 19),
  [211] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [213] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 3, .production_id = 6),
  [215] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 3, .production_id = 8),
  [217] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_include, 2),
  [219] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [221] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_data_string, 5, .production_id = 18),
  [223] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [225] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_data_array_repeat1, 1, .production_id = 22),
  [227] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_code_repeat1, 2, .production_id = 17),
  [229] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_code_repeat1, 2, .production_id = 17), SHIFT_REPEAT(71),
  [232] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_data_dec_array_repeat1, 1, .production_id = 22),
  [234] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_data_bin_array_repeat1, 1, .production_id = 22),
  [236] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [238] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [240] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [242] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [244] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [246] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [248] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 4, .production_id = 13),
  [250] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_data_hex_array_repeat1, 1, .production_id = 22),
  [252] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_data_string, 4, .production_id = 11),
  [254] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [256] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_data_reserve, 4, .production_id = 12),
  [258] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [260] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [262] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_param_value_equ, 5, .production_id = 14),
  [264] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_code, 7, .production_id = 31),
  [266] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_data_dec_array, 8, .production_id = 34),
  [268] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_data_hex_array, 8, .production_id = 34),
  [270] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_data_bin_array, 8, .production_id = 34),
  [272] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_param_value_set, 5, .production_id = 14),
  [274] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_data_dec_array, 7, .production_id = 33),
  [276] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [278] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [280] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [282] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [284] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [286] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [288] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_data_hex_array, 7, .production_id = 33),
  [290] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_code, 5, .production_id = 15),
  [292] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [294] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_data_bin_array, 7, .production_id = 33),
  [296] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_data_dec_array, 7, .production_id = 18),
  [298] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_include, 4, .production_id = 10),
  [300] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [302] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_data_hex_array, 7, .production_id = 18),
  [304] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_data_bin_array, 7, .production_id = 18),
  [306] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_data_array, 7, .production_id = 32),
  [308] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_segment, 7, .production_id = 30),
  [310] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_data_string, 5, .production_id = 20),
  [312] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_data_reserve, 5, .production_id = 21),
  [314] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_data_array, 5, .production_id = 11),
  [316] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_data_dec_array, 6, .production_id = 11),
  [318] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [320] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_data_hex_array, 6, .production_id = 11),
  [322] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_data_bin_array, 6, .production_id = 11),
  [324] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relocate, 3, .production_id = 5),
  [326] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_seg_label, 2, .production_id = 23),
  [328] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_segment, 6, .production_id = 5),
  [330] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [332] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_code, 6, .production_id = 24),
  [334] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_param_option, 3, .production_id = 4),
  [336] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_code, 6, .production_id = 25),
  [338] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_data_string, 6, .production_id = 26),
  [340] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_data_reserve, 6, .production_id = 27),
  [342] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_data_array, 6, .production_id = 18),
  [344] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [346] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [348] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_data_array, 6, .production_id = 28),
  [350] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [352] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [354] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [356] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [358] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [360] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [362] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [364] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [366] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [368] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [370] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [372] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [374] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [376] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [378] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [380] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [382] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [384] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [386] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [388] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [390] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [392] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [394] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [396] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [398] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [400] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [402] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [404] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [406] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [408] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [410] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_phinix(void) {
  static const TSLanguage language = {
    .version = LANGUAGE_VERSION,
    .symbol_count = SYMBOL_COUNT,
    .alias_count = ALIAS_COUNT,
    .token_count = TOKEN_COUNT,
    .external_token_count = EXTERNAL_TOKEN_COUNT,
    .state_count = STATE_COUNT,
    .large_state_count = LARGE_STATE_COUNT,
    .production_id_count = PRODUCTION_ID_COUNT,
    .field_count = FIELD_COUNT,
    .max_alias_sequence_length = MAX_ALIAS_SEQUENCE_LENGTH,
    .parse_table = &ts_parse_table[0][0],
    .small_parse_table = ts_small_parse_table,
    .small_parse_table_map = ts_small_parse_table_map,
    .parse_actions = ts_parse_actions,
    .symbol_names = ts_symbol_names,
    .field_names = ts_field_names,
    .field_map_slices = ts_field_map_slices,
    .field_map_entries = ts_field_map_entries,
    .symbol_metadata = ts_symbol_metadata,
    .public_symbol_map = ts_symbol_map,
    .alias_map = ts_non_terminal_alias_map,
    .alias_sequences = &ts_alias_sequences[0][0],
    .lex_modes = ts_lex_modes,
    .lex_fn = ts_lex,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
