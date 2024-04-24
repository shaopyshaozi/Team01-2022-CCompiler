/* A Bison parser, made by GNU Bison 3.8.2.  */

/* Bison implementation for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015, 2018-2021 Free Software Foundation,
   Inc.

   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <https://www.gnu.org/licenses/>.  */

/* As a special exception, you may create a larger work that contains
   part or all of the Bison parser skeleton and distribute that work
   under terms of your choice, so long as that work isn't itself a
   parser generator using the skeleton or a modified version thereof
   as a parser skeleton.  Alternatively, if you modify or redistribute
   the parser skeleton itself, you may (at your option) remove this
   special exception, which will cause the skeleton and the resulting
   Bison output files to be licensed under the GNU General Public
   License without this special exception.

   This special exception was added by the Free Software Foundation in
   version 2.2 of Bison.  */

/* C LALR(1) parser skeleton written by Richard Stallman, by
   simplifying the original so-called "semantic" parser.  */

/* DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
   especially those whose name start with YY_ or yy_.  They are
   private implementation details that can be changed or removed.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output, and Bison version.  */
#define YYBISON 30802

/* Bison version string.  */
#define YYBISON_VERSION "3.8.2"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1





# ifndef YY_CAST
#  ifdef __cplusplus
#   define YY_CAST(Type, Val) static_cast<Type> (Val)
#   define YY_REINTERPRET_CAST(Type, Val) reinterpret_cast<Type> (Val)
#  else
#   define YY_CAST(Type, Val) ((Type) (Val))
#   define YY_REINTERPRET_CAST(Type, Val) ((Type) (Val))
#  endif
# endif
# ifndef YY_NULLPTR
#  if defined __cplusplus
#   if 201103L <= __cplusplus
#    define YY_NULLPTR nullptr
#   else
#    define YY_NULLPTR 0
#   endif
#  else
#   define YY_NULLPTR ((void*)0)
#  endif
# endif

#include "parser.tab.h"
/* Symbol kind.  */
enum yysymbol_kind_t
{
  YYSYMBOL_YYEMPTY = -2,
  YYSYMBOL_YYEOF = 0,                      /* "end of file"  */
  YYSYMBOL_YYerror = 1,                    /* error  */
  YYSYMBOL_YYUNDEF = 2,                    /* "invalid token"  */
  YYSYMBOL_INT_CONST = 3,                  /* INT_CONST  */
  YYSYMBOL_FLOAT_CONST = 4,                /* FLOAT_CONST  */
  YYSYMBOL_IDENTIFIER = 5,                 /* IDENTIFIER  */
  YYSYMBOL_CHAR_LITERAL = 6,               /* CHAR_LITERAL  */
  YYSYMBOL_SIZEOF = 7,                     /* SIZEOF  */
  YYSYMBOL_PTR_OP = 8,                     /* PTR_OP  */
  YYSYMBOL_INC_OP = 9,                     /* INC_OP  */
  YYSYMBOL_DEC_OP = 10,                    /* DEC_OP  */
  YYSYMBOL_LEFT_OP = 11,                   /* LEFT_OP  */
  YYSYMBOL_RIGHT_OP = 12,                  /* RIGHT_OP  */
  YYSYMBOL_LE_OP = 13,                     /* LE_OP  */
  YYSYMBOL_GE_OP = 14,                     /* GE_OP  */
  YYSYMBOL_EQ_OP = 15,                     /* EQ_OP  */
  YYSYMBOL_NE_OP = 16,                     /* NE_OP  */
  YYSYMBOL_AND_OP = 17,                    /* AND_OP  */
  YYSYMBOL_OR_OP = 18,                     /* OR_OP  */
  YYSYMBOL_MUL_ASSIGN = 19,                /* MUL_ASSIGN  */
  YYSYMBOL_DIV_ASSIGN = 20,                /* DIV_ASSIGN  */
  YYSYMBOL_MOD_ASSIGN = 21,                /* MOD_ASSIGN  */
  YYSYMBOL_ADD_ASSIGN = 22,                /* ADD_ASSIGN  */
  YYSYMBOL_SUB_ASSIGN = 23,                /* SUB_ASSIGN  */
  YYSYMBOL_LEFT_ASSIGN = 24,               /* LEFT_ASSIGN  */
  YYSYMBOL_RIGHT_ASSIGN = 25,              /* RIGHT_ASSIGN  */
  YYSYMBOL_AND_ASSIGN = 26,                /* AND_ASSIGN  */
  YYSYMBOL_XOR_ASSIGN = 27,                /* XOR_ASSIGN  */
  YYSYMBOL_OR_ASSIGN = 28,                 /* OR_ASSIGN  */
  YYSYMBOL_TYPEDEF = 29,                   /* TYPEDEF  */
  YYSYMBOL_EXTERN = 30,                    /* EXTERN  */
  YYSYMBOL_STATIC = 31,                    /* STATIC  */
  YYSYMBOL_AUTO = 32,                      /* AUTO  */
  YYSYMBOL_REGISTER = 33,                  /* REGISTER  */
  YYSYMBOL_CHAR = 34,                      /* CHAR  */
  YYSYMBOL_INT = 35,                       /* INT  */
  YYSYMBOL_SIGNED = 36,                    /* SIGNED  */
  YYSYMBOL_UNSIGNED = 37,                  /* UNSIGNED  */
  YYSYMBOL_FLOAT = 38,                     /* FLOAT  */
  YYSYMBOL_DOUBLE = 39,                    /* DOUBLE  */
  YYSYMBOL_CONST = 40,                     /* CONST  */
  YYSYMBOL_VOLATILE = 41,                  /* VOLATILE  */
  YYSYMBOL_VOID = 42,                      /* VOID  */
  YYSYMBOL_STRUCT = 43,                    /* STRUCT  */
  YYSYMBOL_UNION = 44,                     /* UNION  */
  YYSYMBOL_ENUM = 45,                      /* ENUM  */
  YYSYMBOL_CASE = 46,                      /* CASE  */
  YYSYMBOL_DEFAULT = 47,                   /* DEFAULT  */
  YYSYMBOL_IF = 48,                        /* IF  */
  YYSYMBOL_ELSE = 49,                      /* ELSE  */
  YYSYMBOL_SWITCH = 50,                    /* SWITCH  */
  YYSYMBOL_WHILE = 51,                     /* WHILE  */
  YYSYMBOL_DO = 52,                        /* DO  */
  YYSYMBOL_FOR = 53,                       /* FOR  */
  YYSYMBOL_CONTINUE = 54,                  /* CONTINUE  */
  YYSYMBOL_BREAK = 55,                     /* BREAK  */
  YYSYMBOL_RETURN = 56,                    /* RETURN  */
  YYSYMBOL_57_ = 57,                       /* '('  */
  YYSYMBOL_58_ = 58,                       /* ')'  */
  YYSYMBOL_59_ = 59,                       /* '['  */
  YYSYMBOL_60_ = 60,                       /* ']'  */
  YYSYMBOL_61_ = 61,                       /* '{'  */
  YYSYMBOL_62_ = 62,                       /* '}'  */
  YYSYMBOL_63_ = 63,                       /* ';'  */
  YYSYMBOL_64_ = 64,                       /* ','  */
  YYSYMBOL_65_ = 65,                       /* '='  */
  YYSYMBOL_66_ = 66,                       /* '?'  */
  YYSYMBOL_67_ = 67,                       /* ':'  */
  YYSYMBOL_68_ = 68,                       /* '|'  */
  YYSYMBOL_69_ = 69,                       /* '^'  */
  YYSYMBOL_70_ = 70,                       /* '&'  */
  YYSYMBOL_71_ = 71,                       /* '<'  */
  YYSYMBOL_72_ = 72,                       /* '>'  */
  YYSYMBOL_73_ = 73,                       /* '+'  */
  YYSYMBOL_74_ = 74,                       /* '-'  */
  YYSYMBOL_75_ = 75,                       /* '*'  */
  YYSYMBOL_76_ = 76,                       /* '/'  */
  YYSYMBOL_77_ = 77,                       /* '%'  */
  YYSYMBOL_78_ = 78,                       /* '.'  */
  YYSYMBOL_79_ = 79,                       /* '~'  */
  YYSYMBOL_80_ = 80,                       /* '!'  */
  YYSYMBOL_YYACCEPT = 81,                  /* $accept  */
  YYSYMBOL_ROOT = 82,                      /* ROOT  */
  YYSYMBOL_translation_unit = 83,          /* translation_unit  */
  YYSYMBOL_external_declaration = 84,      /* external_declaration  */
  YYSYMBOL_function_definition = 85,       /* function_definition  */
  YYSYMBOL_declaration_specifiers = 86,    /* declaration_specifiers  */
  YYSYMBOL_type_specifier = 87,            /* type_specifier  */
  YYSYMBOL_declarator = 88,                /* declarator  */
  YYSYMBOL_direct_declarator = 89,         /* direct_declarator  */
  YYSYMBOL_compound_statement = 90,        /* compound_statement  */
  YYSYMBOL_statement_list = 91,            /* statement_list  */
  YYSYMBOL_statement = 92,                 /* statement  */
  YYSYMBOL_jump_statement = 93,            /* jump_statement  */
  YYSYMBOL_expression = 94,                /* expression  */
  YYSYMBOL_assignment_expression = 95,     /* assignment_expression  */
  YYSYMBOL_conditional_expression = 96,    /* conditional_expression  */
  YYSYMBOL_logical_or_expression = 97,     /* logical_or_expression  */
  YYSYMBOL_logical_and_expression = 98,    /* logical_and_expression  */
  YYSYMBOL_inclusive_or_expression = 99,   /* inclusive_or_expression  */
  YYSYMBOL_exclusive_or_expression = 100,  /* exclusive_or_expression  */
  YYSYMBOL_and_expression = 101,           /* and_expression  */
  YYSYMBOL_equality_expression = 102,      /* equality_expression  */
  YYSYMBOL_relational_expression = 103,    /* relational_expression  */
  YYSYMBOL_shift_expression = 104,         /* shift_expression  */
  YYSYMBOL_additive_expression = 105,      /* additive_expression  */
  YYSYMBOL_multiplicative_expression = 106, /* multiplicative_expression  */
  YYSYMBOL_cast_expression = 107,          /* cast_expression  */
  YYSYMBOL_unary_expression = 108,         /* unary_expression  */
  YYSYMBOL_postfix_expression = 109,       /* postfix_expression  */
  YYSYMBOL_primary_expression = 110,       /* primary_expression  */
  YYSYMBOL_argument_expression_list = 111, /* argument_expression_list  */
  YYSYMBOL_unary_operator = 112,           /* unary_operator  */
  YYSYMBOL_constant_expression = 113,      /* constant_expression  */
  YYSYMBOL_declaration = 114,              /* declaration  */
  YYSYMBOL_init_declarator_list = 115,     /* init_declarator_list  */
  YYSYMBOL_init_declarator = 116,          /* init_declarator  */
  YYSYMBOL_storage_class_specifier = 117,  /* storage_class_specifier  */
  YYSYMBOL_struct_or_union_specifier = 118, /* struct_or_union_specifier  */
  YYSYMBOL_struct_or_union = 119,          /* struct_or_union  */
  YYSYMBOL_struct_declaration_list = 120,  /* struct_declaration_list  */
  YYSYMBOL_struct_declaration = 121,       /* struct_declaration  */
  YYSYMBOL_specifier_qualifier_list = 122, /* specifier_qualifier_list  */
  YYSYMBOL_struct_declarator_list = 123,   /* struct_declarator_list  */
  YYSYMBOL_struct_declarator = 124,        /* struct_declarator  */
  YYSYMBOL_enum_specifier = 125,           /* enum_specifier  */
  YYSYMBOL_enumerator_list = 126,          /* enumerator_list  */
  YYSYMBOL_enumerator = 127,               /* enumerator  */
  YYSYMBOL_type_qualifier = 128,           /* type_qualifier  */
  YYSYMBOL_pointer = 129,                  /* pointer  */
  YYSYMBOL_type_qualifier_list = 130,      /* type_qualifier_list  */
  YYSYMBOL_parameter_type_list = 131,      /* parameter_type_list  */
  YYSYMBOL_parameter_list = 132,           /* parameter_list  */
  YYSYMBOL_parameter_declaration = 133,    /* parameter_declaration  */
  YYSYMBOL_identifier_list = 134,          /* identifier_list  */
  YYSYMBOL_type_name = 135,                /* type_name  */
  YYSYMBOL_abstract_declarator = 136,      /* abstract_declarator  */
  YYSYMBOL_direct_abstract_declarator = 137, /* direct_abstract_declarator  */
  YYSYMBOL_initializer = 138,              /* initializer  */
  YYSYMBOL_initializer_list = 139,         /* initializer_list  */
  YYSYMBOL_labeled_statement = 140,        /* labeled_statement  */
  YYSYMBOL_declaration_list = 141,         /* declaration_list  */
  YYSYMBOL_expression_statement = 142,     /* expression_statement  */
  YYSYMBOL_selection_statement = 143,      /* selection_statement  */
  YYSYMBOL_iteration_statement = 144       /* iteration_statement  */
};
typedef enum yysymbol_kind_t yysymbol_kind_t;




#ifdef short
# undef short
#endif

/* On compilers that do not define __PTRDIFF_MAX__ etc., make sure
   <limits.h> and (if available) <stdint.h> are included
   so that the code can choose integer types of a good width.  */

#ifndef __PTRDIFF_MAX__
# include <limits.h> /* INFRINGES ON USER NAME SPACE */
# if defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stdint.h> /* INFRINGES ON USER NAME SPACE */
#  define YY_STDINT_H
# endif
#endif

/* Narrow types that promote to a signed type and that can represent a
   signed or unsigned integer of at least N bits.  In tables they can
   save space and decrease cache pressure.  Promoting to a signed type
   helps avoid bugs in integer arithmetic.  */

#ifdef __INT_LEAST8_MAX__
typedef __INT_LEAST8_TYPE__ yytype_int8;
#elif defined YY_STDINT_H
typedef int_least8_t yytype_int8;
#else
typedef signed char yytype_int8;
#endif

#ifdef __INT_LEAST16_MAX__
typedef __INT_LEAST16_TYPE__ yytype_int16;
#elif defined YY_STDINT_H
typedef int_least16_t yytype_int16;
#else
typedef short yytype_int16;
#endif

/* Work around bug in HP-UX 11.23, which defines these macros
   incorrectly for preprocessor constants.  This workaround can likely
   be removed in 2023, as HPE has promised support for HP-UX 11.23
   (aka HP-UX 11i v2) only through the end of 2022; see Table 2 of
   <https://h20195.www2.hpe.com/V2/getpdf.aspx/4AA4-7673ENW.pdf>.  */
#ifdef __hpux
# undef UINT_LEAST8_MAX
# undef UINT_LEAST16_MAX
# define UINT_LEAST8_MAX 255
# define UINT_LEAST16_MAX 65535
#endif

#if defined __UINT_LEAST8_MAX__ && __UINT_LEAST8_MAX__ <= __INT_MAX__
typedef __UINT_LEAST8_TYPE__ yytype_uint8;
#elif (!defined __UINT_LEAST8_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST8_MAX <= INT_MAX)
typedef uint_least8_t yytype_uint8;
#elif !defined __UINT_LEAST8_MAX__ && UCHAR_MAX <= INT_MAX
typedef unsigned char yytype_uint8;
#else
typedef short yytype_uint8;
#endif

#if defined __UINT_LEAST16_MAX__ && __UINT_LEAST16_MAX__ <= __INT_MAX__
typedef __UINT_LEAST16_TYPE__ yytype_uint16;
#elif (!defined __UINT_LEAST16_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST16_MAX <= INT_MAX)
typedef uint_least16_t yytype_uint16;
#elif !defined __UINT_LEAST16_MAX__ && USHRT_MAX <= INT_MAX
typedef unsigned short yytype_uint16;
#else
typedef int yytype_uint16;
#endif

#ifndef YYPTRDIFF_T
# if defined __PTRDIFF_TYPE__ && defined __PTRDIFF_MAX__
#  define YYPTRDIFF_T __PTRDIFF_TYPE__
#  define YYPTRDIFF_MAXIMUM __PTRDIFF_MAX__
# elif defined PTRDIFF_MAX
#  ifndef ptrdiff_t
#   include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  endif
#  define YYPTRDIFF_T ptrdiff_t
#  define YYPTRDIFF_MAXIMUM PTRDIFF_MAX
# else
#  define YYPTRDIFF_T long
#  define YYPTRDIFF_MAXIMUM LONG_MAX
# endif
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned
# endif
#endif

#define YYSIZE_MAXIMUM                                  \
  YY_CAST (YYPTRDIFF_T,                                 \
           (YYPTRDIFF_MAXIMUM < YY_CAST (YYSIZE_T, -1)  \
            ? YYPTRDIFF_MAXIMUM                         \
            : YY_CAST (YYSIZE_T, -1)))

#define YYSIZEOF(X) YY_CAST (YYPTRDIFF_T, sizeof (X))


/* Stored state numbers (used for stacks). */
typedef yytype_int16 yy_state_t;

/* State numbers in computations.  */
typedef int yy_state_fast_t;

#ifndef YY_
# if defined YYENABLE_NLS && YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(Msgid) dgettext ("bison-runtime", Msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(Msgid) Msgid
# endif
#endif


#ifndef YY_ATTRIBUTE_PURE
# if defined __GNUC__ && 2 < __GNUC__ + (96 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_PURE __attribute__ ((__pure__))
# else
#  define YY_ATTRIBUTE_PURE
# endif
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# if defined __GNUC__ && 2 < __GNUC__ + (7 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_UNUSED __attribute__ ((__unused__))
# else
#  define YY_ATTRIBUTE_UNUSED
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YY_USE(E) ((void) (E))
#else
# define YY_USE(E) /* empty */
#endif

/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
#if defined __GNUC__ && ! defined __ICC && 406 <= __GNUC__ * 100 + __GNUC_MINOR__
# if __GNUC__ * 100 + __GNUC_MINOR__ < 407
#  define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                           \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")
# else
#  define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                           \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")              \
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# endif
# define YY_IGNORE_MAYBE_UNINITIALIZED_END      \
    _Pragma ("GCC diagnostic pop")
#else
# define YY_INITIAL_VALUE(Value) Value
#endif
#ifndef YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_END
#endif
#ifndef YY_INITIAL_VALUE
# define YY_INITIAL_VALUE(Value) /* Nothing. */
#endif

#if defined __cplusplus && defined __GNUC__ && ! defined __ICC && 6 <= __GNUC__
# define YY_IGNORE_USELESS_CAST_BEGIN                          \
    _Pragma ("GCC diagnostic push")                            \
    _Pragma ("GCC diagnostic ignored \"-Wuseless-cast\"")
# define YY_IGNORE_USELESS_CAST_END            \
    _Pragma ("GCC diagnostic pop")
#endif
#ifndef YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_END
#endif


#define YY_ASSERT(E) ((void) (0 && (E)))

#if !defined yyoverflow

/* The parser invokes alloca or malloc; define the necessary symbols.  */

# ifdef YYSTACK_USE_ALLOCA
#  if YYSTACK_USE_ALLOCA
#   ifdef __GNUC__
#    define YYSTACK_ALLOC __builtin_alloca
#   elif defined __BUILTIN_VA_ARG_INCR
#    include <alloca.h> /* INFRINGES ON USER NAME SPACE */
#   elif defined _AIX
#    define YYSTACK_ALLOC __alloca
#   elif defined _MSC_VER
#    include <malloc.h> /* INFRINGES ON USER NAME SPACE */
#    define alloca _alloca
#   else
#    define YYSTACK_ALLOC alloca
#    if ! defined _ALLOCA_H && ! defined EXIT_SUCCESS
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
      /* Use EXIT_SUCCESS as a witness for stdlib.h.  */
#     ifndef EXIT_SUCCESS
#      define EXIT_SUCCESS 0
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's 'empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (0)
#  ifndef YYSTACK_ALLOC_MAXIMUM
    /* The OS might guarantee only one guard page at the bottom of the stack,
       and a page size can be as small as 4096 bytes.  So we cannot safely
       invoke alloca (N) if N exceeds 4096.  Use a slightly smaller number
       to allow for a few compiler-allocated temporary stack slots.  */
#   define YYSTACK_ALLOC_MAXIMUM 4032 /* reasonable circa 2006 */
#  endif
# else
#  define YYSTACK_ALLOC YYMALLOC
#  define YYSTACK_FREE YYFREE
#  ifndef YYSTACK_ALLOC_MAXIMUM
#   define YYSTACK_ALLOC_MAXIMUM YYSIZE_MAXIMUM
#  endif
#  if (defined __cplusplus && ! defined EXIT_SUCCESS \
       && ! ((defined YYMALLOC || defined malloc) \
             && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef EXIT_SUCCESS
#    define EXIT_SUCCESS 0
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined EXIT_SUCCESS
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined EXIT_SUCCESS
void free (void *); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
# endif
#endif /* !defined yyoverflow */

#if (! defined yyoverflow \
     && (! defined __cplusplus \
         || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yy_state_t yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (YYSIZEOF (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (YYSIZEOF (yy_state_t) + YYSIZEOF (YYSTYPE)) \
      + YYSTACK_GAP_MAXIMUM)

# define YYCOPY_NEEDED 1

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)                           \
    do                                                                  \
      {                                                                 \
        YYPTRDIFF_T yynewbytes;                                         \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * YYSIZEOF (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / YYSIZEOF (*yyptr);                        \
      }                                                                 \
    while (0)

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, YY_CAST (YYSIZE_T, (Count)) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYPTRDIFF_T yyi;                      \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (0)
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  42
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   1156

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  81
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  64
/* YYNRULES -- Number of rules.  */
#define YYNRULES  208
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  354

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   311


/* YYTRANSLATE(TOKEN-NUM) -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, with out-of-bounds checking.  */
#define YYTRANSLATE(YYX)                                \
  (0 <= (YYX) && (YYX) <= YYMAXUTOK                     \
   ? YY_CAST (yysymbol_kind_t, yytranslate[YYX])        \
   : YYSYMBOL_YYUNDEF)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex.  */
static const yytype_int8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    80,     2,     2,     2,    77,    70,     2,
      57,    58,    75,    73,    64,    74,    78,    76,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    67,    63,
      71,    65,    72,    66,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    59,     2,    60,    69,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    61,    68,    62,    79,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     1,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56
};

#if YYDEBUG
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,    78,    78,    81,    82,    86,    87,    91,    92,    93,
      94,    98,    99,   100,   101,   102,   103,   107,   108,   110,
     112,   113,   114,   115,   116,   117,   122,   123,   128,   129,
     130,   131,   132,   133,   134,   138,   139,   140,   141,   145,
     146,   150,   151,   152,   153,   154,   155,   159,   160,   161,
     162,   166,   167,   171,   172,   173,   174,   175,   176,   177,
     178,   179,   180,   181,   182,   187,   188,   192,   193,   197,
     198,   202,   203,   207,   208,   212,   213,   217,   218,   219,
     223,   224,   225,   226,   227,   231,   232,   233,   237,   238,
     239,   243,   244,   245,   246,   250,   251,   255,   256,   257,
     258,   259,   260,   264,   265,   266,   267,   268,   269,   270,
     271,   275,   276,   277,   278,   279,   286,   287,   291,   292,
     293,   294,   295,   296,   302,   306,   307,   311,   312,   316,
     317,   321,   322,   323,   324,   325,   329,   330,   331,   335,
     336,   340,   341,   345,   349,   350,   351,   352,   356,   357,
     361,   362,   363,   367,   368,   369,   373,   374,   378,   379,
     383,   384,   388,   389,   390,   391,   395,   396,   400,   405,
     406,   410,   411,   412,   416,   417,   422,   423,   427,   428,
     429,   433,   434,   435,   436,   437,   438,   439,   440,   441,
     445,   446,   447,   451,   452,   458,   459,   460,   466,   467,
     473,   474,   478,   479,   480,   484,   485,   486,   487
};
#endif

/** Accessing symbol of state STATE.  */
#define YY_ACCESSING_SYMBOL(State) YY_CAST (yysymbol_kind_t, yystos[State])

#if YYDEBUG || 0
/* The user-facing name of the symbol whose (internal) number is
   YYSYMBOL.  No bounds checking.  */
static const char *yysymbol_name (yysymbol_kind_t yysymbol) YY_ATTRIBUTE_UNUSED;

/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "\"end of file\"", "error", "\"invalid token\"", "INT_CONST",
  "FLOAT_CONST", "IDENTIFIER", "CHAR_LITERAL", "SIZEOF", "PTR_OP",
  "INC_OP", "DEC_OP", "LEFT_OP", "RIGHT_OP", "LE_OP", "GE_OP", "EQ_OP",
  "NE_OP", "AND_OP", "OR_OP", "MUL_ASSIGN", "DIV_ASSIGN", "MOD_ASSIGN",
  "ADD_ASSIGN", "SUB_ASSIGN", "LEFT_ASSIGN", "RIGHT_ASSIGN", "AND_ASSIGN",
  "XOR_ASSIGN", "OR_ASSIGN", "TYPEDEF", "EXTERN", "STATIC", "AUTO",
  "REGISTER", "CHAR", "INT", "SIGNED", "UNSIGNED", "FLOAT", "DOUBLE",
  "CONST", "VOLATILE", "VOID", "STRUCT", "UNION", "ENUM", "CASE",
  "DEFAULT", "IF", "ELSE", "SWITCH", "WHILE", "DO", "FOR", "CONTINUE",
  "BREAK", "RETURN", "'('", "')'", "'['", "']'", "'{'", "'}'", "';'",
  "','", "'='", "'?'", "':'", "'|'", "'^'", "'&'", "'<'", "'>'", "'+'",
  "'-'", "'*'", "'/'", "'%'", "'.'", "'~'", "'!'", "$accept", "ROOT",
  "translation_unit", "external_declaration", "function_definition",
  "declaration_specifiers", "type_specifier", "declarator",
  "direct_declarator", "compound_statement", "statement_list", "statement",
  "jump_statement", "expression", "assignment_expression",
  "conditional_expression", "logical_or_expression",
  "logical_and_expression", "inclusive_or_expression",
  "exclusive_or_expression", "and_expression", "equality_expression",
  "relational_expression", "shift_expression", "additive_expression",
  "multiplicative_expression", "cast_expression", "unary_expression",
  "postfix_expression", "primary_expression", "argument_expression_list",
  "unary_operator", "constant_expression", "declaration",
  "init_declarator_list", "init_declarator", "storage_class_specifier",
  "struct_or_union_specifier", "struct_or_union",
  "struct_declaration_list", "struct_declaration",
  "specifier_qualifier_list", "struct_declarator_list",
  "struct_declarator", "enum_specifier", "enumerator_list", "enumerator",
  "type_qualifier", "pointer", "type_qualifier_list",
  "parameter_type_list", "parameter_list", "parameter_declaration",
  "identifier_list", "type_name", "abstract_declarator",
  "direct_abstract_declarator", "initializer", "initializer_list",
  "labeled_statement", "declaration_list", "expression_statement",
  "selection_statement", "iteration_statement", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-198)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-1)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     345,  -198,  -198,  -198,  -198,  -198,  -198,  -198,  -198,  -198,
    -198,  -198,  -198,  -198,  -198,  -198,  -198,  -198,    11,    47,
       6,    20,   345,  -198,  -198,    58,  1111,  1032,    46,  -198,
    1111,  -198,    13,  -198,  1111,    12,     4,    39,    22,  -198,
    -198,     6,  -198,  -198,  -198,   995,   -32,  -198,  -198,   292,
      58,  -198,  -198,  1032,   454,   208,  -198,    64,   974,  -198,
      46,    39,    74,   126,  -198,  -198,  -198,  -198,   642,  -198,
    1032,  -198,    47,  -198,  -198,    92,  -198,   803,   818,   818,
     896,   109,   136,   167,   177,   560,   181,   103,   186,   666,
     622,  -198,  -198,  -198,  -198,  -198,  -198,  -198,  -198,  -198,
     463,  -198,  -198,   -13,  -198,  -198,     5,   227,   183,   185,
     201,   191,   113,   217,   157,   133,  -198,   907,    33,  -198,
     896,  -198,   401,  -198,  -198,  -198,   196,  -198,  -198,  -198,
    -198,    43,   214,   209,  -198,   -19,  -198,  -198,  -198,  -198,
     215,   974,   974,   905,  -198,    16,   974,   139,   896,  -198,
      39,   642,  -198,  -198,  -198,  -198,   560,   622,  -198,   896,
    -198,  -198,   207,   560,   896,   896,   896,   225,   680,  -198,
    -198,  -198,   169,     3,     1,   219,  -198,  -198,  -198,   896,
     896,   896,   896,   896,   896,   896,   896,   896,   896,   896,
     896,   896,   896,   896,   896,   896,   896,   896,   896,   896,
     896,   896,   896,   896,   896,   896,   896,   896,   896,   896,
     274,  -198,  -198,   704,   896,   280,  -198,  -198,   498,   879,
     760,  -198,     7,  -198,   163,  -198,  1111,  -198,   281,  -198,
    1077,  -198,  -198,  -198,   896,   222,   179,  -198,  -198,  -198,
    -198,  -198,  -198,   159,  -198,   232,   560,  -198,    30,    31,
      99,   234,   680,  -198,  -198,   948,   168,  -198,   896,  -198,
     227,    49,   183,   185,   201,   191,   113,   113,   217,   217,
     217,   217,   157,   157,   133,   133,  -198,  -198,  -198,  -198,
    -198,  -198,  -198,  -198,  -198,  -198,  -198,  -198,  -198,  -198,
    -198,  -198,  -198,   100,    72,  -198,  -198,  -198,   235,   242,
    -198,   255,   163,  1065,   784,  -198,  -198,  -198,  -198,   896,
    -198,    16,  -198,   525,  -198,  -198,   560,   560,   560,   896,
     792,  -198,   896,  -198,   896,  -198,  -198,  -198,  -198,  -198,
     258,  -198,   257,  -198,  -198,  -198,  -198,   243,  -198,  -198,
     116,   560,   131,  -198,  -198,  -198,  -198,   560,   256,  -198,
     560,  -198,  -198,  -198
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,    28,   131,   132,   133,   134,   135,    18,    19,    22,
      23,    20,    21,   160,   161,    17,   139,   140,     0,     0,
     162,     0,     2,     3,     5,     0,    13,     0,    27,     6,
      11,    24,     0,    25,    15,     0,   155,     0,     0,   166,
     164,   163,     1,     4,   125,   129,     0,   127,    14,     0,
       0,    10,   198,     0,     0,     0,    12,   138,     0,    16,
      26,     0,   158,     0,   156,    29,   167,   165,     0,     8,
       0,   126,     0,   112,   113,   111,   114,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    35,   200,   118,   120,   121,   119,   122,   123,    42,
       0,    39,    46,     0,    51,    53,    65,    67,    69,    71,
      73,    75,    77,    80,    85,    88,    91,    95,    97,   103,
       0,    41,     0,    43,    44,    45,   129,     9,   199,   174,
      34,   173,     0,   168,   169,     0,   111,    31,   124,    95,
       0,     0,   145,     0,   141,     0,   147,     0,     0,   153,
       0,     0,   190,   130,     7,   128,     0,     0,   101,     0,
      98,    99,     0,     0,     0,     0,     0,     0,     0,    47,
      48,    49,     0,     0,   176,     0,    36,    40,   201,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   109,   110,     0,     0,     0,   100,    37,     0,     0,
       0,   171,   178,   172,   179,    32,     0,    33,     0,    30,
       0,   144,   137,   142,     0,   150,     0,   148,   146,   154,
     159,   157,   193,     0,   195,     0,     0,   197,     0,     0,
       0,     0,     0,    50,   115,     0,   178,   177,     0,    52,
      68,     0,    70,    72,    74,    76,    78,    79,    83,    84,
      81,    82,    86,    87,    89,    90,    92,    93,    94,    55,
      56,    57,    58,    59,    60,    61,    62,    63,    64,    54,
     108,   105,   116,     0,     0,   107,    38,   186,     0,     0,
     182,     0,   180,     0,     0,   170,   175,   136,   151,     0,
     143,     0,   191,     0,   102,   196,     0,     0,     0,     0,
       0,    96,     0,   106,     0,   104,   187,   181,   183,   188,
       0,   184,     0,   152,   149,   192,   194,   202,   204,   205,
       0,     0,     0,    66,   117,   189,   185,     0,     0,   207,
       0,   203,   206,   208
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -198,  -198,  -198,   298,  -198,     0,   -34,   -17,   -28,   134,
     229,   -81,  -198,   -80,   105,   -52,  -198,   161,   170,   173,
     174,   172,    59,     9,    55,    69,   -67,   -42,  -198,  -198,
    -198,  -198,   -51,    40,  -198,   287,  -198,  -198,  -198,   220,
    -132,   -22,  -198,    52,  -198,   299,   218,    29,   -14,  -198,
     -53,  -198,   138,  -198,   212,  -117,  -197,  -146,  -198,  -198,
     132,  -153,  -198,  -198
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
       0,    21,    22,    23,    24,    50,    26,    27,    28,    99,
     100,   101,   102,   103,   104,   105,   106,   107,   108,   109,
     110,   111,   112,   113,   114,   115,   116,   117,   118,   119,
     293,   120,   140,    52,    46,    47,    30,    31,    32,   143,
     144,   145,   236,   237,    33,    63,    64,    34,    35,    41,
     298,   133,   134,   135,   175,   299,   224,   153,   243,   121,
      53,   123,   124,   125
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      25,   132,    38,   138,   167,   242,    40,    60,    45,   172,
     173,   233,     1,   139,   223,   252,    36,     1,    57,   177,
      42,     1,    25,   180,   142,   302,    48,    67,   138,   162,
      56,    71,    72,   126,    59,   158,   160,   161,   139,   227,
      29,   210,   211,   212,    62,   228,    13,    14,     1,    39,
     178,   179,     1,   216,   131,   126,   142,   257,   255,   302,
     220,   254,    29,     1,   219,    61,   220,   179,   174,    19,
      66,   181,    37,    19,    58,   244,    20,   173,   139,   173,
      65,    20,   247,   234,   248,   249,   250,   146,   316,   317,
     213,    20,   214,   128,   179,   179,   138,   240,   233,   320,
     219,   261,   220,    54,    19,    55,   139,   142,   142,   142,
     128,   215,   142,   179,   221,    19,   322,   222,    20,   146,
     231,    44,    20,   142,   238,   141,   188,   189,   235,   276,
     277,   278,   325,    20,   294,   174,   179,   177,   139,   148,
     139,   139,   139,   139,   139,   139,   139,   139,   139,   139,
     139,   139,   139,   139,   139,   139,   139,   318,   323,   156,
     256,    51,   128,   179,   324,   315,   169,   336,   138,   301,
     146,   146,   146,   152,   348,   146,   163,    70,   139,    69,
     179,   122,   138,   308,   190,   191,   146,   127,   149,   350,
     150,   321,   139,   164,    60,   179,   142,   268,   269,   270,
     271,   239,    38,   150,   154,   222,   186,   187,   196,   197,
     198,    73,    74,   136,    76,    77,   139,    78,    79,   131,
     303,   312,   304,   313,   165,   255,   131,   220,   192,   193,
     194,   195,   253,   179,   166,   337,   338,   339,   168,   340,
     342,   256,   310,   311,   182,   266,   267,   272,   273,   170,
     330,   183,   138,   332,   184,   131,   152,   138,   333,   146,
     349,    68,   139,   274,   275,    90,   351,   139,   137,   353,
     343,   185,   225,   226,   246,   229,   251,   258,    93,   290,
     139,    94,    95,    96,   259,   295,   306,    97,    98,   309,
     314,   319,   347,   326,   235,    73,    74,    75,    76,    77,
     327,    78,    79,   131,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   328,   345,   346,   292,   352,
      43,     2,     3,     4,     5,     6,     7,     8,     9,    10,
      11,    12,    13,    14,    15,    16,    17,    18,    80,    81,
      82,   260,    83,    84,    85,    86,    87,    88,    89,    90,
       1,   218,   262,    49,    91,    92,   263,   265,   264,   155,
     147,   230,    93,   334,   305,    94,    95,    96,   241,   245,
       0,    97,    98,     0,     2,     3,     4,     5,     6,     7,
       8,     9,    10,    11,    12,    13,    14,    15,    16,    17,
      18,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    19,     0,    73,    74,    75,    76,    77,     0,
      78,    79,     0,     0,     0,     0,     0,     0,   152,     0,
      20,     0,     0,     0,     0,     0,     0,     0,     0,   344,
       2,     3,     4,     5,     6,     7,     8,     9,    10,    11,
      12,    13,    14,    15,    16,    17,    18,    80,    81,    82,
       0,    83,    84,    85,    86,    87,    88,    89,    90,   129,
       0,     0,    49,   217,    92,     0,    73,    74,    75,    76,
      77,    93,    78,    79,    94,    95,    96,     0,     0,     0,
      97,    98,     0,     2,     3,     4,     5,     6,     7,     8,
       9,    10,    11,    12,    13,    14,    15,    16,    17,    18,
       0,    73,    74,    75,    76,    77,     0,    78,    79,    80,
      81,    82,   130,    83,    84,    85,    86,    87,    88,    89,
      90,     0,     0,     0,    49,   176,    92,     0,    73,    74,
     136,    76,    77,    93,    78,    79,    94,    95,    96,     0,
       0,     0,    97,    98,    80,    81,    82,     0,    83,    84,
      85,    86,    87,    88,    89,    90,     0,     0,     0,    49,
     296,    92,     0,    73,    74,    75,    76,    77,    93,    78,
      79,    94,    95,    96,     0,     0,     0,    97,    98,     0,
       0,     0,    90,     0,     0,     0,   151,   335,     0,     0,
       0,     0,     0,     0,     0,    93,     0,     0,    94,    95,
      96,     0,     0,     0,    97,    98,    80,    81,    82,     0,
      83,    84,    85,    86,    87,    88,    89,    90,     0,     0,
       0,    49,     0,    92,     0,    73,    74,   136,    76,    77,
      93,    78,    79,    94,    95,    96,     0,     0,     0,    97,
      98,     0,     0,     0,     0,    73,    74,   136,    76,    77,
       0,    78,    79,     0,     0,     0,     7,     8,     9,    10,
      11,    12,    13,    14,    15,    16,    17,    18,     0,    73,
      74,   136,    76,    77,     0,    78,    79,     0,     0,    90,
       0,     0,     0,    73,    74,   136,    76,    77,     0,    78,
      79,     0,    93,     0,     0,    94,    95,    96,     0,    90,
       0,    97,    98,   151,     0,     0,     0,    73,    74,   136,
      76,    77,    93,    78,    79,    94,    95,    96,     0,     0,
       0,    97,    98,    90,     0,     0,     0,     0,     0,   171,
       0,     0,     0,     0,     0,     0,    93,    90,     0,    94,
      95,    96,     0,    92,     0,    97,    98,     0,     0,     0,
      93,     0,     0,    94,    95,    96,     0,     0,     0,    97,
      98,    90,   291,    73,    74,   136,    76,    77,     0,    78,
      79,     0,     0,     0,    93,     0,     0,    94,    95,    96,
       0,     0,     0,    97,    98,     0,     0,    73,    74,   136,
      76,    77,     0,    78,    79,    73,    74,   136,    76,    77,
       0,    78,    79,     0,     0,     0,    73,    74,   136,    76,
      77,     0,    78,    79,     0,     0,     0,    90,     0,     0,
     300,    73,    74,   136,    76,    77,     0,    78,    79,     0,
      93,     0,     0,    94,    95,    96,     0,     0,     0,    97,
      98,    90,     0,     0,   331,     0,     0,     0,     0,    90,
     341,     0,     0,     0,    93,     0,     0,    94,    95,    96,
     157,     0,    93,    97,    98,    94,    95,    96,     0,     0,
       0,    97,    98,    93,     0,   159,    94,    95,    96,     0,
       0,     0,    97,    98,     1,     0,     0,     0,    93,     0,
       0,    94,    95,    96,     0,     0,     0,    97,    98,    73,
      74,   136,    76,    77,     0,    78,    79,     0,     2,     3,
       4,     5,     6,     7,     8,     9,    10,    11,    12,    13,
      14,    15,    16,    17,    18,     0,   199,   200,   201,   202,
     203,   204,   205,   206,   207,   208,   219,   297,   220,     7,
       8,     9,    10,    11,    12,    13,    14,    15,    16,    17,
      18,     0,     0,    90,    20,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    93,   232,     0,    94,
      95,    96,   209,     0,     0,    97,    98,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   255,   297,   220,     7,     8,
       9,    10,    11,    12,    13,    14,    15,    16,    17,    18,
       0,     0,     0,    20,     2,     3,     4,     5,     6,     7,
       8,     9,    10,    11,    12,    13,    14,    15,    16,    17,
      18,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    49,     0,     0,     0,
      68,     2,     3,     4,     5,     6,     7,     8,     9,    10,
      11,    12,    13,    14,    15,    16,    17,    18,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    49,     2,     3,     4,     5,     6,     7,
       8,     9,    10,    11,    12,    13,    14,    15,    16,    17,
      18,     7,     8,     9,    10,    11,    12,    13,    14,    15,
      16,    17,    18,   329,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   307,
       2,     3,     4,     5,     6,     7,     8,     9,    10,    11,
      12,    13,    14,    15,    16,    17,    18
};

static const yytype_int16 yycheck[] =
{
       0,    54,    19,    55,    85,   151,    20,    35,    25,    89,
      90,   143,     5,    55,   131,   168,     5,     5,     5,   100,
       0,     5,    22,    18,    58,   222,    26,    41,    80,    80,
      30,    63,    64,    50,    34,    77,    78,    79,    80,    58,
       0,     8,     9,    10,     5,    64,    40,    41,     5,    20,
      63,    64,     5,   120,    54,    72,    90,   174,    57,   256,
      59,    58,    22,     5,    57,    61,    59,    64,    90,    57,
      41,    66,    61,    57,    61,   156,    75,   157,   120,   159,
      58,    75,   163,    67,   164,   165,   166,    58,    58,    58,
      57,    75,    59,    53,    64,    64,   148,   148,   230,   252,
      57,   181,    59,    57,    57,    59,   148,   141,   142,   143,
      70,    78,   146,    64,   131,    57,    67,   131,    75,    90,
     142,    63,    75,   157,   146,    61,    13,    14,   145,   196,
     197,   198,    60,    75,   214,   157,    64,   218,   180,    65,
     182,   183,   184,   185,   186,   187,   188,   189,   190,   191,
     192,   193,   194,   195,   196,   197,   198,    58,    58,    67,
     174,    27,   122,    64,    64,   246,    63,   313,   220,   220,
     141,   142,   143,    68,    58,   146,    67,    45,   220,    45,
      64,    49,   234,   234,    71,    72,   157,    53,    62,    58,
      64,   258,   234,    57,   222,    64,   230,   188,   189,   190,
     191,    62,   219,    64,    70,   219,    15,    16,    75,    76,
      77,     3,     4,     5,     6,     7,   258,     9,    10,   219,
      57,    62,    59,    64,    57,    57,   226,    59,    11,    12,
      73,    74,    63,    64,    57,   316,   317,   318,    57,   319,
     320,   255,    63,    64,    17,   186,   187,   192,   193,    63,
     303,    68,   304,   304,    69,   255,   151,   309,   309,   230,
     341,    65,   304,   194,   195,    57,   347,   309,    60,   350,
     322,    70,    58,    64,    67,    60,    51,    58,    70,     5,
     322,    73,    74,    75,   179,     5,     5,    79,    80,    67,
      58,    57,    49,    58,   311,     3,     4,     5,     6,     7,
      58,     9,    10,   303,   199,   200,   201,   202,   203,   204,
     205,   206,   207,   208,   209,    60,    58,    60,   213,    63,
      22,    29,    30,    31,    32,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    43,    44,    45,    46,    47,
      48,   180,    50,    51,    52,    53,    54,    55,    56,    57,
       5,   122,   182,    61,    62,    63,   183,   185,   184,    72,
      61,   141,    70,   311,   226,    73,    74,    75,   150,   157,
      -1,    79,    80,    -1,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    57,    -1,     3,     4,     5,     6,     7,    -1,
       9,    10,    -1,    -1,    -1,    -1,    -1,    -1,   313,    -1,
      75,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   324,
      29,    30,    31,    32,    33,    34,    35,    36,    37,    38,
      39,    40,    41,    42,    43,    44,    45,    46,    47,    48,
      -1,    50,    51,    52,    53,    54,    55,    56,    57,     5,
      -1,    -1,    61,    62,    63,    -1,     3,     4,     5,     6,
       7,    70,     9,    10,    73,    74,    75,    -1,    -1,    -1,
      79,    80,    -1,    29,    30,    31,    32,    33,    34,    35,
      36,    37,    38,    39,    40,    41,    42,    43,    44,    45,
      -1,     3,     4,     5,     6,     7,    -1,     9,    10,    46,
      47,    48,    58,    50,    51,    52,    53,    54,    55,    56,
      57,    -1,    -1,    -1,    61,    62,    63,    -1,     3,     4,
       5,     6,     7,    70,     9,    10,    73,    74,    75,    -1,
      -1,    -1,    79,    80,    46,    47,    48,    -1,    50,    51,
      52,    53,    54,    55,    56,    57,    -1,    -1,    -1,    61,
      62,    63,    -1,     3,     4,     5,     6,     7,    70,     9,
      10,    73,    74,    75,    -1,    -1,    -1,    79,    80,    -1,
      -1,    -1,    57,    -1,    -1,    -1,    61,    62,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    70,    -1,    -1,    73,    74,
      75,    -1,    -1,    -1,    79,    80,    46,    47,    48,    -1,
      50,    51,    52,    53,    54,    55,    56,    57,    -1,    -1,
      -1,    61,    -1,    63,    -1,     3,     4,     5,     6,     7,
      70,     9,    10,    73,    74,    75,    -1,    -1,    -1,    79,
      80,    -1,    -1,    -1,    -1,     3,     4,     5,     6,     7,
      -1,     9,    10,    -1,    -1,    -1,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    43,    44,    45,    -1,     3,
       4,     5,     6,     7,    -1,     9,    10,    -1,    -1,    57,
      -1,    -1,    -1,     3,     4,     5,     6,     7,    -1,     9,
      10,    -1,    70,    -1,    -1,    73,    74,    75,    -1,    57,
      -1,    79,    80,    61,    -1,    -1,    -1,     3,     4,     5,
       6,     7,    70,     9,    10,    73,    74,    75,    -1,    -1,
      -1,    79,    80,    57,    -1,    -1,    -1,    -1,    -1,    63,
      -1,    -1,    -1,    -1,    -1,    -1,    70,    57,    -1,    73,
      74,    75,    -1,    63,    -1,    79,    80,    -1,    -1,    -1,
      70,    -1,    -1,    73,    74,    75,    -1,    -1,    -1,    79,
      80,    57,    58,     3,     4,     5,     6,     7,    -1,     9,
      10,    -1,    -1,    -1,    70,    -1,    -1,    73,    74,    75,
      -1,    -1,    -1,    79,    80,    -1,    -1,     3,     4,     5,
       6,     7,    -1,     9,    10,     3,     4,     5,     6,     7,
      -1,     9,    10,    -1,    -1,    -1,     3,     4,     5,     6,
       7,    -1,     9,    10,    -1,    -1,    -1,    57,    -1,    -1,
      60,     3,     4,     5,     6,     7,    -1,     9,    10,    -1,
      70,    -1,    -1,    73,    74,    75,    -1,    -1,    -1,    79,
      80,    57,    -1,    -1,    60,    -1,    -1,    -1,    -1,    57,
      58,    -1,    -1,    -1,    70,    -1,    -1,    73,    74,    75,
      57,    -1,    70,    79,    80,    73,    74,    75,    -1,    -1,
      -1,    79,    80,    70,    -1,    57,    73,    74,    75,    -1,
      -1,    -1,    79,    80,     5,    -1,    -1,    -1,    70,    -1,
      -1,    73,    74,    75,    -1,    -1,    -1,    79,    80,     3,
       4,     5,     6,     7,    -1,     9,    10,    -1,    29,    30,
      31,    32,    33,    34,    35,    36,    37,    38,    39,    40,
      41,    42,    43,    44,    45,    -1,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    57,    58,    59,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    -1,    -1,    57,    75,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    70,    62,    -1,    73,
      74,    75,    65,    -1,    -1,    79,    80,    29,    30,    31,
      32,    33,    34,    35,    36,    37,    38,    39,    40,    41,
      42,    43,    44,    45,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    57,    58,    59,    34,    35,
      36,    37,    38,    39,    40,    41,    42,    43,    44,    45,
      -1,    -1,    -1,    75,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    61,    -1,    -1,    -1,
      65,    29,    30,    31,    32,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    43,    44,    45,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    61,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    34,    35,    36,    37,    38,    39,    40,    41,    42,
      43,    44,    45,    58,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    62,
      29,    30,    31,    32,    33,    34,    35,    36,    37,    38,
      39,    40,    41,    42,    43,    44,    45
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     5,    29,    30,    31,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    43,    44,    45,    57,
      75,    82,    83,    84,    85,    86,    87,    88,    89,   114,
     117,   118,   119,   125,   128,   129,     5,    61,    88,   128,
     129,   130,     0,    84,    63,    88,   115,   116,    86,    61,
      86,    90,   114,   141,    57,    59,    86,     5,    61,    86,
      89,    61,     5,   126,   127,    58,   128,   129,    65,    90,
     141,    63,    64,     3,     4,     5,     6,     7,     9,    10,
      46,    47,    48,    50,    51,    52,    53,    54,    55,    56,
      57,    62,    63,    70,    73,    74,    75,    79,    80,    90,
      91,    92,    93,    94,    95,    96,    97,    98,    99,   100,
     101,   102,   103,   104,   105,   106,   107,   108,   109,   110,
     112,   140,   141,   142,   143,   144,    88,    90,   114,     5,
      58,    86,   131,   132,   133,   134,     5,    60,    96,   108,
     113,    61,    87,   120,   121,   122,   128,   126,    65,    62,
      64,    61,    95,   138,    90,   116,    67,    57,   108,    57,
     108,   108,   113,    67,    57,    57,    57,    92,    57,    63,
      63,    63,    94,    94,   122,   135,    62,    92,    63,    64,
      18,    66,    17,    68,    69,    70,    15,    16,    13,    14,
      71,    72,    11,    12,    73,    74,    75,    76,    77,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    65,
       8,     9,    10,    57,    59,    78,   107,    62,    91,    57,
      59,    88,   129,   136,   137,    58,    64,    58,    64,    60,
     120,   122,    62,   121,    67,    88,   123,   124,   122,    62,
     113,   127,   138,   139,    92,   135,    67,    92,    94,    94,
      94,    51,   142,    63,    58,    57,   129,   136,    58,    95,
      98,    94,    99,   100,   101,   102,   103,   103,   104,   104,
     104,   104,   105,   105,   106,   106,   107,   107,   107,    95,
      95,    95,    95,    95,    95,    95,    95,    95,    95,    95,
       5,    58,    95,   111,    94,     5,    62,    58,   131,   136,
      60,   113,   137,    57,    59,   133,     5,    62,   113,    67,
      63,    64,    62,    64,    58,    92,    58,    58,    58,    57,
     142,   107,    67,    58,    64,    60,    58,    58,    60,    58,
     131,    60,   113,   113,   124,    62,   138,    92,    92,    92,
      94,    58,    94,    96,    95,    58,    60,    49,    58,    92,
      58,    92,    63,    92
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_uint8 yyr1[] =
{
       0,    81,    82,    83,    83,    84,    84,    85,    85,    85,
      85,    86,    86,    86,    86,    86,    86,    87,    87,    87,
      87,    87,    87,    87,    87,    87,    88,    88,    89,    89,
      89,    89,    89,    89,    89,    90,    90,    90,    90,    91,
      91,    92,    92,    92,    92,    92,    92,    93,    93,    93,
      93,    94,    94,    95,    95,    95,    95,    95,    95,    95,
      95,    95,    95,    95,    95,    96,    96,    97,    97,    98,
      98,    99,    99,   100,   100,   101,   101,   102,   102,   102,
     103,   103,   103,   103,   103,   104,   104,   104,   105,   105,
     105,   106,   106,   106,   106,   107,   107,   108,   108,   108,
     108,   108,   108,   109,   109,   109,   109,   109,   109,   109,
     109,   110,   110,   110,   110,   110,   111,   111,   112,   112,
     112,   112,   112,   112,   113,   114,   114,   115,   115,   116,
     116,   117,   117,   117,   117,   117,   118,   118,   118,   119,
     119,   120,   120,   121,   122,   122,   122,   122,   123,   123,
     124,   124,   124,   125,   125,   125,   126,   126,   127,   127,
     128,   128,   129,   129,   129,   129,   130,   130,   131,   132,
     132,   133,   133,   133,   134,   134,   135,   135,   136,   136,
     136,   137,   137,   137,   137,   137,   137,   137,   137,   137,
     138,   138,   138,   139,   139,   140,   140,   140,   141,   141,
     142,   142,   143,   143,   143,   144,   144,   144,   144
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     1,     1,     2,     1,     1,     4,     3,     3,
       2,     1,     2,     1,     2,     1,     2,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     2,     1,     1,     3,
       4,     3,     4,     4,     3,     2,     3,     3,     4,     1,
       2,     1,     1,     1,     1,     1,     1,     2,     2,     2,
       3,     1,     3,     1,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     1,     5,     1,     3,     1,
       3,     1,     3,     1,     3,     1,     3,     1,     3,     3,
       1,     3,     3,     3,     3,     1,     3,     3,     1,     3,
       3,     1,     3,     3,     3,     1,     4,     1,     2,     2,
       2,     2,     4,     1,     4,     3,     4,     3,     3,     2,
       2,     1,     1,     1,     1,     3,     1,     3,     1,     1,
       1,     1,     1,     1,     1,     2,     3,     1,     3,     1,
       3,     1,     1,     1,     1,     1,     5,     4,     2,     1,
       1,     1,     2,     3,     2,     1,     2,     1,     1,     3,
       1,     2,     3,     4,     5,     2,     1,     3,     1,     3,
       1,     1,     1,     2,     2,     3,     1,     2,     1,     1,
       3,     2,     2,     1,     1,     3,     1,     2,     1,     1,
       2,     3,     2,     3,     3,     4,     2,     3,     3,     4,
       1,     3,     4,     1,     3,     3,     4,     3,     1,     2,
       1,     2,     5,     7,     5,     5,     7,     6,     7
};


enum { YYENOMEM = -2 };

#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab
#define YYNOMEM         goto yyexhaustedlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                    \
  do                                                              \
    if (yychar == YYEMPTY)                                        \
      {                                                           \
        yychar = (Token);                                         \
        yylval = (Value);                                         \
        YYPOPSTACK (yylen);                                       \
        yystate = *yyssp;                                         \
        goto yybackup;                                            \
      }                                                           \
    else                                                          \
      {                                                           \
        yyerror (YY_("syntax error: cannot back up")); \
        YYERROR;                                                  \
      }                                                           \
  while (0)

/* Backward compatibility with an undocumented macro.
   Use YYerror or YYUNDEF. */
#define YYERRCODE YYUNDEF


/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)                        \
do {                                            \
  if (yydebug)                                  \
    YYFPRINTF Args;                             \
} while (0)




# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Kind, Value); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*-----------------------------------.
| Print this symbol's value on YYO.  |
`-----------------------------------*/

static void
yy_symbol_value_print (FILE *yyo,
                       yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep)
{
  FILE *yyoutput = yyo;
  YY_USE (yyoutput);
  if (!yyvaluep)
    return;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YY_USE (yykind);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/*---------------------------.
| Print this symbol on YYO.  |
`---------------------------*/

static void
yy_symbol_print (FILE *yyo,
                 yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyo, "%s %s (",
             yykind < YYNTOKENS ? "token" : "nterm", yysymbol_name (yykind));

  yy_symbol_value_print (yyo, yykind, yyvaluep);
  YYFPRINTF (yyo, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yy_state_t *yybottom, yy_state_t *yytop)
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)                            \
do {                                                            \
  if (yydebug)                                                  \
    yy_stack_print ((Bottom), (Top));                           \
} while (0)


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

static void
yy_reduce_print (yy_state_t *yyssp, YYSTYPE *yyvsp,
                 int yyrule)
{
  int yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %d):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       YY_ACCESSING_SYMBOL (+yyssp[yyi + 1 - yynrhs]),
                       &yyvsp[(yyi + 1) - (yynrhs)]);
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)          \
do {                                    \
  if (yydebug)                          \
    yy_reduce_print (yyssp, yyvsp, Rule); \
} while (0)

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !YYDEBUG */
# define YYDPRINTF(Args) ((void) 0)
# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)
# define YY_STACK_PRINT(Bottom, Top)
# define YY_REDUCE_PRINT(Rule)
#endif /* !YYDEBUG */


/* YYINITDEPTH -- initial size of the parser's stacks.  */
#ifndef YYINITDEPTH
# define YYINITDEPTH 200
#endif

/* YYMAXDEPTH -- maximum size the stacks can grow to (effective only
   if the built-in stack extension method is used).

   Do not make this value too large; the results are undefined if
   YYSTACK_ALLOC_MAXIMUM < YYSTACK_BYTES (YYMAXDEPTH)
   evaluated with infinite-precision integer arithmetic.  */

#ifndef YYMAXDEPTH
# define YYMAXDEPTH 10000
#endif






/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg,
            yysymbol_kind_t yykind, YYSTYPE *yyvaluep)
{
  YY_USE (yyvaluep);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yykind, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YY_USE (yykind);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/* Lookahead token kind.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;
/* Number of syntax errors so far.  */
int yynerrs;




/*----------.
| yyparse.  |
`----------*/

int
yyparse (void)
{
    yy_state_fast_t yystate = 0;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus = 0;

    /* Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* Their size.  */
    YYPTRDIFF_T yystacksize = YYINITDEPTH;

    /* The state stack: array, bottom, top.  */
    yy_state_t yyssa[YYINITDEPTH];
    yy_state_t *yyss = yyssa;
    yy_state_t *yyssp = yyss;

    /* The semantic value stack: array, bottom, top.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs = yyvsa;
    YYSTYPE *yyvsp = yyvs;

  int yyn;
  /* The return value of yyparse.  */
  int yyresult;
  /* Lookahead symbol kind.  */
  yysymbol_kind_t yytoken = YYSYMBOL_YYEMPTY;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;



#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yychar = YYEMPTY; /* Cause a token to be read.  */

  goto yysetstate;


/*------------------------------------------------------------.
| yynewstate -- push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;


/*--------------------------------------------------------------------.
| yysetstate -- set current state (the top of the stack) to yystate.  |
`--------------------------------------------------------------------*/
yysetstate:
  YYDPRINTF ((stderr, "Entering state %d\n", yystate));
  YY_ASSERT (0 <= yystate && yystate < YYNSTATES);
  YY_IGNORE_USELESS_CAST_BEGIN
  *yyssp = YY_CAST (yy_state_t, yystate);
  YY_IGNORE_USELESS_CAST_END
  YY_STACK_PRINT (yyss, yyssp);

  if (yyss + yystacksize - 1 <= yyssp)
#if !defined yyoverflow && !defined YYSTACK_RELOCATE
    YYNOMEM;
#else
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYPTRDIFF_T yysize = yyssp - yyss + 1;

# if defined yyoverflow
      {
        /* Give user a chance to reallocate the stack.  Use copies of
           these so that the &'s don't force the real ones into
           memory.  */
        yy_state_t *yyss1 = yyss;
        YYSTYPE *yyvs1 = yyvs;

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * YYSIZEOF (*yyssp),
                    &yyvs1, yysize * YYSIZEOF (*yyvsp),
                    &yystacksize);
        yyss = yyss1;
        yyvs = yyvs1;
      }
# else /* defined YYSTACK_RELOCATE */
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
        YYNOMEM;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yy_state_t *yyss1 = yyss;
        union yyalloc *yyptr =
          YY_CAST (union yyalloc *,
                   YYSTACK_ALLOC (YY_CAST (YYSIZE_T, YYSTACK_BYTES (yystacksize))));
        if (! yyptr)
          YYNOMEM;
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
#  undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

      YY_IGNORE_USELESS_CAST_BEGIN
      YYDPRINTF ((stderr, "Stack size increased to %ld\n",
                  YY_CAST (long, yystacksize)));
      YY_IGNORE_USELESS_CAST_END

      if (yyss + yystacksize - 1 <= yyssp)
        YYABORT;
    }
#endif /* !defined yyoverflow && !defined YYSTACK_RELOCATE */


  if (yystate == YYFINAL)
    YYACCEPT;

  goto yybackup;


/*-----------.
| yybackup.  |
`-----------*/
yybackup:
  /* Do appropriate processing given the current state.  Read a
     lookahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to lookahead token.  */
  yyn = yypact[yystate];
  if (yypact_value_is_default (yyn))
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either empty, or end-of-input, or a valid lookahead.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token\n"));
      yychar = yylex ();
    }

  if (yychar <= YYEOF)
    {
      yychar = YYEOF;
      yytoken = YYSYMBOL_YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else if (yychar == YYerror)
    {
      /* The scanner already issued an error message, process directly
         to error recovery.  But do not keep the error token as
         lookahead, it is too special and may lead us to an endless
         loop in error recovery. */
      yychar = YYUNDEF;
      yytoken = YYSYMBOL_YYerror;
      goto yyerrlab1;
    }
  else
    {
      yytoken = YYTRANSLATE (yychar);
      YY_SYMBOL_PRINT ("Next token is", yytoken, &yylval, &yylloc);
    }

  /* If the proper action on seeing token YYTOKEN is to reduce or to
     detect an error, take that action.  */
  yyn += yytoken;
  if (yyn < 0 || YYLAST < yyn || yycheck[yyn] != yytoken)
    goto yydefault;
  yyn = yytable[yyn];
  if (yyn <= 0)
    {
      if (yytable_value_is_error (yyn))
        goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the lookahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);
  yystate = yyn;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

  /* Discard the shifted token.  */
  yychar = YYEMPTY;
  goto yynewstate;


/*-----------------------------------------------------------.
| yydefault -- do the default action for the current state.  |
`-----------------------------------------------------------*/
yydefault:
  yyn = yydefact[yystate];
  if (yyn == 0)
    goto yyerrlab;
  goto yyreduce;


/*-----------------------------.
| yyreduce -- do a reduction.  |
`-----------------------------*/
yyreduce:
  /* yyn is the number of a rule to reduce with.  */
  yylen = yyr2[yyn];

  /* If YYLEN is nonzero, implement the default value of the action:
     '$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
  case 2: /* ROOT: translation_unit  */
#line 78 "src/parser.y"
                        { g_root = (yyvsp[0].Base); }
#line 1631 "parser.tab.c"
    break;

  case 3: /* translation_unit: external_declaration  */
#line 81 "src/parser.y"
                                {(yyval.Base) = (yyvsp[0].Base);}
#line 1637 "parser.tab.c"
    break;

  case 4: /* translation_unit: translation_unit external_declaration  */
#line 82 "src/parser.y"
                                            { }
#line 1643 "parser.tab.c"
    break;

  case 5: /* external_declaration: function_definition  */
#line 86 "src/parser.y"
                              {(yyval.Base) = (yyvsp[0].Base);}
#line 1649 "parser.tab.c"
    break;

  case 6: /* external_declaration: declaration  */
#line 87 "src/parser.y"
                      {}
#line 1655 "parser.tab.c"
    break;

  case 7: /* function_definition: declaration_specifiers declarator declaration_list compound_statement  */
#line 91 "src/parser.y"
                                                                            { }
#line 1661 "parser.tab.c"
    break;

  case 8: /* function_definition: declaration_specifiers declarator compound_statement  */
#line 92 "src/parser.y"
                                                           {(yyval.Base) = new FunctionDefinition((yyvsp[-2].Base), (yyvsp[-1].Base), (yyvsp[0].Base));}
#line 1667 "parser.tab.c"
    break;

  case 9: /* function_definition: declarator declaration_list compound_statement  */
#line 93 "src/parser.y"
                                                     { }
#line 1673 "parser.tab.c"
    break;

  case 10: /* function_definition: declarator compound_statement  */
#line 94 "src/parser.y"
                                    { }
#line 1679 "parser.tab.c"
    break;

  case 11: /* declaration_specifiers: storage_class_specifier  */
#line 98 "src/parser.y"
                              { }
#line 1685 "parser.tab.c"
    break;

  case 12: /* declaration_specifiers: storage_class_specifier declaration_specifiers  */
#line 99 "src/parser.y"
                                                     { }
#line 1691 "parser.tab.c"
    break;

  case 13: /* declaration_specifiers: type_specifier  */
#line 100 "src/parser.y"
                     {(yyval.Base) = (yyvsp[0].Base);}
#line 1697 "parser.tab.c"
    break;

  case 14: /* declaration_specifiers: type_specifier declaration_specifiers  */
#line 101 "src/parser.y"
                                            { }
#line 1703 "parser.tab.c"
    break;

  case 15: /* declaration_specifiers: type_qualifier  */
#line 102 "src/parser.y"
                     { }
#line 1709 "parser.tab.c"
    break;

  case 16: /* declaration_specifiers: type_qualifier declaration_specifiers  */
#line 103 "src/parser.y"
                                            { }
#line 1715 "parser.tab.c"
    break;

  case 17: /* type_specifier: VOID  */
#line 107 "src/parser.y"
               {}
#line 1721 "parser.tab.c"
    break;

  case 18: /* type_specifier: CHAR  */
#line 108 "src/parser.y"
               {}
#line 1727 "parser.tab.c"
    break;

  case 19: /* type_specifier: INT  */
#line 110 "src/parser.y"
              {(yyval.Base) = new Type("int");}
#line 1733 "parser.tab.c"
    break;

  case 20: /* type_specifier: FLOAT  */
#line 112 "src/parser.y"
                {}
#line 1739 "parser.tab.c"
    break;

  case 21: /* type_specifier: DOUBLE  */
#line 113 "src/parser.y"
                 {}
#line 1745 "parser.tab.c"
    break;

  case 22: /* type_specifier: SIGNED  */
#line 114 "src/parser.y"
                  {}
#line 1751 "parser.tab.c"
    break;

  case 23: /* type_specifier: UNSIGNED  */
#line 115 "src/parser.y"
                   {}
#line 1757 "parser.tab.c"
    break;

  case 24: /* type_specifier: struct_or_union_specifier  */
#line 116 "src/parser.y"
                                    {}
#line 1763 "parser.tab.c"
    break;

  case 25: /* type_specifier: enum_specifier  */
#line 117 "src/parser.y"
                         {}
#line 1769 "parser.tab.c"
    break;

  case 26: /* declarator: pointer direct_declarator  */
#line 122 "src/parser.y"
                                    {}
#line 1775 "parser.tab.c"
    break;

  case 27: /* declarator: direct_declarator  */
#line 123 "src/parser.y"
                                {(yyval.Base) = (yyvsp[0].Base);}
#line 1781 "parser.tab.c"
    break;

  case 28: /* direct_declarator: IDENTIFIER  */
#line 128 "src/parser.y"
                 {(yyval.Base) = new Identifier(*(yyvsp[0].string));}
#line 1787 "parser.tab.c"
    break;

  case 29: /* direct_declarator: '(' declarator ')'  */
#line 129 "src/parser.y"
                         { }
#line 1793 "parser.tab.c"
    break;

  case 30: /* direct_declarator: direct_declarator '[' constant_expression ']'  */
#line 130 "src/parser.y"
                                                    { }
#line 1799 "parser.tab.c"
    break;

  case 31: /* direct_declarator: direct_declarator '[' ']'  */
#line 131 "src/parser.y"
                                { }
#line 1805 "parser.tab.c"
    break;

  case 32: /* direct_declarator: direct_declarator '(' parameter_type_list ')'  */
#line 132 "src/parser.y"
                                                    { }
#line 1811 "parser.tab.c"
    break;

  case 33: /* direct_declarator: direct_declarator '(' identifier_list ')'  */
#line 133 "src/parser.y"
                                                { }
#line 1817 "parser.tab.c"
    break;

  case 34: /* direct_declarator: direct_declarator '(' ')'  */
#line 134 "src/parser.y"
                                {(yyval.Base) = (yyvsp[-2].Base);}
#line 1823 "parser.tab.c"
    break;

  case 35: /* compound_statement: '{' '}'  */
#line 138 "src/parser.y"
              { }
#line 1829 "parser.tab.c"
    break;

  case 36: /* compound_statement: '{' statement_list '}'  */
#line 139 "src/parser.y"
                             {(yyval.Base) = (yyvsp[-1].Base);}
#line 1835 "parser.tab.c"
    break;

  case 37: /* compound_statement: '{' declaration_list '}'  */
#line 140 "src/parser.y"
                               { }
#line 1841 "parser.tab.c"
    break;

  case 38: /* compound_statement: '{' declaration_list statement_list '}'  */
#line 141 "src/parser.y"
                                              { }
#line 1847 "parser.tab.c"
    break;

  case 39: /* statement_list: statement  */
#line 145 "src/parser.y"
                {(yyval.Base) = (yyvsp[0].Base);}
#line 1853 "parser.tab.c"
    break;

  case 40: /* statement_list: statement_list statement  */
#line 146 "src/parser.y"
                               { }
#line 1859 "parser.tab.c"
    break;

  case 41: /* statement: labeled_statement  */
#line 150 "src/parser.y"
                            {}
#line 1865 "parser.tab.c"
    break;

  case 42: /* statement: compound_statement  */
#line 151 "src/parser.y"
                             {}
#line 1871 "parser.tab.c"
    break;

  case 43: /* statement: expression_statement  */
#line 152 "src/parser.y"
                               {}
#line 1877 "parser.tab.c"
    break;

  case 44: /* statement: selection_statement  */
#line 153 "src/parser.y"
                              {}
#line 1883 "parser.tab.c"
    break;

  case 45: /* statement: iteration_statement  */
#line 154 "src/parser.y"
                              {}
#line 1889 "parser.tab.c"
    break;

  case 46: /* statement: jump_statement  */
#line 155 "src/parser.y"
                         {(yyval.Base) = (yyvsp[0].Base);}
#line 1895 "parser.tab.c"
    break;

  case 47: /* jump_statement: CONTINUE ';'  */
#line 159 "src/parser.y"
                   { }
#line 1901 "parser.tab.c"
    break;

  case 48: /* jump_statement: BREAK ';'  */
#line 160 "src/parser.y"
                { }
#line 1907 "parser.tab.c"
    break;

  case 49: /* jump_statement: RETURN ';'  */
#line 161 "src/parser.y"
                 { }
#line 1913 "parser.tab.c"
    break;

  case 50: /* jump_statement: RETURN expression ';'  */
#line 162 "src/parser.y"
                            { (yyval.Base) = new ReturnExpr{(yyvsp[-1].Base)}; }
#line 1919 "parser.tab.c"
    break;

  case 51: /* expression: assignment_expression  */
#line 166 "src/parser.y"
                            { (yyval.Base) = (yyvsp[0].Base);}
#line 1925 "parser.tab.c"
    break;

  case 52: /* expression: expression ',' assignment_expression  */
#line 167 "src/parser.y"
                                           { }
#line 1931 "parser.tab.c"
    break;

  case 53: /* assignment_expression: conditional_expression  */
#line 171 "src/parser.y"
                                 {(yyval.Base) = (yyvsp[0].Base);}
#line 1937 "parser.tab.c"
    break;

  case 58: /* assignment_expression: unary_expression ADD_ASSIGN assignment_expression  */
#line 176 "src/parser.y"
                                                        {new BinaryAddition((yyvsp[-2].Base), (yyvsp[0].Base));}
#line 1943 "parser.tab.c"
    break;

  case 65: /* conditional_expression: logical_or_expression  */
#line 187 "src/parser.y"
                            {(yyval.Base) = (yyvsp[0].Base); }
#line 1949 "parser.tab.c"
    break;

  case 66: /* conditional_expression: logical_or_expression '?' expression ':' conditional_expression  */
#line 188 "src/parser.y"
                                                                      { }
#line 1955 "parser.tab.c"
    break;

  case 67: /* logical_or_expression: logical_and_expression  */
#line 192 "src/parser.y"
                             {(yyval.Base) = (yyvsp[0].Base); }
#line 1961 "parser.tab.c"
    break;

  case 68: /* logical_or_expression: logical_or_expression OR_OP logical_and_expression  */
#line 193 "src/parser.y"
                                                         { }
#line 1967 "parser.tab.c"
    break;

  case 69: /* logical_and_expression: inclusive_or_expression  */
#line 197 "src/parser.y"
                              { (yyval.Base) = (yyvsp[0].Base);}
#line 1973 "parser.tab.c"
    break;

  case 70: /* logical_and_expression: logical_and_expression AND_OP inclusive_or_expression  */
#line 198 "src/parser.y"
                                                            { }
#line 1979 "parser.tab.c"
    break;

  case 71: /* inclusive_or_expression: exclusive_or_expression  */
#line 202 "src/parser.y"
                              { (yyval.Base) = (yyvsp[0].Base);}
#line 1985 "parser.tab.c"
    break;

  case 72: /* inclusive_or_expression: inclusive_or_expression '|' exclusive_or_expression  */
#line 203 "src/parser.y"
                                                          { }
#line 1991 "parser.tab.c"
    break;

  case 73: /* exclusive_or_expression: and_expression  */
#line 207 "src/parser.y"
                     {(yyval.Base) = (yyvsp[0].Base); }
#line 1997 "parser.tab.c"
    break;

  case 74: /* exclusive_or_expression: exclusive_or_expression '^' and_expression  */
#line 208 "src/parser.y"
                                                 { }
#line 2003 "parser.tab.c"
    break;

  case 75: /* and_expression: equality_expression  */
#line 212 "src/parser.y"
                          {(yyval.Base) = (yyvsp[0].Base); }
#line 2009 "parser.tab.c"
    break;

  case 76: /* and_expression: and_expression '&' equality_expression  */
#line 213 "src/parser.y"
                                             { }
#line 2015 "parser.tab.c"
    break;

  case 77: /* equality_expression: relational_expression  */
#line 217 "src/parser.y"
                            {(yyval.Base) = (yyvsp[0].Base); }
#line 2021 "parser.tab.c"
    break;

  case 78: /* equality_expression: equality_expression EQ_OP relational_expression  */
#line 218 "src/parser.y"
                                                      { }
#line 2027 "parser.tab.c"
    break;

  case 79: /* equality_expression: equality_expression NE_OP relational_expression  */
#line 219 "src/parser.y"
                                                      { }
#line 2033 "parser.tab.c"
    break;

  case 80: /* relational_expression: shift_expression  */
#line 223 "src/parser.y"
                       { (yyval.Base) = (yyvsp[0].Base);}
#line 2039 "parser.tab.c"
    break;

  case 81: /* relational_expression: relational_expression '<' shift_expression  */
#line 224 "src/parser.y"
                                                 { }
#line 2045 "parser.tab.c"
    break;

  case 82: /* relational_expression: relational_expression '>' shift_expression  */
#line 225 "src/parser.y"
                                                 { }
#line 2051 "parser.tab.c"
    break;

  case 83: /* relational_expression: relational_expression LE_OP shift_expression  */
#line 226 "src/parser.y"
                                                   { }
#line 2057 "parser.tab.c"
    break;

  case 84: /* relational_expression: relational_expression GE_OP shift_expression  */
#line 227 "src/parser.y"
                                                   { }
#line 2063 "parser.tab.c"
    break;

  case 85: /* shift_expression: additive_expression  */
#line 231 "src/parser.y"
                          {(yyval.Base) = (yyvsp[0].Base); }
#line 2069 "parser.tab.c"
    break;

  case 86: /* shift_expression: shift_expression LEFT_OP additive_expression  */
#line 232 "src/parser.y"
                                                   { }
#line 2075 "parser.tab.c"
    break;

  case 87: /* shift_expression: shift_expression RIGHT_OP additive_expression  */
#line 233 "src/parser.y"
                                                    { }
#line 2081 "parser.tab.c"
    break;

  case 88: /* additive_expression: multiplicative_expression  */
#line 237 "src/parser.y"
                                {(yyval.Base) = (yyvsp[0].Base); }
#line 2087 "parser.tab.c"
    break;

  case 89: /* additive_expression: additive_expression '+' multiplicative_expression  */
#line 238 "src/parser.y"
                                                        { }
#line 2093 "parser.tab.c"
    break;

  case 90: /* additive_expression: additive_expression '-' multiplicative_expression  */
#line 239 "src/parser.y"
                                                        { }
#line 2099 "parser.tab.c"
    break;

  case 91: /* multiplicative_expression: cast_expression  */
#line 243 "src/parser.y"
                                        { (yyval.Base) = (yyvsp[0].Base);}
#line 2105 "parser.tab.c"
    break;

  case 92: /* multiplicative_expression: multiplicative_expression '*' cast_expression  */
#line 244 "src/parser.y"
                                                        { }
#line 2111 "parser.tab.c"
    break;

  case 93: /* multiplicative_expression: multiplicative_expression '/' cast_expression  */
#line 245 "src/parser.y"
                                                        { }
#line 2117 "parser.tab.c"
    break;

  case 94: /* multiplicative_expression: multiplicative_expression '%' cast_expression  */
#line 246 "src/parser.y"
                                                        { }
#line 2123 "parser.tab.c"
    break;

  case 95: /* cast_expression: unary_expression  */
#line 250 "src/parser.y"
                                { (yyval.Base) = (yyvsp[0].Base); }
#line 2129 "parser.tab.c"
    break;

  case 96: /* cast_expression: '(' type_name ')' cast_expression  */
#line 251 "src/parser.y"
                                            { }
#line 2135 "parser.tab.c"
    break;

  case 97: /* unary_expression: postfix_expression  */
#line 255 "src/parser.y"
                                {(yyval.Base) = (yyvsp[0].Base); }
#line 2141 "parser.tab.c"
    break;

  case 98: /* unary_expression: INC_OP unary_expression  */
#line 256 "src/parser.y"
                                  { }
#line 2147 "parser.tab.c"
    break;

  case 99: /* unary_expression: DEC_OP unary_expression  */
#line 257 "src/parser.y"
                                  { }
#line 2153 "parser.tab.c"
    break;

  case 100: /* unary_expression: unary_operator cast_expression  */
#line 258 "src/parser.y"
                                         { }
#line 2159 "parser.tab.c"
    break;

  case 101: /* unary_expression: SIZEOF unary_expression  */
#line 259 "src/parser.y"
                                  { }
#line 2165 "parser.tab.c"
    break;

  case 102: /* unary_expression: SIZEOF '(' type_name ')'  */
#line 260 "src/parser.y"
                                   { }
#line 2171 "parser.tab.c"
    break;

  case 103: /* postfix_expression: primary_expression  */
#line 264 "src/parser.y"
                                { (yyval.Base) = (yyvsp[0].Base); }
#line 2177 "parser.tab.c"
    break;

  case 104: /* postfix_expression: postfix_expression '[' expression ']'  */
#line 265 "src/parser.y"
                                                { }
#line 2183 "parser.tab.c"
    break;

  case 105: /* postfix_expression: postfix_expression '(' ')'  */
#line 266 "src/parser.y"
                                     { }
#line 2189 "parser.tab.c"
    break;

  case 106: /* postfix_expression: postfix_expression '(' argument_expression_list ')'  */
#line 267 "src/parser.y"
                                                              { }
#line 2195 "parser.tab.c"
    break;

  case 107: /* postfix_expression: postfix_expression '.' IDENTIFIER  */
#line 268 "src/parser.y"
                                            { }
#line 2201 "parser.tab.c"
    break;

  case 108: /* postfix_expression: postfix_expression PTR_OP IDENTIFIER  */
#line 269 "src/parser.y"
                                               { }
#line 2207 "parser.tab.c"
    break;

  case 109: /* postfix_expression: postfix_expression INC_OP  */
#line 270 "src/parser.y"
                                    { }
#line 2213 "parser.tab.c"
    break;

  case 110: /* postfix_expression: postfix_expression DEC_OP  */
#line 271 "src/parser.y"
                                    { }
#line 2219 "parser.tab.c"
    break;

  case 111: /* primary_expression: IDENTIFIER  */
#line 275 "src/parser.y"
                     { }
#line 2225 "parser.tab.c"
    break;

  case 112: /* primary_expression: INT_CONST  */
#line 276 "src/parser.y"
                         { (yyval.Base) = new Integer((yyvsp[0].number)); }
#line 2231 "parser.tab.c"
    break;

  case 113: /* primary_expression: FLOAT_CONST  */
#line 277 "src/parser.y"
                      { }
#line 2237 "parser.tab.c"
    break;

  case 114: /* primary_expression: CHAR_LITERAL  */
#line 278 "src/parser.y"
                       { }
#line 2243 "parser.tab.c"
    break;

  case 115: /* primary_expression: '(' expression ')'  */
#line 279 "src/parser.y"
                             { }
#line 2249 "parser.tab.c"
    break;

  case 116: /* argument_expression_list: assignment_expression  */
#line 286 "src/parser.y"
                                {}
#line 2255 "parser.tab.c"
    break;

  case 117: /* argument_expression_list: argument_expression_list ',' assignment_expression  */
#line 287 "src/parser.y"
                                                             {}
#line 2261 "parser.tab.c"
    break;

  case 118: /* unary_operator: '&'  */
#line 291 "src/parser.y"
              {}
#line 2267 "parser.tab.c"
    break;

  case 119: /* unary_operator: '*'  */
#line 292 "src/parser.y"
              {}
#line 2273 "parser.tab.c"
    break;

  case 120: /* unary_operator: '+'  */
#line 293 "src/parser.y"
              {}
#line 2279 "parser.tab.c"
    break;

  case 121: /* unary_operator: '-'  */
#line 294 "src/parser.y"
              {}
#line 2285 "parser.tab.c"
    break;

  case 122: /* unary_operator: '~'  */
#line 295 "src/parser.y"
              {}
#line 2291 "parser.tab.c"
    break;

  case 123: /* unary_operator: '!'  */
#line 296 "src/parser.y"
              {}
#line 2297 "parser.tab.c"
    break;

  case 124: /* constant_expression: conditional_expression  */
#line 302 "src/parser.y"
                                 {}
#line 2303 "parser.tab.c"
    break;

  case 125: /* declaration: declaration_specifiers ';'  */
#line 306 "src/parser.y"
                                     {}
#line 2309 "parser.tab.c"
    break;

  case 126: /* declaration: declaration_specifiers init_declarator_list ';'  */
#line 307 "src/parser.y"
                                                          {}
#line 2315 "parser.tab.c"
    break;

  case 127: /* init_declarator_list: init_declarator  */
#line 311 "src/parser.y"
                          {}
#line 2321 "parser.tab.c"
    break;

  case 128: /* init_declarator_list: init_declarator_list ',' init_declarator  */
#line 312 "src/parser.y"
                                                   {}
#line 2327 "parser.tab.c"
    break;

  case 129: /* init_declarator: declarator  */
#line 316 "src/parser.y"
                     {}
#line 2333 "parser.tab.c"
    break;

  case 130: /* init_declarator: declarator '=' initializer  */
#line 317 "src/parser.y"
                                     {}
#line 2339 "parser.tab.c"
    break;

  case 131: /* storage_class_specifier: TYPEDEF  */
#line 321 "src/parser.y"
                  {}
#line 2345 "parser.tab.c"
    break;

  case 132: /* storage_class_specifier: EXTERN  */
#line 322 "src/parser.y"
                 {}
#line 2351 "parser.tab.c"
    break;

  case 133: /* storage_class_specifier: STATIC  */
#line 323 "src/parser.y"
                 {}
#line 2357 "parser.tab.c"
    break;

  case 134: /* storage_class_specifier: AUTO  */
#line 324 "src/parser.y"
               {}
#line 2363 "parser.tab.c"
    break;

  case 135: /* storage_class_specifier: REGISTER  */
#line 325 "src/parser.y"
                   {}
#line 2369 "parser.tab.c"
    break;

  case 136: /* struct_or_union_specifier: struct_or_union IDENTIFIER '{' struct_declaration_list '}'  */
#line 329 "src/parser.y"
                                                                     {}
#line 2375 "parser.tab.c"
    break;

  case 137: /* struct_or_union_specifier: struct_or_union '{' struct_declaration_list '}'  */
#line 330 "src/parser.y"
                                                          {}
#line 2381 "parser.tab.c"
    break;

  case 138: /* struct_or_union_specifier: struct_or_union IDENTIFIER  */
#line 331 "src/parser.y"
                                     {}
#line 2387 "parser.tab.c"
    break;

  case 139: /* struct_or_union: STRUCT  */
#line 335 "src/parser.y"
                 {}
#line 2393 "parser.tab.c"
    break;

  case 140: /* struct_or_union: UNION  */
#line 336 "src/parser.y"
                {}
#line 2399 "parser.tab.c"
    break;

  case 141: /* struct_declaration_list: struct_declaration  */
#line 340 "src/parser.y"
                             {}
#line 2405 "parser.tab.c"
    break;

  case 142: /* struct_declaration_list: struct_declaration_list struct_declaration  */
#line 341 "src/parser.y"
                                                     {}
#line 2411 "parser.tab.c"
    break;

  case 143: /* struct_declaration: specifier_qualifier_list struct_declarator_list ';'  */
#line 345 "src/parser.y"
                                                              {}
#line 2417 "parser.tab.c"
    break;

  case 144: /* specifier_qualifier_list: type_specifier specifier_qualifier_list  */
#line 349 "src/parser.y"
                                                  {}
#line 2423 "parser.tab.c"
    break;

  case 145: /* specifier_qualifier_list: type_specifier  */
#line 350 "src/parser.y"
                         {}
#line 2429 "parser.tab.c"
    break;

  case 146: /* specifier_qualifier_list: type_qualifier specifier_qualifier_list  */
#line 351 "src/parser.y"
                                                  {}
#line 2435 "parser.tab.c"
    break;

  case 147: /* specifier_qualifier_list: type_qualifier  */
#line 352 "src/parser.y"
                         {}
#line 2441 "parser.tab.c"
    break;

  case 148: /* struct_declarator_list: struct_declarator  */
#line 356 "src/parser.y"
                            {}
#line 2447 "parser.tab.c"
    break;

  case 149: /* struct_declarator_list: struct_declarator_list ',' struct_declarator  */
#line 357 "src/parser.y"
                                                       {}
#line 2453 "parser.tab.c"
    break;

  case 150: /* struct_declarator: declarator  */
#line 361 "src/parser.y"
                     {}
#line 2459 "parser.tab.c"
    break;

  case 151: /* struct_declarator: ':' constant_expression  */
#line 362 "src/parser.y"
                                  {}
#line 2465 "parser.tab.c"
    break;

  case 152: /* struct_declarator: declarator ':' constant_expression  */
#line 363 "src/parser.y"
                                             {}
#line 2471 "parser.tab.c"
    break;

  case 153: /* enum_specifier: ENUM '{' enumerator_list '}'  */
#line 367 "src/parser.y"
                                       {}
#line 2477 "parser.tab.c"
    break;

  case 154: /* enum_specifier: ENUM IDENTIFIER '{' enumerator_list '}'  */
#line 368 "src/parser.y"
                                                  {}
#line 2483 "parser.tab.c"
    break;

  case 155: /* enum_specifier: ENUM IDENTIFIER  */
#line 369 "src/parser.y"
                          {}
#line 2489 "parser.tab.c"
    break;

  case 156: /* enumerator_list: enumerator  */
#line 373 "src/parser.y"
                     {}
#line 2495 "parser.tab.c"
    break;

  case 157: /* enumerator_list: enumerator_list ',' enumerator  */
#line 374 "src/parser.y"
                                         {}
#line 2501 "parser.tab.c"
    break;

  case 158: /* enumerator: IDENTIFIER  */
#line 378 "src/parser.y"
                     {}
#line 2507 "parser.tab.c"
    break;

  case 159: /* enumerator: IDENTIFIER '=' constant_expression  */
#line 379 "src/parser.y"
                                             {}
#line 2513 "parser.tab.c"
    break;

  case 160: /* type_qualifier: CONST  */
#line 383 "src/parser.y"
                {}
#line 2519 "parser.tab.c"
    break;

  case 161: /* type_qualifier: VOLATILE  */
#line 384 "src/parser.y"
                   {}
#line 2525 "parser.tab.c"
    break;

  case 162: /* pointer: '*'  */
#line 388 "src/parser.y"
              {}
#line 2531 "parser.tab.c"
    break;

  case 163: /* pointer: '*' type_qualifier_list  */
#line 389 "src/parser.y"
                                  {}
#line 2537 "parser.tab.c"
    break;

  case 164: /* pointer: '*' pointer  */
#line 390 "src/parser.y"
                      {}
#line 2543 "parser.tab.c"
    break;

  case 165: /* pointer: '*' type_qualifier_list pointer  */
#line 391 "src/parser.y"
                                          {}
#line 2549 "parser.tab.c"
    break;

  case 166: /* type_qualifier_list: type_qualifier  */
#line 395 "src/parser.y"
                         {}
#line 2555 "parser.tab.c"
    break;

  case 167: /* type_qualifier_list: type_qualifier_list type_qualifier  */
#line 396 "src/parser.y"
                                             {}
#line 2561 "parser.tab.c"
    break;

  case 168: /* parameter_type_list: parameter_list  */
#line 400 "src/parser.y"
                         {}
#line 2567 "parser.tab.c"
    break;

  case 169: /* parameter_list: parameter_declaration  */
#line 405 "src/parser.y"
                                {}
#line 2573 "parser.tab.c"
    break;

  case 170: /* parameter_list: parameter_list ',' parameter_declaration  */
#line 406 "src/parser.y"
                                                   {}
#line 2579 "parser.tab.c"
    break;

  case 171: /* parameter_declaration: declaration_specifiers declarator  */
#line 410 "src/parser.y"
                                            {}
#line 2585 "parser.tab.c"
    break;

  case 172: /* parameter_declaration: declaration_specifiers abstract_declarator  */
#line 411 "src/parser.y"
                                                     {}
#line 2591 "parser.tab.c"
    break;

  case 173: /* parameter_declaration: declaration_specifiers  */
#line 412 "src/parser.y"
                                 {}
#line 2597 "parser.tab.c"
    break;

  case 174: /* identifier_list: IDENTIFIER  */
#line 416 "src/parser.y"
                     {}
#line 2603 "parser.tab.c"
    break;

  case 175: /* identifier_list: identifier_list ',' IDENTIFIER  */
#line 417 "src/parser.y"
                                         {}
#line 2609 "parser.tab.c"
    break;

  case 176: /* type_name: specifier_qualifier_list  */
#line 422 "src/parser.y"
                                   {}
#line 2615 "parser.tab.c"
    break;

  case 177: /* type_name: specifier_qualifier_list abstract_declarator  */
#line 423 "src/parser.y"
                                                       {}
#line 2621 "parser.tab.c"
    break;

  case 178: /* abstract_declarator: pointer  */
#line 427 "src/parser.y"
                  {}
#line 2627 "parser.tab.c"
    break;

  case 179: /* abstract_declarator: direct_abstract_declarator  */
#line 428 "src/parser.y"
                                     {}
#line 2633 "parser.tab.c"
    break;

  case 180: /* abstract_declarator: pointer direct_abstract_declarator  */
#line 429 "src/parser.y"
                                             {}
#line 2639 "parser.tab.c"
    break;

  case 181: /* direct_abstract_declarator: '(' abstract_declarator ')'  */
#line 433 "src/parser.y"
                                      {}
#line 2645 "parser.tab.c"
    break;

  case 182: /* direct_abstract_declarator: '[' ']'  */
#line 434 "src/parser.y"
                  {}
#line 2651 "parser.tab.c"
    break;

  case 183: /* direct_abstract_declarator: '[' constant_expression ']'  */
#line 435 "src/parser.y"
                                      {}
#line 2657 "parser.tab.c"
    break;

  case 184: /* direct_abstract_declarator: direct_abstract_declarator '[' ']'  */
#line 436 "src/parser.y"
                                             {}
#line 2663 "parser.tab.c"
    break;

  case 185: /* direct_abstract_declarator: direct_abstract_declarator '[' constant_expression ']'  */
#line 437 "src/parser.y"
                                                                 {}
#line 2669 "parser.tab.c"
    break;

  case 186: /* direct_abstract_declarator: '(' ')'  */
#line 438 "src/parser.y"
                  {}
#line 2675 "parser.tab.c"
    break;

  case 187: /* direct_abstract_declarator: '(' parameter_type_list ')'  */
#line 439 "src/parser.y"
                                      {}
#line 2681 "parser.tab.c"
    break;

  case 188: /* direct_abstract_declarator: direct_abstract_declarator '(' ')'  */
#line 440 "src/parser.y"
                                             {}
#line 2687 "parser.tab.c"
    break;

  case 189: /* direct_abstract_declarator: direct_abstract_declarator '(' parameter_type_list ')'  */
#line 441 "src/parser.y"
                                                                 {}
#line 2693 "parser.tab.c"
    break;

  case 190: /* initializer: assignment_expression  */
#line 445 "src/parser.y"
                                {}
#line 2699 "parser.tab.c"
    break;

  case 191: /* initializer: '{' initializer_list '}'  */
#line 446 "src/parser.y"
                                   {}
#line 2705 "parser.tab.c"
    break;

  case 192: /* initializer: '{' initializer_list ',' '}'  */
#line 447 "src/parser.y"
                                       {}
#line 2711 "parser.tab.c"
    break;

  case 193: /* initializer_list: initializer  */
#line 451 "src/parser.y"
                      {}
#line 2717 "parser.tab.c"
    break;

  case 194: /* initializer_list: initializer_list ',' initializer  */
#line 452 "src/parser.y"
                                           {}
#line 2723 "parser.tab.c"
    break;

  case 195: /* labeled_statement: IDENTIFIER ':' statement  */
#line 458 "src/parser.y"
                                   {}
#line 2729 "parser.tab.c"
    break;

  case 196: /* labeled_statement: CASE constant_expression ':' statement  */
#line 459 "src/parser.y"
                                                 {}
#line 2735 "parser.tab.c"
    break;

  case 197: /* labeled_statement: DEFAULT ':' statement  */
#line 460 "src/parser.y"
                                {}
#line 2741 "parser.tab.c"
    break;

  case 198: /* declaration_list: declaration  */
#line 466 "src/parser.y"
                      {}
#line 2747 "parser.tab.c"
    break;

  case 199: /* declaration_list: declaration_list declaration  */
#line 467 "src/parser.y"
                                       {}
#line 2753 "parser.tab.c"
    break;

  case 200: /* expression_statement: ';'  */
#line 473 "src/parser.y"
              {}
#line 2759 "parser.tab.c"
    break;

  case 201: /* expression_statement: expression ';'  */
#line 474 "src/parser.y"
                         {}
#line 2765 "parser.tab.c"
    break;

  case 202: /* selection_statement: IF '(' expression ')' statement  */
#line 478 "src/parser.y"
                                          {}
#line 2771 "parser.tab.c"
    break;

  case 203: /* selection_statement: IF '(' expression ')' statement ELSE statement  */
#line 479 "src/parser.y"
                                                         {}
#line 2777 "parser.tab.c"
    break;

  case 204: /* selection_statement: SWITCH '(' expression ')' statement  */
#line 480 "src/parser.y"
                                              {}
#line 2783 "parser.tab.c"
    break;

  case 205: /* iteration_statement: WHILE '(' expression ')' statement  */
#line 484 "src/parser.y"
                                             {}
#line 2789 "parser.tab.c"
    break;

  case 206: /* iteration_statement: DO statement WHILE '(' expression ')' ';'  */
#line 485 "src/parser.y"
                                                    {}
#line 2795 "parser.tab.c"
    break;

  case 207: /* iteration_statement: FOR '(' expression_statement expression_statement ')' statement  */
#line 486 "src/parser.y"
                                                                          {}
#line 2801 "parser.tab.c"
    break;

  case 208: /* iteration_statement: FOR '(' expression_statement expression_statement expression ')' statement  */
#line 487 "src/parser.y"
                                                                                     {}
#line 2807 "parser.tab.c"
    break;


#line 2811 "parser.tab.c"

      default: break;
    }
  /* User semantic actions sometimes alter yychar, and that requires
     that yytoken be updated with the new translation.  We take the
     approach of translating immediately before every use of yytoken.
     One alternative is translating here after every semantic action,
     but that translation would be missed if the semantic action invokes
     YYABORT, YYACCEPT, or YYERROR immediately after altering yychar or
     if it invokes YYBACKUP.  In the case of YYABORT or YYACCEPT, an
     incorrect destructor might then be invoked immediately.  In the
     case of YYERROR or YYBACKUP, subsequent parser actions might lead
     to an incorrect destructor call or verbose syntax error message
     before the lookahead is translated.  */
  YY_SYMBOL_PRINT ("-> $$ =", YY_CAST (yysymbol_kind_t, yyr1[yyn]), &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;

  *++yyvsp = yyval;

  /* Now 'shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */
  {
    const int yylhs = yyr1[yyn] - YYNTOKENS;
    const int yyi = yypgoto[yylhs] + *yyssp;
    yystate = (0 <= yyi && yyi <= YYLAST && yycheck[yyi] == *yyssp
               ? yytable[yyi]
               : yydefgoto[yylhs]);
  }

  goto yynewstate;


/*--------------------------------------.
| yyerrlab -- here on detecting error.  |
`--------------------------------------*/
yyerrlab:
  /* Make sure we have latest lookahead translation.  See comments at
     user semantic actions for why this is necessary.  */
  yytoken = yychar == YYEMPTY ? YYSYMBOL_YYEMPTY : YYTRANSLATE (yychar);
  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
      yyerror (YY_("syntax error"));
    }

  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse lookahead token after an
         error, discard it.  */

      if (yychar <= YYEOF)
        {
          /* Return failure if at end of input.  */
          if (yychar == YYEOF)
            YYABORT;
        }
      else
        {
          yydestruct ("Error: discarding",
                      yytoken, &yylval);
          yychar = YYEMPTY;
        }
    }

  /* Else will try to reuse lookahead token after shifting the error
     token.  */
  goto yyerrlab1;


/*---------------------------------------------------.
| yyerrorlab -- error raised explicitly by YYERROR.  |
`---------------------------------------------------*/
yyerrorlab:
  /* Pacify compilers when the user code never invokes YYERROR and the
     label yyerrorlab therefore never appears in user code.  */
  if (0)
    YYERROR;
  ++yynerrs;

  /* Do not reclaim the symbols of the rule whose action triggered
     this YYERROR.  */
  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);
  yystate = *yyssp;
  goto yyerrlab1;


/*-------------------------------------------------------------.
| yyerrlab1 -- common code for both syntax error and YYERROR.  |
`-------------------------------------------------------------*/
yyerrlab1:
  yyerrstatus = 3;      /* Each real token shifted decrements this.  */

  /* Pop stack until we find a state that shifts the error token.  */
  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
        {
          yyn += YYSYMBOL_YYerror;
          if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYSYMBOL_YYerror)
            {
              yyn = yytable[yyn];
              if (0 < yyn)
                break;
            }
        }

      /* Pop the current state because it cannot handle the error token.  */
      if (yyssp == yyss)
        YYABORT;


      yydestruct ("Error: popping",
                  YY_ACCESSING_SYMBOL (yystate), yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", YY_ACCESSING_SYMBOL (yyn), yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturnlab;


/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturnlab;


/*-----------------------------------------------------------.
| yyexhaustedlab -- YYNOMEM (memory exhaustion) comes here.  |
`-----------------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  goto yyreturnlab;


/*----------------------------------------------------------.
| yyreturnlab -- parsing is finished, clean up and return.  |
`----------------------------------------------------------*/
yyreturnlab:
  if (yychar != YYEMPTY)
    {
      /* Make sure we have latest lookahead translation.  See comments at
         user semantic actions for why this is necessary.  */
      yytoken = YYTRANSLATE (yychar);
      yydestruct ("Cleanup: discarding lookahead",
                  yytoken, &yylval);
    }
  /* Do not reclaim the symbols of the rule whose action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
                  YY_ACCESSING_SYMBOL (+*yyssp), yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif

  return yyresult;
}

#line 494 "src/parser.y"


Base *g_root;

Base *parseAST(std::string filename)
{
  yyin = fopen(filename.c_str(), "r");
  if(yyin == NULL){
    std::cerr << "Couldn't open input file: " << filename << std::endl;
    exit(1);
  }
  g_root = NULL;
  yyparse();
  return g_root;
}
