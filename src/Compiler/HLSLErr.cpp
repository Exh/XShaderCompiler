/*
 * HLSLErr.cpp
 * 
 * This file is part of the XShaderCompiler project (Copyright (c) 2014-2017 by Lukas Hermanns)
 * See "LICENSE.txt" for license information.
 */

#include "HLSLErr.h"


namespace Xsc
{


#define CASE_TO_STR(IDENT) \
    case HLSLErr::IDENT: return #IDENT

// This function is auto-generated code.
std::string ErrToString(const HLSLErr errorCode)
{
    switch (errorCode)
    {
        CASE_TO_STR( Unknown                                 );
        CASE_TO_STR( ERR_COMMENTEOF                          );
        CASE_TO_STR( ERR_HEXTRUNCATED                        );
        CASE_TO_STR( ERR_OCTTRUNCATED                        );
        CASE_TO_STR( ERR_DECTRUNCATED                        );
        CASE_TO_STR( ERR_STRINGEOL                           );
        CASE_TO_STR( ERR_STRINGEOF                           );
        CASE_TO_STR( ERR_CHAREOF                             );
        CASE_TO_STR( ERR_TOK_VERSION                         );
        CASE_TO_STR( ERR_PP_SYNTAX                           );
        CASE_TO_STR( ERR_UNEXPECTEDTOKENS                    );
        CASE_TO_STR( ERR_UNEXPECTEDEOF                       );
        CASE_TO_STR( ERR_DIVZERO                             );
        CASE_TO_STR( ERR_INVALIDCOMMAND                      );
        CASE_TO_STR( ERR_INCLUDEFROMFILE                     );
        CASE_TO_STR( ERR_TOOMANYINCLUDES                     );
        CASE_TO_STR( ERR_FILE_OPEN                           );
        CASE_TO_STR( ERR_ELIF                                );
        CASE_TO_STR( ERR_ELSE                                );
        CASE_TO_STR( ERR_ENDIF                               );
        CASE_TO_STR( ERR_DUPLICATEPARAMATER                  );
        CASE_TO_STR( ERR_RESOURCE_OPEN                       );
        CASE_TO_STR( ERR_ELIF_ELSE                           );
        CASE_TO_STR( ERR_ELSE_ELSE                           );
        CASE_TO_STR( ERR_UNEXPECTEDEOF_MACRO                 );
        CASE_TO_STR( ERR_PARAMETERS_MACRO                    );
        CASE_TO_STR( ERR_PP_NOT_YET_IMPLEMENTED              );
        CASE_TO_STR( ERR_INVALID_INT_EXPR                    );
        CASE_TO_STR( ERR_MACRO_REDEFINITION                  );
        CASE_TO_STR( ERR_LATE_FULL_PATH                      );
        CASE_TO_STR( ERR_INVALID_FULL_PATH                   );
        CASE_TO_STR( ERR_PARSE_SYNTAX                        );
        CASE_TO_STR( ERR_REDEFINITION                        );
        CASE_TO_STR( ERR_UNDECLARED_IDENTIFIER               );
        CASE_TO_STR( ERR_INVALID_USE                         );
        CASE_TO_STR( ERR_EXTERN                              );
        CASE_TO_STR( ERR_STATIC                              );
        CASE_TO_STR( ERR_VOLATILE                            );
        CASE_TO_STR( ERR_INITIALIZERS                        );
        CASE_TO_STR( ERR_GROUPSHARED                         );
        CASE_TO_STR( ERR_NONLITERAL_INITIALIZER              );
        CASE_TO_STR( ERR_MISSING_INITIALIZERS                );
        CASE_TO_STR( ERR_ARGUMENTS                           );
        CASE_TO_STR( ERR_ARGUMENTS_BASETYPE                  );
        CASE_TO_STR( ERR_ARGUMENTS_INTRINSIC                 );
        CASE_TO_STR( ERR_UNSUPPORTED_CAST                    );
        CASE_TO_STR( ERR_SUBSCRIPT                           );
        CASE_TO_STR( ERR_NUMERIC_EXPECTED                    );
        CASE_TO_STR( ERR_TYPE_MISMATCH                       );
        CASE_TO_STR( ERR_PARSE_ARRAY_EXPECTED                );
        CASE_TO_STR( ERR_BASETYPE_EXPECTED                   );
        CASE_TO_STR( ERR_DETERMINANT                         );
        CASE_TO_STR( ERR_VECTOR_EXPECTED                     );
        CASE_TO_STR( ERR_LVALUE_EXPECTED                     );
        CASE_TO_STR( ERR_MATRIX_MULTIPLICATION               );
        CASE_TO_STR( ERR_PARSE_ARRAY_INDEX_OUT_OF_BOUNDS     );
        CASE_TO_STR( ERR_PARSE_IMAGINARY_SQUARE_ROOT         );
        CASE_TO_STR( ERR_PARSE_INDEFINITE_LOG                );
        CASE_TO_STR( ERR_PARSE_DIVISION_BY_ZERO              );
        CASE_TO_STR( ERR_CONST                               );
        CASE_TO_STR( ERR_REDEFINITION_FORMAL_PARAMETER       );
        CASE_TO_STR( ERR_UNSUPPORTED_TYPE_EXPR               );
        CASE_TO_STR( ERR_NUMERIC                             );
        CASE_TO_STR( ERR_PARSE_VERSION                       );
        CASE_TO_STR( ERR_ANNOTATIONS                         );
        CASE_TO_STR( ERR_SHADER_VERSION                      );
        CASE_TO_STR( ERR_PARSE_NOT_YET_IMPLEMENTED           );
        CASE_TO_STR( ERR_SEMANTICS                           );
        CASE_TO_STR( ERR_MISSING_DEFAULT_PARAMETER           );
        CASE_TO_STR( ERR_OUTPUT_INITIALIZER                  );
        CASE_TO_STR( ERR_CONST_OUTPUT                        );
        CASE_TO_STR( ERR_UNIFORM                             );
        CASE_TO_STR( ERR_USAGE                               );
        CASE_TO_STR( ERR_USAGE_VERSION                       );
        CASE_TO_STR( ERR_MATRIX_EXPECTED                     );
        CASE_TO_STR( ERR_SCALAR_EXPECTED                     );
        CASE_TO_STR( ERR_VECTOR_SIZE                         );
        CASE_TO_STR( ERR_MATRIX_SIZE                         );
        CASE_TO_STR( ERR_SHARED                              );
        CASE_TO_STR( ERR_INLINE                              );
        CASE_TO_STR( ERR_LITERAL_VARIABLE                    );
        CASE_TO_STR( ERR_ARRAY_LITERAL                       );
        CASE_TO_STR( ERR_ARRAY_SIZE                          );
        CASE_TO_STR( ERR_VECTOR_LITERAL                      );
        CASE_TO_STR( ERR_MATRIX_LITERAL                      );
        CASE_TO_STR( ERR_UNIFORM_OUT                         );
        CASE_TO_STR( ERR_SAMPLER                             );
        CASE_TO_STR( ERR_OBJECT_LITERALS                     );
        CASE_TO_STR( ERR_OBJECT_ASSIGNMENTS                  );
        CASE_TO_STR( ERR_SAMPLER_EXPECTED                    );
        CASE_TO_STR( ERR_AMBIGUOUS_FUNCTION_CALL             );
        CASE_TO_STR( ERR_PROTOTYPE                           );
        CASE_TO_STR( ERR_FUNCTION_HAS_BODY                   );
        CASE_TO_STR( ERR_PARSE_INDEFINITE_ACOS               );
        CASE_TO_STR( ERR_PARSE_INDEFINITE_ASIN               );
        CASE_TO_STR( ERR_ARRAY_IMPLICIT                      );
        CASE_TO_STR( ERR_ARRAY_IMPLICIT_ORDER                );
        CASE_TO_STR( ERR_ARRAY_IMPLICIT_VALUE                );
        CASE_TO_STR( ERR_ARRAY_IMPLICIT_SIZE                 );
        CASE_TO_STR( ERR_VOID_SEMANTIC                       );
        CASE_TO_STR( ERR_USAGE_MATRIX                        );
        CASE_TO_STR( ERR_REDEFINITION_LOOP_CONTROL           );
        CASE_TO_STR( ERR_RETURN_VOID                         );
        CASE_TO_STR( ERR_RETURN_VALUE                        );
        CASE_TO_STR( ERR_COMMA_EXPRESSION                    );
        CASE_TO_STR( ERR_BINARYTYPE_EXPECTED                 );
        CASE_TO_STR( ERR_GEOMETRY_CONFLICT                   );
        CASE_TO_STR( ERR_ATTRIBUTE                           );
        CASE_TO_STR( ERR_UNSIGNED_TYPE                       );
        CASE_TO_STR( ERR_DEPRECATED_IN_STRICT_MODE           );
        CASE_TO_STR( ERR_NO_METHODS                          );
        CASE_TO_STR( ERR_UNKNOWN_METHOD                      );
        CASE_TO_STR( ERR_TARGETUSAGE_INVALID                 );
        CASE_TO_STR( ERR_NO_OBJECTS_IN_STRUCTS               );
        CASE_TO_STR( ERR_PACK_OFFSET_IN_INVALID_SCOPE        );
        CASE_TO_STR( ERR_UNARY_NEGATE_OF_UNSIGNED            );
        CASE_TO_STR( ERR_OUT_OF_MEMORY                       );
        CASE_TO_STR( ERR_NON_COMPOUND_BASE                   );
        CASE_TO_STR( ERR_MULTI_CONCRETE_BASE                 );
        CASE_TO_STR( ERR_NOT_TEMPLATE_TYPE                   );
        CASE_TO_STR( ERR_STATIC_METHOD_MEMBER_USE            );
        CASE_TO_STR( ERR_NO_METHOD_PROTOTYPE                 );
        CASE_TO_STR( ERR_STATIC_METHOD_INSTANCE_CALL         );
        CASE_TO_STR( ERR_NO_STATIC_MEMBER_DECL               );
        CASE_TO_STR( ERR_STATIC_MEMBER_TYPE_MISMATCH         );
        CASE_TO_STR( ERR_INVALID_STATIC_MEMBER_SCOPE         );
        CASE_TO_STR( ERR_MISSING_VARIABLE_DEFINITION         );
        CASE_TO_STR( ERR_NO_DATA_IN_INTERFACES               );
        CASE_TO_STR( ERR_NO_STATIC_METHODS_IN_INTERFACES     );
        CASE_TO_STR( ERR_NO_INTERFACE_METHOD_BODIES          );
        CASE_TO_STR( ERR_NO_INTERFACE_INHERITANCE            );
        CASE_TO_STR( ERR_CLASS_MISSING_INTERFACE_METHOD      );
        CASE_TO_STR( ERR_MISMATCHED_OVERRIDE_RETTYPE         );
        CASE_TO_STR( ERR_NO_INTERFACES_AS_MEMBERS            );
        CASE_TO_STR( ERR_RECURSIVE_CONTAINMENT               );
        CASE_TO_STR( ERR_NO_SWITCH                           );
        CASE_TO_STR( ERR_NO_OUT_DEFAULTS                     );
        CASE_TO_STR( ERR_CONFLICTING_REGISTER_SEMANTICS      );
        CASE_TO_STR( ERR_INVALID_API_CALL                    );
        CASE_TO_STR( ERR_INVALID_COMPILE_EXPR_FLAG           );
        CASE_TO_STR( ERR_INTERFACE_OUT                       );
        CASE_TO_STR( ERR_MULTI_DIM_POINTER_ARRAY             );
        CASE_TO_STR( ERR_INVALID_INDEX                       );
        CASE_TO_STR( ERR_INDEXABLE_TYPE_EXPECTED             );
        CASE_TO_STR( ERR_NON_SCALAR_VECTOR_ELEMENT           );
        CASE_TO_STR( ERR_NON_SCALAR_MATRIX_ELEMENT           );
        CASE_TO_STR( ERR_OBJECT_HAS_OBJECT_ELEMENT           );
        CASE_TO_STR( ERR_INVALID_DOT_MIPS_USAGE              );
        CASE_TO_STR( ERR_METHOD_IMPL_PROTO_MISMATCH          );
        CASE_TO_STR( ERR_METHOD_IMPL_BODY_MISSING            );
        CASE_TO_STR( ERR_NON_SIMPLE_STREAM                   );
        CASE_TO_STR( ERR_WARNING_AS_ERROR                    );
        CASE_TO_STR( ERR_FX_SINGLE                           );
        CASE_TO_STR( ERR_NO_STATIC_INTERFACE_INIT            );
        CASE_TO_STR( ERR_NO_INTERFACES_IN_BUFFERS            );
        CASE_TO_STR( WAR_TYPE_MISMATCH                       );
        CASE_TO_STR( WAR_NOFRAGMENTS                         );
        CASE_TO_STR( WAR_INVALID_SEMANTIC                    );
        CASE_TO_STR( WAR_SIGNED_UNSIGNED_COMPARE             );
        CASE_TO_STR( WAR_INT_TOO_LARGE                       );
        CASE_TO_STR( WAR_PRECISION_LOSS                      );
        CASE_TO_STR( WAR_ELT_TRUNCATION                      );
        CASE_TO_STR( WAR_CONST_INITIALIZER                   );
        CASE_TO_STR( WAR_FAILED_COMPILING_10L9VS             );
        CASE_TO_STR( WAR_FAILED_COMPILING_10L9PS             );
        CASE_TO_STR( ERR_COMP_NOT_YET_IMPLEMENTED            );
        CASE_TO_STR( ERR_ENTRYPOINT_NOT_FOUND                );
        CASE_TO_STR( ERR_MISSING_INPUT_SEMANTICS             );
        CASE_TO_STR( ERR_MISSING_OUTPUT_SEMANTICS            );
        CASE_TO_STR( ERR_COMP_ARRAY_INDEX_OUT_OF_BOUNDS      );
        CASE_TO_STR( ERR_OLD_VERSION                         );
        CASE_TO_STR( ERR_UNRECOGNIZED_VERSION                );
        CASE_TO_STR( ERR_RETURN                              );
        CASE_TO_STR( ERR_OUT_UNINITIALIZED                   );
        CASE_TO_STR( ERR_DEPENDENT_TEX1D                     );
        CASE_TO_STR( ERR_FUNCTION_MISSING_BODY               );
        CASE_TO_STR( ERR_CANT_UNROLL                         );
        CASE_TO_STR( ERR_ARRAY_INDEX_MUST_BE_LITERAL         );
        CASE_TO_STR( ERR_COMP_ARRAY_EXPECTED                 );
        CASE_TO_STR( ERR_GEOMETRY_INVALID                    );
        CASE_TO_STR( ERR_TARGET_INVALID                      );
        CASE_TO_STR( ERR_TEXCUBE_OFFSET_INVALID              );
        CASE_TO_STR( ERR_UNDEFINED_VARIABLE                  );
        CASE_TO_STR( ERR_BREAK_OUTSIDE_LOOP                  );
        CASE_TO_STR( ERR_CONTINUE_OUTSIDE_LOOP               );
        CASE_TO_STR( ERR_TEXPROJ_INVALID_TEXCOORD            );
        CASE_TO_STR( ERR_TEXTURE_TYPE                        );
        CASE_TO_STR( ERR_TEXTURE_OBJECTS_UNSUPPORTED         );
        CASE_TO_STR( ERR_COMPAT_MAKETEXTURE                  );
        CASE_TO_STR( ERR_DUPLICATE_ATTRIBUTE                 );
        CASE_TO_STR( ERR_NOT_SIMPLE_LOOP                     );
        CASE_TO_STR( ERR_GRADIENT_WITH_BREAK                 );
        CASE_TO_STR( ERR_TEXTURE_OFFSET                      );
        CASE_TO_STR( ERR_CANT_BRANCH                         );
        CASE_TO_STR( ERR_MUST_BRANCH                         );
        CASE_TO_STR( ERR_BIND_INVALID                        );
        CASE_TO_STR( ERR_NEED_UNROLL_FORCED_LOOP             );
        CASE_TO_STR( ERR_DUPLICATE_CASE                      );
        CASE_TO_STR( ERR_MUST_HAVE_BREAK                     );
        CASE_TO_STR( ERR_LOW_PRECISION                       );
        CASE_TO_STR( ERR_UNSUPPORTED_OPERATION               );
        CASE_TO_STR( ERR_INCOMPATIBLE_DUP_SEMANTICS          );
        CASE_TO_STR( ERR_NO_FALLTHROUGH                      );
        CASE_TO_STR( ERR_NON_LITERAL_SAMPLER                 );
        CASE_TO_STR( ERR_OLDVERSION                          );
        CASE_TO_STR( ERR_NO_GLOBAL_PACK_OFFSETS              );
        CASE_TO_STR( ERR_INVALID_PACK_OFFSET_NAME            );
        CASE_TO_STR( ERR_PACK_OFFSET_CANT_HAVE_TARGET        );
        CASE_TO_STR( ERR_REINTERPRET_UNSUPPORTED             );
        CASE_TO_STR( ERR_NO_INTERFACE_SUPPORT                );
        CASE_TO_STR( ERR_NO_IFACE_METHOD_IMPLS               );
        CASE_TO_STR( ERR_TBUFFER_UNSUPPORTED                 );
        CASE_TO_STR( ERR_NO_GLOBAL_COMPOUND_WRITES           );
        CASE_TO_STR( ERR_NO_NEGATIVE_EMULATED_UINTS          );
        CASE_TO_STR( ERR_INTERLOCKED_TARGET                  );
        CASE_TO_STR( WAR_ARRAY_INDEX_MUST_BE_LITERAL         );
        CASE_TO_STR( WAR_INFINITE_LOOP                       );
        CASE_TO_STR( WAR_NOT_SIMPLE_LOOP                     );
        CASE_TO_STR( WAR_GRADIENT_WITH_BREAK                 );
        CASE_TO_STR( WAR_UNKNOWN_ATTRIBUTE                   );
        CASE_TO_STR( WAR_INCOMPATIBLE_FLAGS                  );
        CASE_TO_STR( WAR_INT_DIVIDE_SLOW                     );
        CASE_TO_STR( WAR_TOO_SIMPLE_LOOP                     );
        CASE_TO_STR( WAR_ENDIF_UNINITIALIZED                 );
        CASE_TO_STR( WAR_LOOP_ASYMMETRIC_RETURN              );
        CASE_TO_STR( WAR_MUST_BRANCH                         );
        CASE_TO_STR( WAR_OLDVERSION                          );
        CASE_TO_STR( WAR_OUTOFBOUNDS_LOOPSIM                 );
        CASE_TO_STR( WAR_OUTOFBOUNDS_LOOPUNROLL              );
        CASE_TO_STR( WAR_PRAGMA_RULEDISABLE                  );
        CASE_TO_STR( WAR_DID_NOT_SIMULATE                    );
        CASE_TO_STR( WAR_NO_EARLY_BREAK                      );
        CASE_TO_STR( WAR_IGNORING_REGISTER_SEMANTIC          );
        CASE_TO_STR( WAR_UNKNOWN_PRAGMA                      );
        CASE_TO_STR( WAR_LOOP_TOO_LONG                       );
        CASE_TO_STR( WAR_GRADIENT_MUST_UNROLL                );
        CASE_TO_STR( WAR_POW_NOT_KNOWN_TO_BE_POSITIVE        );
        CASE_TO_STR( WAR_VARYING_INTERFACE                   );
        CASE_TO_STR( WAR_TESSFACTORSCALE_OUTOFRANGE          );
        CASE_TO_STR( WAR_SYNC_IN_VARYING_FLOW                );
        CASE_TO_STR( WAR_BREAK_FROM_UAV                      );
        CASE_TO_STR( WAR_OVERRIDDEN_SEMANTIC                 );
        CASE_TO_STR( WAR_KNOWN_NON_SPECIAL                   );
        CASE_TO_STR( WAR_TLOUT_UNINITIALIZED                 );
        CASE_TO_STR( WAR_GROUPSHARED_UNSUPPORTED             );
        CASE_TO_STR( WAR_CONDITIONAL_SIDE_EFFECT             );
        CASE_TO_STR( WAR_NO_UNSIGNED_ABS                     );
        CASE_TO_STR( WAR_TEXTURE_OFFSET                      );
        CASE_TO_STR( WAR_POTENTIAL_RACE_CONDITION_UAV        );
        CASE_TO_STR( WAR_POTENTIAL_RACE_CONDITION_GSM        );
        CASE_TO_STR( WAR_UNRELIABLE_SOURCE_MARK              );
        CASE_TO_STR( WAR_NO_INTERFACE_SUPPORT                );
        CASE_TO_STR( WAR_MIN10_RCP                           );
        CASE_TO_STR( WAR_NO_CLIPPLANES_IN_LIBRARY            );
        CASE_TO_STR( ERR_PRAGMA_DEF_OBSOLETE                 );
        CASE_TO_STR( ERR_NO_32_BIT_HALF                      );
        CASE_TO_STR( ERR_NO_32_BIT_DOUBLE                    );
        CASE_TO_STR( ERR_NO_SMALL_INT                        );
        CASE_TO_STR( ERR_NO_64_BIT_INT                       );
        CASE_TO_STR( ERR_NO_UNSIGNED_ABS                     );
        CASE_TO_STR( ERR_THREAD_GROUP_SIZE_INVALID           );
        CASE_TO_STR( ERR_THREAD_GROUP_SIZE_MISSING           );
        CASE_TO_STR( ERR_HSATTRIBUTE_INVALID                 );
        CASE_TO_STR( ERR_HS_PATCH_INVALID                    );
        CASE_TO_STR( ERR_HS_TYPE_MISMATCH                    );
        CASE_TO_STR( ERR_INTERLOCKED_UNSUPPORTED             );
        CASE_TO_STR( ERR_GROUPSHARED_UNSUPPORTED             );
        CASE_TO_STR( ERR_INDETERMINATE_DERIVATIVE            );
        CASE_TO_STR( ERR_SYNC_IN_VARYING_FLOW                );
        CASE_TO_STR( ERR_SYNC_UNSUPPORTED                    );
        CASE_TO_STR( ERR_NO_APPEND_CONSUME                   );
        CASE_TO_STR( ERR_NO_TYPED_UAVS                       );
        CASE_TO_STR( ERR_NO_UAVS                             );
        CASE_TO_STR( ERR_INDEX_IS_NOT_GROUP_INDEX            );
        CASE_TO_STR( ERR_NON_LITERAL_RESOURCE                );
        CASE_TO_STR( ERR_NON_LITERAL_STREAM                  );
        CASE_TO_STR( ERR_BREAK_FROM_UAV                      );
        CASE_TO_STR( ERR_NO_PULL_MODEL                       );
        CASE_TO_STR( ERR_CANT_PULL_POSITION                  );
        CASE_TO_STR( ERR_PULL_MUST_BE_INPUT                  );
        CASE_TO_STR( ERR_LOOP_CONDITION_OUT_OF_BOUNDS        );
        CASE_TO_STR( ERR_TYPED_UAV_LOAD_MULTI_COMP           );
        CASE_TO_STR( ERR_MULTIPLE_DEPTH_OUT                  );
        CASE_TO_STR( ERR_NO_ORDERED_ACCESS_IN_INTERFACE      );
        CASE_TO_STR( ERR_COMP_GLC_INVALID                    );
        CASE_TO_STR( ERR_HS_UNKNOWN_OUTPUT_TYPE              );
        CASE_TO_STR( ERR_ATOMIC_REQUIRES_INT                 );
        CASE_TO_STR( ERR_ATTRIBUTE_PARAM_SIDE_EFFECT         );
        CASE_TO_STR( ERR_UNSUPPORTED_DOUBLE_OPERATION        );
        CASE_TO_STR( ERR_INVALID_TESS_FACTOR_SEMANTIC        );
        CASE_TO_STR( ERR_UNSUPPORTED_THIS_OBJECT             );
        CASE_TO_STR( ERR_INVALID_SHADER_IO                   );
        CASE_TO_STR( ERR_INDEXED_DERIV                       );
        CASE_TO_STR( ERR_ORDERED_ACCESS_CAST                 );
        CASE_TO_STR( ERR_RESOURCE_UNINITIALIZED              );
        CASE_TO_STR( ERR_INVALID_STATIC_VAR_INIT             );
        CASE_TO_STR( ERR_NO_ABORT                            );
        CASE_TO_STR( ERR_NO_MESSAGES                         );
        CASE_TO_STR( ERR_GUARANTEED_RACE_CONDITION_UAV       );
        CASE_TO_STR( ERR_GUARANTEED_RACE_CONDITION_GSM       );
        CASE_TO_STR( ERR_INFINITE_LOOP                       );
        CASE_TO_STR( ERR_TEMPLATE_VAR_CONFLICT               );
        CASE_TO_STR( ERR_RESOURCE_BIND_CONFLICT              );
        CASE_TO_STR( ERR_COMPLEX_TEMPLATE_RESOURCE           );
        CASE_TO_STR( ERR_RESOURCE_NOT_IN_TEMPLATE            );
        CASE_TO_STR( ERR_RESINDEX_UNSUPPORTED                );
        CASE_TO_STR( ERR_FMA_ONLY_DOUBLE                     );
        CASE_TO_STR( ERR_NO_MIN_PRECISION                    );
        CASE_TO_STR( ERR_NO_F32_F16                          );
        CASE_TO_STR( ERR_NOT_ABLE_TO_FLATTEN                 );
        CASE_TO_STR( ERR_INVALID_MININT                      );
        CASE_TO_STR( ERR_INVALID_MIN8FLOAT                   );
        CASE_TO_STR( ERR_CONTINUE_INSIDE_SWITCH              );
        CASE_TO_STR( ERR_DEBUG_NOT_SUPPORTED_FOR_MODERN      );
        CASE_TO_STR( ERR_UNSUPPORTED_PARAM_TYPE              );
        CASE_TO_STR( ERR_DUPLICATE_FUNC_PARAM_SEMANTICS      );
        CASE_TO_STR( ERR_LIBRARY_FUNC_UNSUPPORTED            );
        CASE_TO_STR( ERR_ENTRYPOINT_MUST_BE_EMPTY            );
        CASE_TO_STR( ERR_NO_STATIC_IN_LIBRARY                );
        CASE_TO_STR( ERR_NO_TBUFFER_IN_LIBRARY               );
        CASE_TO_STR( ERR_NO_INTERFACES_IN_LIBRARY            );
        CASE_TO_STR( ERR_NO_DOUBLE_IN_LIBRARY                );
        CASE_TO_STR( ERR_NO_OVERLOADING_FOR_LIB_FUNC         );
        CASE_TO_STR( ERR_RES_MAY_ALIAS_ONLY_IN_CS_5          );
        CASE_TO_STR( ERR_READ_BEFORE_WRITE                   );
        CASE_TO_STR( ERR_MID_DIVISION_BY_ZERO                );
        CASE_TO_STR( ERR_MID_INDEFINITE_LOG                  );
        CASE_TO_STR( ERR_MID_IMAGINARY_SQUARE_ROOT           );
        CASE_TO_STR( ERR_TOO_COMPLEX                         );
        CASE_TO_STR( ERR_INDEFINITE_ASIN                     );
        CASE_TO_STR( ERR_INDEFINITE_ACOS                     );
        CASE_TO_STR( ERR_ARRAY_INDEX_OUT_OF_BOUNDS           );
        CASE_TO_STR( WARN_FLOAT_DIVISION_BY_ZERO             );
        CASE_TO_STR( ERR_IDIV_DIVISION_BY_ZERO               );
        CASE_TO_STR( ERR_UDIV_DIVISION_BY_ZERO               );
        CASE_TO_STR( ERR_FTOI_OUTOFRANGE                     );
        CASE_TO_STR( ERR_FTOU_OUTOFRANGE                     );
        CASE_TO_STR( ERR_INDEFINITE_DSXY                     );
        CASE_TO_STR( ERR_GRADIENT_FLOW                       );
        CASE_TO_STR( ERR_MID_SEMANTIC_TOO_LONG               );
        CASE_TO_STR( ERR_INVALID_SEMANTIC                    );
        CASE_TO_STR( ERR_MID_INVALID_REGISTER_SEMANTIC       );
        CASE_TO_STR( ERR_TOO_MANY_PHASES                     );
        CASE_TO_STR( ERR_CONSTANT_REG_COLLISION              );
        CASE_TO_STR( ERR_TBUFFER_REG_COLLISION               );
        CASE_TO_STR( ERR_DERIV_READ_BEFORE_WRITE             );
        CASE_TO_STR( ERR_DERIV_INVALID_PREDICATE             );
        CASE_TO_STR( ERR_DERIV_REDEFINITION                  );
        CASE_TO_STR( ERR_DERIV_KNOWN_VALUE                   );
        CASE_TO_STR( ERR_DERIV_UNKNOWN                       );
        CASE_TO_STR( ERR_RACE_CONDITION_INDUCED_INV_SYNC     );
        CASE_TO_STR( ERR_ALIAS_ARRAY_INDEX_OUT_OF_BOUNDS     );
        CASE_TO_STR( ERR_MINPRECISION_PRECISE                );
        CASE_TO_STR( ERR_LOOP_NEVER_BREAKS                   );
        CASE_TO_STR( WARN_FTOI_OUTOFRANGE                    );
        CASE_TO_STR( WARN_FTOU_OUTOFRANGE                    );
        CASE_TO_STR( WARN_IDIV_DIVISION_BY_ZERO              );
        CASE_TO_STR( WARN_UDIV_DIVISION_BY_ZERO              );
        CASE_TO_STR( WARN_IMAGINARY_SQUARE_ROOT              );
        CASE_TO_STR( WARN_INDEFINITE_LOG                     );
        CASE_TO_STR( WARN_REPLACE_NOT_CONVERGE               );
        CASE_TO_STR( WARN_HOISTING_GRADIENT                  );
        CASE_TO_STR( WARN_FLOAT_PRECISION_LOSS               );
        CASE_TO_STR( WARN_FLOAT_CLAMP                        );
        CASE_TO_STR( ERR_GEN_NOT_YET_IMPLEMENTED             );
        CASE_TO_STR( ERR_DUPLICATE_INPUT_SEMANTIC            );
        CASE_TO_STR( ERR_INVALID_INPUT_SEMANTIC              );
        CASE_TO_STR( ERR_INVALID_OUTPUT_SEMANTIC             );
        CASE_TO_STR( ERR_DUPLICATE_OUTPUT_SEMANTIC           );
        CASE_TO_STR( ERR_MAX_TEMP_EXCEEDED                   );
        CASE_TO_STR( ERR_MAX_INPUT_EXCEEDED                  );
        CASE_TO_STR( ERR_MAX_CONST_EXCEEDED                  );
        CASE_TO_STR( ERR_MAX_ADDR_EXCEEDED                   );
        CASE_TO_STR( ERR_GEN_INVALID_REGISTER_SEMANTIC       );
        CASE_TO_STR( ERR_MAX_SAMPLER_EXCEEDED                );
        CASE_TO_STR( ERR_REL_ADDRESS_NOT_SUP                 );
        CASE_TO_STR( ERR_NO_W_ACCESS                         );
        CASE_TO_STR( ERR_NO_DEP_FROM_COL                     );
        CASE_TO_STR( ERR_PROGRAM_TOO_BIG                     );
        CASE_TO_STR( ERR_CANNOT_BIND_SAMPLER                 );
        CASE_TO_STR( ERR_CANNOT_READ_SAME_TEX                );
        CASE_TO_STR( ERR_CONFLICT_SAMP_BIND                  );
        CASE_TO_STR( ERR_MULTI_READ_SAMP_BIND                );
        CASE_TO_STR( ERR_TOO_MANY_TEXREADS                   );
        CASE_TO_STR( ERR_NO_TEXCRD_SHARE                     );
        CASE_TO_STR( ERR_OUT_OF_TEMP                         );
        CASE_TO_STR( ERR_NO_REP_SWIZZLE                      );
        CASE_TO_STR( ERR_NO_DEP_MATCH                        );
        CASE_TO_STR( ERR_TEXM_NO_SHARE                       );
        CASE_TO_STR( ERR_TEXM_NOT_COR_STAGE                  );
        CASE_TO_STR( ERR_TEXM_NO_SOURCE_MOD                  );
        CASE_TO_STR( ERR_TEXM_BX2_ONLY                       );
        CASE_TO_STR( ERR_DEPTH_SCALAR                        );
        CASE_TO_STR( ERR_COLOR_4COMP                         );
        CASE_TO_STR( ERR_WRITE_TO_COLOR0                     );
        CASE_TO_STR( ERR_DP4_NOT_SUP                         );
        CASE_TO_STR( ERR_NO_MATCH                            );
        CASE_TO_STR( ERR_NO_SWIZZLE_MATCH                    );
        CASE_TO_STR( ERR_NO_DOUBLE_DEP                       );
        CASE_TO_STR( ERR_NO_TEX_SOURCE                       );
        CASE_TO_STR( ERR_TEXRGB_NOT_SUPPORTED                );
        CASE_TO_STR( ERR_CANT_EMMULLATE_WRITE                );
        CASE_TO_STR( ERR_COLOR_CONT                          );
        CASE_TO_STR( ERR_SAMPLER_MISMATCH                    );
        CASE_TO_STR( ERR_SEMANTIC_SCALER                     );
        CASE_TO_STR( ERR_WRITE_ALL_POS                       );
        CASE_TO_STR( ERR_TEXCOORD_CONT                       );
        CASE_TO_STR( ERR_NO_MULTI_SEM                        );
        CASE_TO_STR( ERR_NO_4COMP_CLIP                       );
        CASE_TO_STR( ERR_TEXTURE_NOT_SUPPORTED               );
        CASE_TO_STR( ERR_MAX_SAMP_EXCEEDED                   );
        CASE_TO_STR( ERR_DEBUG_SIZE                          );
        CASE_TO_STR( ERR_CONSTANTTABLE_SIZE                  );
        CASE_TO_STR( ERR_MAX_PRED_EXCEEDED                   );
        CASE_TO_STR( ERR_MAX_BOOL_EXCEEDED                   );
        CASE_TO_STR( ERR_MAX_LOOP_EXCEEDED                   );
        CASE_TO_STR( ERR_NOT_SIMPLE_FOR                      );
        CASE_TO_STR( ERR_ADDRESS_TOO_DEEP                    );
        CASE_TO_STR( ERR_CND_SCALAR                          );
        CASE_TO_STR( ERR_INVALID_TYPE                        );
        CASE_TO_STR( ERR_MAX_TEXTURE_EXCEEDED                );
        CASE_TO_STR( ERR_REQUIRE_INT_OFFSET                  );
        CASE_TO_STR( ERR_MAX_CBUFFER_EXCEEDED                );
        CASE_TO_STR( ERR_INCORRECT_USAGE                     );
        CASE_TO_STR( ERR_POSITION_INCORRECTTYPE              );
        CASE_TO_STR( ERR_MULTIPLE_STREAMS                    );
        CASE_TO_STR( ERR_MAX_OUTPUT_EXCEEDED                 );
        CASE_TO_STR( ERR_NO_STREAMS_USED                     );
        CASE_TO_STR( ERR_GEN_SEMANTIC_TOO_LONG               );
        CASE_TO_STR( ERR_DUPLICATE_SYSVAL_SEMANTIC           );
        CASE_TO_STR( ERR_READING_UNINITIALIZED               );
        CASE_TO_STR( ERR_SIGNATURE_VALIDATION                );
        CASE_TO_STR( ERR_INCOMPLETE_POSITION                 );
        CASE_TO_STR( ERR_DUPLICATE_CBUFFER_BANK              );
        CASE_TO_STR( ERR_INVALID_FP_LITERAL                  );
        CASE_TO_STR( ERR_UNWRITTEN_SI_VALUE                  );
        CASE_TO_STR( ERR_AUTOSAMPLER_ARRAY_UNIMPL            );
        CASE_TO_STR( ERR_INVALID_TEXTURE_FORMAT              );
        CASE_TO_STR( ERR_INVALID_10L9_SEMANTIC               );
        CASE_TO_STR( ERR_MAX_IFACE_EXCEEDED                  );
        CASE_TO_STR( ERR_MAX_UAV_EXCEEDED                    );
        CASE_TO_STR( ERR_MAX_GROUP_SHARED_MEMORY_EXCEEDED    );
        CASE_TO_STR( ERR_TOO_MANY_GROUP_SHARED_DATA          );
        CASE_TO_STR( ERR_INCORRECT_NUM_GROUP_SHARED_ELEMENTS );
        CASE_TO_STR( ERR_CONTROL_POINT_COUNT_EXCEEDED        );
        CASE_TO_STR( ERR_GROUP_SHARED_DATA_NOT_AN_ARRAY      );
        CASE_TO_STR( ERR_MULTI_SO_NOT_POINT                  );
        CASE_TO_STR( ERR_INVALID_SNAP_OFFSET                 );
        CASE_TO_STR( ERR_CLIPPLANE_TOO_COMPLICATED           );
        CASE_TO_STR( ERR_ONLY_ONE_ALLOC_CONSUME              );
        CASE_TO_STR( ERR_TYPED_UAV_WRITE_MASK_MISMATCH       );
        CASE_TO_STR( ERR_TEX1D_UNSUPPORTED                   );
        CASE_TO_STR( ERR_RESINFO_Z_UNDEFINED_CUBEARRAY       );
        CASE_TO_STR( ERR_INVALID_STRUCTURED_ELEMENT_SIZE     );
        CASE_TO_STR( ERR_MAX_ICB_REG_EXCEEDED                );
        CASE_TO_STR( ERR_MAX_CBUFFER_SIZE_EXCEEDED           );
        CASE_TO_STR( ERR_LIB_DEBUG_INST_UNSUPPORTED          );
        CASE_TO_STR( ERR_VARYING_INDEXED_INTERFACE           );
        CASE_TO_STR( WAR_GEN_NOT_YET_IMPLEMENTED             );
        CASE_TO_STR( WAR_BIAS_MISSED                         );
        CASE_TO_STR( WAR_COMP_MISSED                         );
        CASE_TO_STR( WAR_LRP_MISSED                          );
        CASE_TO_STR( WAR_MAX_CONST_RANGE                     );
        CASE_TO_STR( WAR_DEPRECATED_INPUT_SEMANTIC           );
        CASE_TO_STR( WAR_DEPRECATED_OUTPUT_SEMANTIC          );
        CASE_TO_STR( WAR_TEXCOORD_CLAMP                      );
        CASE_TO_STR( WAR_MIDLEVEL_VARNOTFOUND                );
        CASE_TO_STR( WAR_OLD_SEMANTIC                        );
        CASE_TO_STR( WAR_DUPLICATE_SEMANTIC                  );
        CASE_TO_STR( WAR_CANT_MATCH_LOOP                     );
        CASE_TO_STR( WAR_BIAS_CLAMPED                        );
        CASE_TO_STR( WAR_CS_TEMP_EXCEEDED                    );
        CASE_TO_STR( WAR_UNWRITTEN_SI_VALUE                  );
        CASE_TO_STR( WAR_PSIZE_HAS_NO_SPECIAL_MEANING        );
        CASE_TO_STR( WAR_DEPRECATED_FEATURE                  );
    }
    return "unknown";
}

#undef CASE_TO_STR


} // /namespace Xsc



// ================================================================================
