/* Auto generated by make_method_table.rb */
#include "_autogen_builtin_symbol.h"

/*===== Array class =====*/
static const mrbc_sym method_symbols_Array[] = {
  MRBC_SYM(AND),
  MRBC_SYM(PLUS),
  MRBC_SYM(LT_LT),
  MRBC_SYM(BL_BR),
  MRBC_SYM(BL_BR_EQ),
  MRBC_SYM(at),
  MRBC_SYM(clear),
  MRBC_SYM(count),
  MRBC_SYM(delete_at),
  MRBC_SYM(dup),
  MRBC_SYM(empty_Q),
  MRBC_SYM(first),
  MRBC_SYM(include_Q),
#if MRBC_USE_STRING
  MRBC_SYM(inspect),
#endif
#if MRBC_USE_STRING
  MRBC_SYM(join),
#endif
  MRBC_SYM(last),
  MRBC_SYM(length),
  MRBC_SYM(max),
  MRBC_SYM(min),
  MRBC_SYM(minmax),
  MRBC_SYM(new),
  MRBC_SYM(pop),
  MRBC_SYM(push),
  MRBC_SYM(shift),
  MRBC_SYM(size),
#if MRBC_USE_STRING
  MRBC_SYM(to_s),
#endif
  MRBC_SYM(unshift),
  MRBC_SYM(OR),
};

static const mrbc_func_t method_functions_Array[] = {
  c_array_and,
  c_array_add,
  c_array_push,
  c_array_get,
  c_array_set,
  c_array_get,
  c_array_clear,
  c_array_size,
  c_array_delete_at,
  c_array_dup,
  c_array_empty,
  c_array_first,
  c_array_include,
#if MRBC_USE_STRING
  c_array_inspect,
#endif
#if MRBC_USE_STRING
  c_array_join,
#endif
  c_array_last,
  c_array_size,
  c_array_max,
  c_array_min,
  c_array_minmax,
  c_array_new,
  c_array_pop,
  c_array_push,
  c_array_shift,
  c_array_size,
#if MRBC_USE_STRING
  c_array_inspect,
#endif
  c_array_unshift,
  c_array_or,
};

struct RBuiltinClass mrbc_class_Array = {
  .sym_id = MRBC_SYM(Array),
  .num_builtin_method = sizeof(method_symbols_Array) / sizeof(mrbc_sym),
  .super = MRBC_CLASS(Object),
  .method_link = 0,
#if defined(MRBC_DEBUG)
  .name = "Array",
#endif
  .method_symbols = method_symbols_Array,
  .method_functions = method_functions_Array,
};
