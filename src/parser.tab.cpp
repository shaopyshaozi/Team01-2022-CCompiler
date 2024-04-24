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

#include "parser.tab.hpp"
/* Symbol kind.  */
enum yysymbol_kind_t
{
  YYSYMBOL_YYEMPTY = -2,
  YYSYMBOL_YYEOF = 0,                      /* "end of file"  */
  YYSYMBOL_YYerror = 1,                    /* error  */
  YYSYMBOL_YYUNDEF = 2,                    /* "invalid token"  */
  YYSYMBOL_INT_CONST = 3,                  /* INT_CONST  */
  YYSYMBOL_FLOAT_CONST = 4,                /* FLOAT_CONST  */
  YYSYMBOL_STRING_LITERAL = 5,             /* STRING_LITERAL  */
  YYSYMBOL_IDENTIFIER = 6,                 /* IDENTIFIER  */
  YYSYMBOL_CHAR_LITERAL = 7,               /* CHAR_LITERAL  */
  YYSYMBOL_SIZEOF = 8,                     /* SIZEOF  */
  YYSYMBOL_PTR_OP = 9,                     /* PTR_OP  */
  YYSYMBOL_INC_OP = 10,                    /* INC_OP  */
  YYSYMBOL_DEC_OP = 11,                    /* DEC_OP  */
  YYSYMBOL_LEFT_OP = 12,                   /* LEFT_OP  */
  YYSYMBOL_RIGHT_OP = 13,                  /* RIGHT_OP  */
  YYSYMBOL_LE_OP = 14,                     /* LE_OP  */
  YYSYMBOL_GE_OP = 15,                     /* GE_OP  */
  YYSYMBOL_EQ_OP = 16,                     /* EQ_OP  */
  YYSYMBOL_NE_OP = 17,                     /* NE_OP  */
  YYSYMBOL_AND_OP = 18,                    /* AND_OP  */
  YYSYMBOL_OR_OP = 19,                     /* OR_OP  */
  YYSYMBOL_MUL_ASSIGN = 20,                /* MUL_ASSIGN  */
  YYSYMBOL_DIV_ASSIGN = 21,                /* DIV_ASSIGN  */
  YYSYMBOL_MOD_ASSIGN = 22,                /* MOD_ASSIGN  */
  YYSYMBOL_ADD_ASSIGN = 23,                /* ADD_ASSIGN  */
  YYSYMBOL_SUB_ASSIGN = 24,                /* SUB_ASSIGN  */
  YYSYMBOL_LEFT_ASSIGN = 25,               /* LEFT_ASSIGN  */
  YYSYMBOL_RIGHT_ASSIGN = 26,              /* RIGHT_ASSIGN  */
  YYSYMBOL_AND_ASSIGN = 27,                /* AND_ASSIGN  */
  YYSYMBOL_XOR_ASSIGN = 28,                /* XOR_ASSIGN  */
  YYSYMBOL_OR_ASSIGN = 29,                 /* OR_ASSIGN  */
  YYSYMBOL_TYPEDEF = 30,                   /* TYPEDEF  */
  YYSYMBOL_EXTERN = 31,                    /* EXTERN  */
  YYSYMBOL_STATIC = 32,                    /* STATIC  */
  YYSYMBOL_AUTO = 33,                      /* AUTO  */
  YYSYMBOL_REGISTER = 34,                  /* REGISTER  */
  YYSYMBOL_CHAR = 35,                      /* CHAR  */
  YYSYMBOL_INT = 36,                       /* INT  */
  YYSYMBOL_SIGNED = 37,                    /* SIGNED  */
  YYSYMBOL_UNSIGNED = 38,                  /* UNSIGNED  */
  YYSYMBOL_FLOAT = 39,                     /* FLOAT  */
  YYSYMBOL_DOUBLE = 40,                    /* DOUBLE  */
  YYSYMBOL_CONST = 41,                     /* CONST  */
  YYSYMBOL_VOLATILE = 42,                  /* VOLATILE  */
  YYSYMBOL_VOID = 43,                      /* VOID  */
  YYSYMBOL_STRUCT = 44,                    /* STRUCT  */
  YYSYMBOL_UNION = 45,                     /* UNION  */
  YYSYMBOL_ENUM = 46,                      /* ENUM  */
  YYSYMBOL_CASE = 47,                      /* CASE  */
  YYSYMBOL_DEFAULT = 48,                   /* DEFAULT  */
  YYSYMBOL_IF = 49,                        /* IF  */
  YYSYMBOL_ELSE = 50,                      /* ELSE  */
  YYSYMBOL_SWITCH = 51,                    /* SWITCH  */
  YYSYMBOL_WHILE = 52,                     /* WHILE  */
  YYSYMBOL_DO = 53,                        /* DO  */
  YYSYMBOL_FOR = 54,                       /* FOR  */
  YYSYMBOL_CONTINUE = 55,                  /* CONTINUE  */
  YYSYMBOL_BREAK = 56,                     /* BREAK  */
  YYSYMBOL_RETURN = 57,                    /* RETURN  */
  YYSYMBOL_58_ = 58,                       /* '('  */
  YYSYMBOL_59_ = 59,                       /* ')'  */
  YYSYMBOL_60_ = 60,                       /* '['  */
  YYSYMBOL_61_ = 61,                       /* ']'  */
  YYSYMBOL_62_ = 62,                       /* '{'  */
  YYSYMBOL_63_ = 63,                       /* '}'  */
  YYSYMBOL_64_ = 64,                       /* ';'  */
  YYSYMBOL_65_ = 65,                       /* ','  */
  YYSYMBOL_66_ = 66,                       /* '='  */
  YYSYMBOL_67_ = 67,                       /* '?'  */
  YYSYMBOL_68_ = 68,                       /* ':'  */
  YYSYMBOL_69_ = 69,                       /* '|'  */
  YYSYMBOL_70_ = 70,                       /* '^'  */
  YYSYMBOL_71_ = 71,                       /* '&'  */
  YYSYMBOL_72_ = 72,                       /* '<'  */
  YYSYMBOL_73_ = 73,                       /* '>'  */
  YYSYMBOL_74_ = 74,                       /* '+'  */
  YYSYMBOL_75_ = 75,                       /* '-'  */
  YYSYMBOL_76_ = 76,                       /* '*'  */
  YYSYMBOL_77_ = 77,                       /* '/'  */
  YYSYMBOL_78_ = 78,                       /* '%'  */
  YYSYMBOL_79_ = 79,                       /* '~'  */
  YYSYMBOL_80_ = 80,                       /* '!'  */
  YYSYMBOL_81_ = 81,                       /* '.'  */
  YYSYMBOL_YYACCEPT = 82,                  /* $accept  */
  YYSYMBOL_ROOT = 83,                      /* ROOT  */
  YYSYMBOL_translation_unit = 84,          /* translation_unit  */
  YYSYMBOL_external_declaration = 85,      /* external_declaration  */
  YYSYMBOL_function_definition = 86,       /* function_definition  */
  YYSYMBOL_declaration_specifiers = 87,    /* declaration_specifiers  */
  YYSYMBOL_type_specifier = 88,            /* type_specifier  */
  YYSYMBOL_declarator = 89,                /* declarator  */
  YYSYMBOL_direct_declarator = 90,         /* direct_declarator  */
  YYSYMBOL_compound_statement = 91,        /* compound_statement  */
  YYSYMBOL_statement_list = 92,            /* statement_list  */
  YYSYMBOL_statement = 93,                 /* statement  */
  YYSYMBOL_jump_statement = 94,            /* jump_statement  */
  YYSYMBOL_expression = 95,                /* expression  */
  YYSYMBOL_assignment_expression = 96,     /* assignment_expression  */
  YYSYMBOL_conditional_expression = 97,    /* conditional_expression  */
  YYSYMBOL_logical_or_expression = 98,     /* logical_or_expression  */
  YYSYMBOL_logical_and_expression = 99,    /* logical_and_expression  */
  YYSYMBOL_inclusive_or_expression = 100,  /* inclusive_or_expression  */
  YYSYMBOL_exclusive_or_expression = 101,  /* exclusive_or_expression  */
  YYSYMBOL_and_expression = 102,           /* and_expression  */
  YYSYMBOL_equality_expression = 103,      /* equality_expression  */
  YYSYMBOL_relational_expression = 104,    /* relational_expression  */
  YYSYMBOL_shift_expression = 105,         /* shift_expression  */
  YYSYMBOL_additive_expression = 106,      /* additive_expression  */
  YYSYMBOL_multiplicative_expression = 107, /* multiplicative_expression  */
  YYSYMBOL_cast_expression = 108,          /* cast_expression  */
  YYSYMBOL_unary_expression = 109,         /* unary_expression  */
  YYSYMBOL_postfix_expression = 110,       /* postfix_expression  */
  YYSYMBOL_argument_expression_list = 111, /* argument_expression_list  */
  YYSYMBOL_primary_expression = 112,       /* primary_expression  */
  YYSYMBOL_selection_statement = 113,      /* selection_statement  */
  YYSYMBOL_iteration_statement = 114,      /* iteration_statement  */
  YYSYMBOL_constant_expression = 115,      /* constant_expression  */
  YYSYMBOL_declaration = 116,              /* declaration  */
  YYSYMBOL_init_declarator_list = 117,     /* init_declarator_list  */
  YYSYMBOL_init_declarator = 118,          /* init_declarator  */
  YYSYMBOL_storage_class_specifier = 119,  /* storage_class_specifier  */
  YYSYMBOL_struct_or_union_specifier = 120, /* struct_or_union_specifier  */
  YYSYMBOL_struct_or_union = 121,          /* struct_or_union  */
  YYSYMBOL_struct_declaration_list = 122,  /* struct_declaration_list  */
  YYSYMBOL_struct_declaration = 123,       /* struct_declaration  */
  YYSYMBOL_specifier_qualifier_list = 124, /* specifier_qualifier_list  */
  YYSYMBOL_struct_declarator_list = 125,   /* struct_declarator_list  */
  YYSYMBOL_struct_declarator = 126,        /* struct_declarator  */
  YYSYMBOL_enum_specifier = 127,           /* enum_specifier  */
  YYSYMBOL_enumerator_list = 128,          /* enumerator_list  */
  YYSYMBOL_enumerator = 129,               /* enumerator  */
  YYSYMBOL_type_qualifier = 130,           /* type_qualifier  */
  YYSYMBOL_pointer = 131,                  /* pointer  */
  YYSYMBOL_type_qualifier_list = 132,      /* type_qualifier_list  */
  YYSYMBOL_parameter_type_list = 133,      /* parameter_type_list  */
  YYSYMBOL_parameter_list = 134,           /* parameter_list  */
  YYSYMBOL_parameter_declaration = 135,    /* parameter_declaration  */
  YYSYMBOL_identifier_list = 136,          /* identifier_list  */
  YYSYMBOL_type_name = 137,                /* type_name  */
  YYSYMBOL_abstract_declarator = 138,      /* abstract_declarator  */
  YYSYMBOL_direct_abstract_declarator = 139, /* direct_abstract_declarator  */
  YYSYMBOL_initializer = 140,              /* initializer  */
  YYSYMBOL_initializer_list = 141,         /* initializer_list  */
  YYSYMBOL_labeled_statement = 142,        /* labeled_statement  */
  YYSYMBOL_declaration_list = 143,         /* declaration_list  */
  YYSYMBOL_expression_statement = 144      /* expression_statement  */
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
#define YYLAST   1168

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  82
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  63
/* YYNRULES -- Number of rules.  */
#define YYNRULES  208
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  359

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   312


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
       2,     2,     2,    80,     2,     2,     2,    78,    71,     2,
      58,    59,    76,    74,    65,    75,    81,    77,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    68,    64,
      72,    66,    73,    67,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    60,     2,    61,    70,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    62,    69,    63,    79,     2,     2,     2,
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
      55,    56,    57
};

#if YYDEBUG
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,    79,    79,    82,    83,    87,    88,    92,    93,    94,
      95,    99,   100,   101,   102,   103,   104,   108,   109,   111,
     113,   114,   115,   116,   117,   118,   123,   124,   129,   130,
     131,   132,   133,   134,   135,   139,   140,   141,   142,   146,
     147,   151,   152,   153,   154,   155,   156,   160,   161,   162,
     163,   167,   168,   172,   173,   174,   175,   176,   177,   178,
     179,   180,   181,   182,   183,   188,   189,   193,   194,   198,
     199,   203,   204,   208,   209,   213,   214,   218,   219,   220,
     224,   225,   226,   227,   228,   232,   233,   234,   238,   239,
     240,   244,   245,   246,   247,   251,   252,   256,   257,   258,
     259,   260,   261,   262,   263,   264,   265,   266,   270,   271,
     272,   273,   274,   275,   276,   277,   281,   282,   286,   287,
     288,   289,   290,   291,   296,   297,   298,   302,   303,   304,
     305,   310,   314,   315,   319,   320,   324,   325,   329,   330,
     331,   332,   333,   337,   338,   339,   343,   344,   348,   349,
     353,   357,   358,   359,   360,   364,   365,   369,   370,   371,
     375,   376,   377,   381,   382,   386,   387,   391,   392,   396,
     397,   398,   399,   403,   404,   408,   413,   414,   418,   419,
     420,   424,   425,   430,   431,   435,   436,   437,   441,   442,
     443,   444,   445,   446,   447,   448,   449,   453,   454,   455,
     459,   460,   466,   467,   468,   474,   475,   481,   482
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
  "FLOAT_CONST", "STRING_LITERAL", "IDENTIFIER", "CHAR_LITERAL", "SIZEOF",
  "PTR_OP", "INC_OP", "DEC_OP", "LEFT_OP", "RIGHT_OP", "LE_OP", "GE_OP",
  "EQ_OP", "NE_OP", "AND_OP", "OR_OP", "MUL_ASSIGN", "DIV_ASSIGN",
  "MOD_ASSIGN", "ADD_ASSIGN", "SUB_ASSIGN", "LEFT_ASSIGN", "RIGHT_ASSIGN",
  "AND_ASSIGN", "XOR_ASSIGN", "OR_ASSIGN", "TYPEDEF", "EXTERN", "STATIC",
  "AUTO", "REGISTER", "CHAR", "INT", "SIGNED", "UNSIGNED", "FLOAT",
  "DOUBLE", "CONST", "VOLATILE", "VOID", "STRUCT", "UNION", "ENUM", "CASE",
  "DEFAULT", "IF", "ELSE", "SWITCH", "WHILE", "DO", "FOR", "CONTINUE",
  "BREAK", "RETURN", "'('", "')'", "'['", "']'", "'{'", "'}'", "';'",
  "','", "'='", "'?'", "':'", "'|'", "'^'", "'&'", "'<'", "'>'", "'+'",
  "'-'", "'*'", "'/'", "'%'", "'~'", "'!'", "'.'", "$accept", "ROOT",
  "translation_unit", "external_declaration", "function_definition",
  "declaration_specifiers", "type_specifier", "declarator",
  "direct_declarator", "compound_statement", "statement_list", "statement",
  "jump_statement", "expression", "assignment_expression",
  "conditional_expression", "logical_or_expression",
  "logical_and_expression", "inclusive_or_expression",
  "exclusive_or_expression", "and_expression", "equality_expression",
  "relational_expression", "shift_expression", "additive_expression",
  "multiplicative_expression", "cast_expression", "unary_expression",
  "postfix_expression", "argument_expression_list", "primary_expression",
  "selection_statement", "iteration_statement", "constant_expression",
  "declaration", "init_declarator_list", "init_declarator",
  "storage_class_specifier", "struct_or_union_specifier",
  "struct_or_union", "struct_declaration_list", "struct_declaration",
  "specifier_qualifier_list", "struct_declarator_list",
  "struct_declarator", "enum_specifier", "enumerator_list", "enumerator",
  "type_qualifier", "pointer", "type_qualifier_list",
  "parameter_type_list", "parameter_list", "parameter_declaration",
  "identifier_list", "type_name", "abstract_declarator",
  "direct_abstract_declarator", "initializer", "initializer_list",
  "labeled_statement", "declaration_list", "expression_statement", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-212)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-1)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     899,  -212,  -212,  -212,  -212,  -212,  -212,  -212,  -212,  -212,
    -212,  -212,  -212,  -212,  -212,  -212,  -212,  -212,    21,    68,
      51,     9,   899,  -212,  -212,    18,   928,  1060,    87,  -212,
     928,  -212,    23,  -212,   928,    63,   -37,    41,   -22,  -212,
    -212,    51,  -212,  -212,  -212,  1023,    60,  -212,  -212,   287,
      18,  -212,  -212,  1060,   946,   589,  -212,     2,   958,  -212,
      87,    41,    45,   140,  -212,  -212,  -212,  -212,   613,  -212,
    1060,  -212,    68,  -212,  -212,  -212,     7,  -212,   207,   770,
     770,   848,    64,   111,   118,   125,   507,   175,   190,   197,
     627,   569,  -212,  -212,   770,   770,   770,   770,   770,   770,
    -212,   411,  -212,  -212,   185,  -212,  -212,    -4,   230,   198,
     200,   204,   236,    24,   245,   199,   158,  -212,   860,    10,
    -212,  -212,  -212,  -212,   349,  -212,   222,  -212,  -212,  -212,
    -212,    42,   237,   241,  -212,    48,  -212,  -212,  -212,  -212,
     246,   958,   958,   398,  -212,    65,   958,   143,   848,  -212,
      41,   613,  -212,  -212,  -212,  -212,   507,   569,  -212,   848,
    -212,  -212,   234,   507,   848,   848,   848,   259,   651,  -212,
    -212,  -212,   215,    70,    43,   253,  -212,  -212,  -212,  -212,
    -212,  -212,  -212,  -212,  -212,   848,   848,   848,   848,   848,
     848,   848,   848,   848,   848,   848,   848,   848,   848,   848,
     848,   848,   848,   848,   848,   848,   848,   848,   848,   848,
     848,   848,   848,   848,   848,   848,   307,  -212,  -212,   713,
     848,   309,  -212,   445,   833,   733,  -212,    46,  -212,   163,
    -212,   928,  -212,   310,  -212,  1105,  -212,  -212,  -212,   848,
     269,   220,  -212,  -212,  -212,  -212,  -212,  -212,   178,  -212,
     288,   507,  -212,    78,   119,   120,   290,   651,  -212,  -212,
     976,   184,  -212,   848,  -212,   230,    81,   198,   200,   204,
     236,    24,    24,   245,   245,   245,   245,   199,   199,   158,
     158,  -212,  -212,  -212,  -212,  -212,  -212,  -212,  -212,  -212,
    -212,  -212,  -212,  -212,  -212,  -212,  -212,  -212,   121,    47,
    -212,  -212,  -212,   305,   306,  -212,   285,   163,  1093,   744,
    -212,  -212,  -212,  -212,   848,  -212,    65,  -212,   473,  -212,
    -212,   507,   507,   507,   848,   758,  -212,   848,  -212,   848,
    -212,  -212,  -212,  -212,  -212,   311,  -212,   308,  -212,  -212,
    -212,  -212,   318,  -212,  -212,   157,   507,   161,  -212,  -212,
    -212,  -212,   507,   312,  -212,   507,  -212,  -212,  -212
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,    28,   138,   139,   140,   141,   142,    18,    19,    22,
      23,    20,    21,   167,   168,    17,   146,   147,     0,     0,
     169,     0,     2,     3,     5,     0,    13,     0,    27,     6,
      11,    24,     0,    25,    15,     0,   162,     0,     0,   173,
     171,   170,     1,     4,   132,   136,     0,   134,    14,     0,
       0,    10,   205,     0,     0,     0,    12,   145,     0,    16,
      26,     0,   165,     0,   163,    29,   174,   172,     0,     8,
       0,   133,     0,   119,   120,   121,   118,   122,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    35,   207,     0,     0,     0,     0,     0,     0,
      42,     0,    39,    46,     0,    51,    53,    65,    67,    69,
      71,    73,    75,    77,    80,    85,    88,    91,    95,    97,
     108,    44,    45,    41,     0,    43,   136,     9,   206,   181,
      34,   180,     0,   175,   176,     0,   118,    31,   131,    95,
       0,     0,   152,     0,   148,     0,   154,     0,     0,   160,
       0,     0,   197,   137,     7,   135,     0,     0,   106,     0,
      98,    99,     0,     0,     0,     0,     0,     0,     0,    47,
      48,    49,     0,     0,   183,     0,   100,   102,   103,   101,
     104,   105,    36,    40,   208,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   114,   115,     0,
       0,     0,    37,     0,     0,     0,   178,   185,   179,   186,
      32,     0,    33,     0,    30,     0,   151,   144,   149,     0,
     157,     0,   155,   153,   161,   166,   164,   200,     0,   202,
       0,     0,   204,     0,     0,     0,     0,     0,    50,   123,
       0,   185,   184,     0,    52,    68,     0,    70,    72,    74,
      76,    78,    79,    83,    84,    81,    82,    86,    87,    89,
      90,    92,    93,    94,    55,    56,    57,    58,    59,    60,
      61,    62,    63,    64,    54,   113,   110,   116,     0,     0,
     112,    38,   193,     0,     0,   189,     0,   187,     0,     0,
     177,   182,   143,   158,     0,   150,     0,   198,     0,   107,
     203,     0,     0,     0,     0,     0,    96,     0,   111,     0,
     109,   194,   188,   190,   195,     0,   191,     0,   159,   156,
     199,   201,   124,   126,   127,     0,     0,     0,    66,   117,
     196,   192,     0,     0,   129,     0,   125,   128,   130
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -212,  -212,  -212,   350,  -212,     0,   -26,   -17,   -25,   192,
     247,   -83,  -212,   -78,   -15,   -50,  -212,   187,   186,   188,
     209,   217,   108,    33,   106,   109,  -158,   -38,  -212,  -212,
    -212,  -212,  -212,   -58,    14,  -212,   303,  -212,  -212,  -212,
     268,  -136,   -80,  -212,    62,  -212,   365,   260,    31,     8,
    -212,   -53,  -212,   196,  -212,   273,   -96,  -211,  -147,  -212,
    -212,    85,  -162
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
       0,    21,    22,    23,    24,    50,    26,    27,    28,   100,
     101,   102,   103,   104,   105,   106,   107,   108,   109,   110,
     111,   112,   113,   114,   115,   116,   117,   118,   119,   298,
     120,   121,   122,   140,    52,    46,    47,    30,    31,    32,
     143,   144,   145,   241,   242,    33,    63,    64,    34,    35,
      41,   303,   133,   134,   135,   175,   304,   229,   153,   248,
     123,    53,   125
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      25,   132,    38,   167,   247,   138,   257,   238,    45,    42,
      60,   174,   172,   173,    29,   186,   307,   139,   183,   216,
     217,   218,    25,   162,     1,    61,    48,    36,    40,    57,
      56,   138,   142,   126,    59,   228,    29,    65,   194,   195,
     158,   160,   161,   139,   281,   282,   283,    62,     1,    67,
     307,    39,     1,   152,   131,   126,   176,   177,   178,   179,
     180,   181,   236,   187,   141,   142,   243,   128,   219,     1,
     220,     1,    66,   249,     1,   156,    19,   174,   262,   173,
     252,   173,    44,    37,   128,    58,   253,   254,   255,   146,
     245,   221,    13,    14,    20,   325,   196,   197,   138,   238,
     224,   260,   225,   225,   224,   326,   225,   232,   330,   266,
     139,   148,   185,   233,   226,   142,   142,   142,    20,    20,
     142,    19,   146,    19,    71,    72,    19,    20,   240,   259,
      70,   142,   163,   239,   124,   185,   152,   321,   128,   227,
     183,    20,   299,   185,    20,    54,   185,    55,   139,   327,
     139,   139,   139,   139,   139,   139,   139,   139,   139,   139,
     139,   139,   139,   139,   139,   139,   139,   306,   320,   164,
     264,   341,   146,   146,   146,   138,   165,   146,   322,   323,
     328,   313,   261,   166,   185,   185,   329,   139,   146,   138,
     284,   285,   286,   287,   288,   289,   290,   291,   292,   293,
     294,   139,    60,   149,   297,   150,   244,    38,   150,   142,
      73,    74,    75,   136,    77,    78,   353,    79,    80,    51,
     355,   308,   185,   309,   131,   139,   185,   273,   274,   275,
     276,   131,   227,   168,   202,   203,   204,    69,   342,   343,
     344,   317,   260,   318,   225,   127,   345,   347,   188,   184,
     185,   337,   192,   193,   169,   335,   338,   198,   199,   138,
     131,   170,   154,   354,   138,   157,   146,   189,   261,   356,
     190,   139,   358,   200,   201,   191,   139,   348,    94,   258,
     185,    95,    96,    97,   315,   316,    98,    99,    68,   139,
      73,    74,    75,    76,    77,    78,   230,    79,    80,   240,
     271,   272,   251,   152,   277,   278,   231,   234,   131,   279,
     280,   256,   263,   295,   349,   300,   311,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    81,    82,    83,   314,    84,    85,
      86,    87,    88,    89,    90,    91,   333,   319,   324,    49,
      92,    93,    73,    74,    75,    76,    77,    78,    94,    79,
      80,    95,    96,    97,   331,   332,    98,    99,   352,   351,
     350,   223,    43,   265,   267,   155,   357,   268,   339,     2,
       3,     4,     5,     6,     7,     8,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    18,    81,    82,    83,   269,
      84,    85,    86,    87,    88,    89,    90,    91,   270,   235,
     246,    49,   222,    93,    73,    74,    75,    76,    77,    78,
      94,    79,    80,    95,    96,    97,   147,   310,    98,    99,
     250,     0,     0,     7,     8,     9,    10,    11,    12,    13,
      14,    15,    16,    17,    18,     0,     0,     0,    73,    74,
      75,    76,    77,    78,     0,    79,    80,     0,    81,    82,
      83,   237,    84,    85,    86,    87,    88,    89,    90,    91,
       0,     0,     0,    49,   182,    93,    73,    74,    75,   136,
      77,    78,    94,    79,    80,    95,    96,    97,     0,     0,
      98,    99,    81,    82,    83,     0,    84,    85,    86,    87,
      88,    89,    90,    91,     0,     0,     0,    49,   301,    93,
      73,    74,    75,    76,    77,    78,    94,    79,    80,    95,
      96,    97,     0,     0,    98,    99,     0,     0,     0,     0,
       0,    91,     0,     0,     0,   151,   340,     0,     0,     0,
       0,     0,     0,     0,    94,     0,     0,    95,    96,    97,
       0,     0,    98,    99,    81,    82,    83,     0,    84,    85,
      86,    87,    88,    89,    90,    91,     0,     0,     0,    49,
       0,    93,    73,    74,    75,   136,    77,    78,    94,    79,
      80,    95,    96,    97,     0,     0,    98,    99,     0,     0,
       0,     0,    73,    74,    75,   136,    77,    78,     0,    79,
      80,     0,     0,     0,     7,     8,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    18,    73,    74,    75,   136,
      77,    78,     0,    79,    80,     0,     0,    91,     0,     0,
      73,    74,    75,   136,    77,    78,     0,    79,    80,     0,
      94,     0,     0,    95,    96,    97,     0,    91,    98,    99,
     137,     0,     0,     0,    73,    74,    75,   136,    77,    78,
      94,    79,    80,    95,    96,    97,     0,     0,    98,    99,
       0,    91,     0,     0,     0,   151,     0,     0,     0,     0,
       0,     0,     0,     0,    94,    91,     0,    95,    96,    97,
       0,   171,    98,    99,     0,     0,     0,     0,    94,     0,
       0,    95,    96,    97,     0,     0,    98,    99,     0,    91,
       0,     0,     0,     0,     0,    93,    73,    74,    75,   136,
      77,    78,    94,    79,    80,    95,    96,    97,     0,     0,
      98,    99,     0,     0,     0,     0,    73,    74,    75,   136,
      77,    78,     0,    79,    80,     0,     0,    73,    74,    75,
     136,    77,    78,     0,    79,    80,     0,     0,     0,     0,
       0,    73,    74,    75,   136,    77,    78,     0,    79,    80,
       0,    91,   296,    73,    74,    75,   136,    77,    78,     0,
      79,    80,     0,     0,    94,     0,     0,    95,    96,    97,
       0,    91,    98,    99,   305,     0,     0,     0,     0,     0,
       0,     0,    91,     0,    94,   336,     0,    95,    96,    97,
       0,     0,    98,    99,     0,    94,    91,   346,    95,    96,
      97,     0,     0,    98,    99,     0,     0,     0,   159,    94,
       0,     0,    95,    96,    97,     0,     0,    98,    99,     1,
       0,    94,     0,     0,    95,    96,    97,     0,     0,    98,
      99,    73,    74,    75,   136,    77,    78,     0,    79,    80,
       0,     0,     0,     2,     3,     4,     5,     6,     7,     8,
       9,    10,    11,    12,    13,    14,    15,    16,    17,    18,
     205,   206,   207,   208,   209,   210,   211,   212,   213,   214,
       0,   224,   302,   225,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     1,    91,     0,     0,    20,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    94,
       0,     0,    95,    96,    97,     0,   215,    98,    99,     2,
       3,     4,     5,     6,     7,     8,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    18,     0,     0,     0,     0,
       0,     0,   129,     0,     0,     0,     0,    19,     2,     3,
       4,     5,     6,     7,     8,     9,    10,    11,    12,    13,
      14,    15,    16,    17,    18,    20,     2,     3,     4,     5,
       6,     7,     8,     9,    10,    11,    12,    13,    14,    15,
      16,    17,    18,     7,     8,     9,    10,    11,    12,    13,
      14,    15,    16,    17,    18,   130,     2,     3,     4,     5,
       6,     7,     8,     9,    10,    11,    12,    13,    14,    15,
      16,    17,    18,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   260,   302,   225,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    20,     2,     3,     4,     5,     6,     7,     8,
       9,    10,    11,    12,    13,    14,    15,    16,    17,    18,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    49,     0,     0,     0,    68,
       2,     3,     4,     5,     6,     7,     8,     9,    10,    11,
      12,    13,    14,    15,    16,    17,    18,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    49,     2,     3,     4,     5,     6,     7,     8,
       9,    10,    11,    12,    13,    14,    15,    16,    17,    18,
       7,     8,     9,    10,    11,    12,    13,    14,    15,    16,
      17,    18,   334,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   312
};

static const yytype_int16 yycheck[] =
{
       0,    54,    19,    86,   151,    55,   168,   143,    25,     0,
      35,    91,    90,    91,     0,    19,   227,    55,   101,     9,
      10,    11,    22,    81,     6,    62,    26,     6,    20,     6,
      30,    81,    58,    50,    34,   131,    22,    59,    14,    15,
      78,    79,    80,    81,   202,   203,   204,     6,     6,    41,
     261,    20,     6,    68,    54,    72,    94,    95,    96,    97,
      98,    99,   142,    67,    62,    91,   146,    53,    58,     6,
      60,     6,    41,   156,     6,    68,    58,   157,   174,   157,
     163,   159,    64,    62,    70,    62,   164,   165,   166,    58,
     148,    81,    41,    42,    76,   257,    72,    73,   148,   235,
      58,    58,    60,    60,    58,   263,    60,    59,    61,   187,
     148,    66,    65,    65,   131,   141,   142,   143,    76,    76,
     146,    58,    91,    58,    64,    65,    58,    76,   145,    59,
      45,   157,    68,    68,    49,    65,   151,    59,   124,   131,
     223,    76,   220,    65,    76,    58,    65,    60,   186,    68,
     188,   189,   190,   191,   192,   193,   194,   195,   196,   197,
     198,   199,   200,   201,   202,   203,   204,   225,   251,    58,
     185,   318,   141,   142,   143,   225,    58,   146,    59,    59,
      59,   239,   174,    58,    65,    65,    65,   225,   157,   239,
     205,   206,   207,   208,   209,   210,   211,   212,   213,   214,
     215,   239,   227,    63,   219,    65,    63,   224,    65,   235,
       3,     4,     5,     6,     7,     8,    59,    10,    11,    27,
      59,    58,    65,    60,   224,   263,    65,   194,   195,   196,
     197,   231,   224,    58,    76,    77,    78,    45,   321,   322,
     323,    63,    58,    65,    60,    53,   324,   325,    18,    64,
      65,   309,    16,    17,    64,   308,   314,    12,    13,   309,
     260,    64,    70,   346,   314,    58,   235,    69,   260,   352,
      70,   309,   355,    74,    75,    71,   314,   327,    71,    64,
      65,    74,    75,    76,    64,    65,    79,    80,    66,   327,
       3,     4,     5,     6,     7,     8,    59,    10,    11,   316,
     192,   193,    68,   318,   198,   199,    65,    61,   308,   200,
     201,    52,    59,     6,   329,     6,     6,    30,    31,    32,
      33,    34,    35,    36,    37,    38,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    48,    49,    68,    51,    52,
      53,    54,    55,    56,    57,    58,    61,    59,    58,    62,
      63,    64,     3,     4,     5,     6,     7,     8,    71,    10,
      11,    74,    75,    76,    59,    59,    79,    80,    50,    61,
      59,   124,    22,   186,   188,    72,    64,   189,   316,    30,
      31,    32,    33,    34,    35,    36,    37,    38,    39,    40,
      41,    42,    43,    44,    45,    46,    47,    48,    49,   190,
      51,    52,    53,    54,    55,    56,    57,    58,   191,   141,
     150,    62,    63,    64,     3,     4,     5,     6,     7,     8,
      71,    10,    11,    74,    75,    76,    61,   231,    79,    80,
     157,    -1,    -1,    35,    36,    37,    38,    39,    40,    41,
      42,    43,    44,    45,    46,    -1,    -1,    -1,     3,     4,
       5,     6,     7,     8,    -1,    10,    11,    -1,    47,    48,
      49,    63,    51,    52,    53,    54,    55,    56,    57,    58,
      -1,    -1,    -1,    62,    63,    64,     3,     4,     5,     6,
       7,     8,    71,    10,    11,    74,    75,    76,    -1,    -1,
      79,    80,    47,    48,    49,    -1,    51,    52,    53,    54,
      55,    56,    57,    58,    -1,    -1,    -1,    62,    63,    64,
       3,     4,     5,     6,     7,     8,    71,    10,    11,    74,
      75,    76,    -1,    -1,    79,    80,    -1,    -1,    -1,    -1,
      -1,    58,    -1,    -1,    -1,    62,    63,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    71,    -1,    -1,    74,    75,    76,
      -1,    -1,    79,    80,    47,    48,    49,    -1,    51,    52,
      53,    54,    55,    56,    57,    58,    -1,    -1,    -1,    62,
      -1,    64,     3,     4,     5,     6,     7,     8,    71,    10,
      11,    74,    75,    76,    -1,    -1,    79,    80,    -1,    -1,
      -1,    -1,     3,     4,     5,     6,     7,     8,    -1,    10,
      11,    -1,    -1,    -1,    35,    36,    37,    38,    39,    40,
      41,    42,    43,    44,    45,    46,     3,     4,     5,     6,
       7,     8,    -1,    10,    11,    -1,    -1,    58,    -1,    -1,
       3,     4,     5,     6,     7,     8,    -1,    10,    11,    -1,
      71,    -1,    -1,    74,    75,    76,    -1,    58,    79,    80,
      61,    -1,    -1,    -1,     3,     4,     5,     6,     7,     8,
      71,    10,    11,    74,    75,    76,    -1,    -1,    79,    80,
      -1,    58,    -1,    -1,    -1,    62,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    71,    58,    -1,    74,    75,    76,
      -1,    64,    79,    80,    -1,    -1,    -1,    -1,    71,    -1,
      -1,    74,    75,    76,    -1,    -1,    79,    80,    -1,    58,
      -1,    -1,    -1,    -1,    -1,    64,     3,     4,     5,     6,
       7,     8,    71,    10,    11,    74,    75,    76,    -1,    -1,
      79,    80,    -1,    -1,    -1,    -1,     3,     4,     5,     6,
       7,     8,    -1,    10,    11,    -1,    -1,     3,     4,     5,
       6,     7,     8,    -1,    10,    11,    -1,    -1,    -1,    -1,
      -1,     3,     4,     5,     6,     7,     8,    -1,    10,    11,
      -1,    58,    59,     3,     4,     5,     6,     7,     8,    -1,
      10,    11,    -1,    -1,    71,    -1,    -1,    74,    75,    76,
      -1,    58,    79,    80,    61,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    58,    -1,    71,    61,    -1,    74,    75,    76,
      -1,    -1,    79,    80,    -1,    71,    58,    59,    74,    75,
      76,    -1,    -1,    79,    80,    -1,    -1,    -1,    58,    71,
      -1,    -1,    74,    75,    76,    -1,    -1,    79,    80,     6,
      -1,    71,    -1,    -1,    74,    75,    76,    -1,    -1,    79,
      80,     3,     4,     5,     6,     7,     8,    -1,    10,    11,
      -1,    -1,    -1,    30,    31,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      -1,    58,    59,    60,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,     6,    58,    -1,    -1,    76,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    71,
      -1,    -1,    74,    75,    76,    -1,    66,    79,    80,    30,
      31,    32,    33,    34,    35,    36,    37,    38,    39,    40,
      41,    42,    43,    44,    45,    46,    -1,    -1,    -1,    -1,
      -1,    -1,     6,    -1,    -1,    -1,    -1,    58,    30,    31,
      32,    33,    34,    35,    36,    37,    38,    39,    40,    41,
      42,    43,    44,    45,    46,    76,    30,    31,    32,    33,
      34,    35,    36,    37,    38,    39,    40,    41,    42,    43,
      44,    45,    46,    35,    36,    37,    38,    39,    40,    41,
      42,    43,    44,    45,    46,    59,    30,    31,    32,    33,
      34,    35,    36,    37,    38,    39,    40,    41,    42,    43,
      44,    45,    46,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    58,    59,    60,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    76,    30,    31,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    62,    -1,    -1,    -1,    66,
      30,    31,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    44,    45,    46,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    62,    30,    31,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    59,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    63
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     6,    30,    31,    32,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    43,    44,    45,    46,    58,
      76,    83,    84,    85,    86,    87,    88,    89,    90,   116,
     119,   120,   121,   127,   130,   131,     6,    62,    89,   130,
     131,   132,     0,    85,    64,    89,   117,   118,    87,    62,
      87,    91,   116,   143,    58,    60,    87,     6,    62,    87,
      90,    62,     6,   128,   129,    59,   130,   131,    66,    91,
     143,    64,    65,     3,     4,     5,     6,     7,     8,    10,
      11,    47,    48,    49,    51,    52,    53,    54,    55,    56,
      57,    58,    63,    64,    71,    74,    75,    76,    79,    80,
      91,    92,    93,    94,    95,    96,    97,    98,    99,   100,
     101,   102,   103,   104,   105,   106,   107,   108,   109,   110,
     112,   113,   114,   142,   143,   144,    89,    91,   116,     6,
      59,    87,   133,   134,   135,   136,     6,    61,    97,   109,
     115,    62,    88,   122,   123,   124,   130,   128,    66,    63,
      65,    62,    96,   140,    91,   118,    68,    58,   109,    58,
     109,   109,   115,    68,    58,    58,    58,    93,    58,    64,
      64,    64,    95,    95,   124,   137,   109,   109,   109,   109,
     109,   109,    63,    93,    64,    65,    19,    67,    18,    69,
      70,    71,    16,    17,    14,    15,    72,    73,    12,    13,
      74,    75,    76,    77,    78,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    66,     9,    10,    11,    58,
      60,    81,    63,    92,    58,    60,    89,   131,   138,   139,
      59,    65,    59,    65,    61,   122,   124,    63,   123,    68,
      89,   125,   126,   124,    63,   115,   129,   140,   141,    93,
     137,    68,    93,    95,    95,    95,    52,   144,    64,    59,
      58,   131,   138,    59,    96,    99,    95,   100,   101,   102,
     103,   104,   104,   105,   105,   105,   105,   106,   106,   107,
     107,   108,   108,   108,    96,    96,    96,    96,    96,    96,
      96,    96,    96,    96,    96,     6,    59,    96,   111,    95,
       6,    63,    59,   133,   138,    61,   115,   139,    58,    60,
     135,     6,    63,   115,    68,    64,    65,    63,    65,    59,
      93,    59,    59,    59,    58,   144,   108,    68,    59,    65,
      61,    59,    59,    61,    59,   133,    61,   115,   115,   126,
      63,   140,    93,    93,    93,    95,    59,    95,    97,    96,
      59,    61,    50,    59,    93,    59,    93,    64,    93
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_uint8 yyr1[] =
{
       0,    82,    83,    84,    84,    85,    85,    86,    86,    86,
      86,    87,    87,    87,    87,    87,    87,    88,    88,    88,
      88,    88,    88,    88,    88,    88,    89,    89,    90,    90,
      90,    90,    90,    90,    90,    91,    91,    91,    91,    92,
      92,    93,    93,    93,    93,    93,    93,    94,    94,    94,
      94,    95,    95,    96,    96,    96,    96,    96,    96,    96,
      96,    96,    96,    96,    96,    97,    97,    98,    98,    99,
      99,   100,   100,   101,   101,   102,   102,   103,   103,   103,
     104,   104,   104,   104,   104,   105,   105,   105,   106,   106,
     106,   107,   107,   107,   107,   108,   108,   109,   109,   109,
     109,   109,   109,   109,   109,   109,   109,   109,   110,   110,
     110,   110,   110,   110,   110,   110,   111,   111,   112,   112,
     112,   112,   112,   112,   113,   113,   113,   114,   114,   114,
     114,   115,   116,   116,   117,   117,   118,   118,   119,   119,
     119,   119,   119,   120,   120,   120,   121,   121,   122,   122,
     123,   124,   124,   124,   124,   125,   125,   126,   126,   126,
     127,   127,   127,   128,   128,   129,   129,   130,   130,   131,
     131,   131,   131,   132,   132,   133,   134,   134,   135,   135,
     135,   136,   136,   137,   137,   138,   138,   138,   139,   139,
     139,   139,   139,   139,   139,   139,   139,   140,   140,   140,
     141,   141,   142,   142,   142,   143,   143,   144,   144
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
       2,     2,     2,     2,     2,     2,     2,     4,     1,     4,
       3,     4,     3,     3,     2,     2,     1,     3,     1,     1,
       1,     1,     1,     3,     5,     7,     5,     5,     7,     6,
       7,     1,     2,     3,     1,     3,     1,     3,     1,     1,
       1,     1,     1,     5,     4,     2,     1,     1,     1,     2,
       3,     2,     1,     2,     1,     1,     3,     1,     2,     3,
       4,     5,     2,     1,     3,     1,     3,     1,     1,     1,
       2,     2,     3,     1,     2,     1,     1,     3,     2,     2,
       1,     1,     3,     1,     2,     1,     1,     2,     3,     2,
       3,     3,     4,     2,     3,     3,     4,     1,     3,     4,
       1,     3,     3,     4,     3,     1,     2,     1,     2
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
#line 79 "src/parser.y"
                        { g_root = (yyvsp[0].Base); }
#line 1632 "src/parser.tab.cpp"
    break;

  case 3: /* translation_unit: external_declaration  */
#line 82 "src/parser.y"
                                {(yyval.Base) = (yyvsp[0].Base);}
#line 1638 "src/parser.tab.cpp"
    break;

  case 4: /* translation_unit: translation_unit external_declaration  */
#line 83 "src/parser.y"
                                            {(yyval.Base) = new TranslationUnit((yyvsp[-1].Base),(yyvsp[0].Base));}
#line 1644 "src/parser.tab.cpp"
    break;

  case 5: /* external_declaration: function_definition  */
#line 87 "src/parser.y"
                              {(yyval.Base) = (yyvsp[0].Base);}
#line 1650 "src/parser.tab.cpp"
    break;

  case 6: /* external_declaration: declaration  */
#line 88 "src/parser.y"
                      {(yyval.Base) = (yyvsp[0].Base);}
#line 1656 "src/parser.tab.cpp"
    break;

  case 7: /* function_definition: declaration_specifiers declarator declaration_list compound_statement  */
#line 92 "src/parser.y"
                                                                            {std::cerr << "Not used ???" << std::endl;}
#line 1662 "src/parser.tab.cpp"
    break;

  case 8: /* function_definition: declaration_specifiers declarator compound_statement  */
#line 93 "src/parser.y"
                                                           {(yyval.Base) = new FunctionDefinition((yyvsp[-2].Base), (yyvsp[-1].Base), (yyvsp[0].Base));}
#line 1668 "src/parser.tab.cpp"
    break;

  case 9: /* function_definition: declarator declaration_list compound_statement  */
#line 94 "src/parser.y"
                                                     {std::cerr << "Not used ???" << std::endl;}
#line 1674 "src/parser.tab.cpp"
    break;

  case 10: /* function_definition: declarator compound_statement  */
#line 95 "src/parser.y"
                                    {std::cerr << "Not used ???" << std::endl;}
#line 1680 "src/parser.tab.cpp"
    break;

  case 11: /* declaration_specifiers: storage_class_specifier  */
#line 99 "src/parser.y"
                              {std::cerr << "Not used ???" << std::endl;}
#line 1686 "src/parser.tab.cpp"
    break;

  case 12: /* declaration_specifiers: storage_class_specifier declaration_specifiers  */
#line 100 "src/parser.y"
                                                     {std::cerr << "Not used ???" << std::endl;}
#line 1692 "src/parser.tab.cpp"
    break;

  case 13: /* declaration_specifiers: type_specifier  */
#line 101 "src/parser.y"
                     {(yyval.Base) = (yyvsp[0].Base);}
#line 1698 "src/parser.tab.cpp"
    break;

  case 14: /* declaration_specifiers: type_specifier declaration_specifiers  */
#line 102 "src/parser.y"
                                            {std::cerr << "Not used ???" << std::endl;}
#line 1704 "src/parser.tab.cpp"
    break;

  case 15: /* declaration_specifiers: type_qualifier  */
#line 103 "src/parser.y"
                     {std::cerr << "Not used ???" << std::endl;}
#line 1710 "src/parser.tab.cpp"
    break;

  case 16: /* declaration_specifiers: type_qualifier declaration_specifiers  */
#line 104 "src/parser.y"
                                            {std::cerr << "Not used ???" << std::endl;}
#line 1716 "src/parser.tab.cpp"
    break;

  case 17: /* type_specifier: VOID  */
#line 108 "src/parser.y"
               {(yyval.Base) = new Type("void");}
#line 1722 "src/parser.tab.cpp"
    break;

  case 18: /* type_specifier: CHAR  */
#line 109 "src/parser.y"
               {(yyval.Base) = new Type("char");}
#line 1728 "src/parser.tab.cpp"
    break;

  case 19: /* type_specifier: INT  */
#line 111 "src/parser.y"
              {(yyval.Base) = new Type("int");}
#line 1734 "src/parser.tab.cpp"
    break;

  case 20: /* type_specifier: FLOAT  */
#line 113 "src/parser.y"
                {(yyval.Base) = new Type("float");}
#line 1740 "src/parser.tab.cpp"
    break;

  case 21: /* type_specifier: DOUBLE  */
#line 114 "src/parser.y"
                 {(yyval.Base) = new Type("double");}
#line 1746 "src/parser.tab.cpp"
    break;

  case 22: /* type_specifier: SIGNED  */
#line 115 "src/parser.y"
                  {}
#line 1752 "src/parser.tab.cpp"
    break;

  case 23: /* type_specifier: UNSIGNED  */
#line 116 "src/parser.y"
                   {(yyval.Base) = new Type("unsigned");}
#line 1758 "src/parser.tab.cpp"
    break;

  case 24: /* type_specifier: struct_or_union_specifier  */
#line 117 "src/parser.y"
                                    {std::cerr << "Not Implemented !!!" << std::endl;}
#line 1764 "src/parser.tab.cpp"
    break;

  case 25: /* type_specifier: enum_specifier  */
#line 118 "src/parser.y"
                         {(yyval.Base) = (yyvsp[0].Base);}
#line 1770 "src/parser.tab.cpp"
    break;

  case 26: /* declarator: pointer direct_declarator  */
#line 123 "src/parser.y"
                                    {(yyval.Base) = new PointerDeclarator((yyvsp[0].Base));}
#line 1776 "src/parser.tab.cpp"
    break;

  case 27: /* declarator: direct_declarator  */
#line 124 "src/parser.y"
                                {(yyval.Base) = (yyvsp[0].Base);}
#line 1782 "src/parser.tab.cpp"
    break;

  case 28: /* direct_declarator: IDENTIFIER  */
#line 129 "src/parser.y"
                 {(yyval.Base) = new FunctionName(*(yyvsp[0].string));}
#line 1788 "src/parser.tab.cpp"
    break;

  case 29: /* direct_declarator: '(' declarator ')'  */
#line 130 "src/parser.y"
                         {std::cerr << "Not Implemented !!!" << std::endl;}
#line 1794 "src/parser.tab.cpp"
    break;

  case 30: /* direct_declarator: direct_declarator '[' constant_expression ']'  */
#line 131 "src/parser.y"
                                                    {std::cerr << "Not Implemented !!!" << std::endl;}
#line 1800 "src/parser.tab.cpp"
    break;

  case 31: /* direct_declarator: direct_declarator '[' ']'  */
#line 132 "src/parser.y"
                                {std::cerr << "Not Implemented !!!" << std::endl;}
#line 1806 "src/parser.tab.cpp"
    break;

  case 32: /* direct_declarator: direct_declarator '(' parameter_type_list ')'  */
#line 133 "src/parser.y"
                                                    {(yyval.Base) = new FunctionDeclaratorPara((yyvsp[-3].Base), (yyvsp[-1].Base));}
#line 1812 "src/parser.tab.cpp"
    break;

  case 33: /* direct_declarator: direct_declarator '(' identifier_list ')'  */
#line 134 "src/parser.y"
                                                {std::cerr << "Not Implemented !!!" << std::endl;}
#line 1818 "src/parser.tab.cpp"
    break;

  case 34: /* direct_declarator: direct_declarator '(' ')'  */
#line 135 "src/parser.y"
                                {(yyval.Base) = (yyvsp[-2].Base);}
#line 1824 "src/parser.tab.cpp"
    break;

  case 35: /* compound_statement: '{' '}'  */
#line 139 "src/parser.y"
              {(yyval.Base) = new Empty();}
#line 1830 "src/parser.tab.cpp"
    break;

  case 36: /* compound_statement: '{' statement_list '}'  */
#line 140 "src/parser.y"
                             {(yyval.Base) = (yyvsp[-1].Base);}
#line 1836 "src/parser.tab.cpp"
    break;

  case 37: /* compound_statement: '{' declaration_list '}'  */
#line 141 "src/parser.y"
                               {(yyval.Base) = (yyvsp[-1].Base);}
#line 1842 "src/parser.tab.cpp"
    break;

  case 38: /* compound_statement: '{' declaration_list statement_list '}'  */
#line 142 "src/parser.y"
                                              {(yyval.Base) = new CompoundStatement((yyvsp[-2].Base),(yyvsp[-1].Base));}
#line 1848 "src/parser.tab.cpp"
    break;

  case 39: /* statement_list: statement  */
#line 146 "src/parser.y"
                {(yyval.Base) = (yyvsp[0].Base);}
#line 1854 "src/parser.tab.cpp"
    break;

  case 40: /* statement_list: statement_list statement  */
#line 147 "src/parser.y"
                               {(yyval.Base) = new StatementList((yyvsp[-1].Base),(yyvsp[0].Base));}
#line 1860 "src/parser.tab.cpp"
    break;

  case 41: /* statement: labeled_statement  */
#line 151 "src/parser.y"
                            {(yyval.Base) = (yyvsp[0].Base);}
#line 1866 "src/parser.tab.cpp"
    break;

  case 42: /* statement: compound_statement  */
#line 152 "src/parser.y"
                             {(yyval.Base) = (yyvsp[0].Base);}
#line 1872 "src/parser.tab.cpp"
    break;

  case 43: /* statement: expression_statement  */
#line 153 "src/parser.y"
                               {(yyval.Base) = (yyvsp[0].Base);}
#line 1878 "src/parser.tab.cpp"
    break;

  case 44: /* statement: selection_statement  */
#line 154 "src/parser.y"
                              {(yyval.Base) = (yyvsp[0].Base);}
#line 1884 "src/parser.tab.cpp"
    break;

  case 45: /* statement: iteration_statement  */
#line 155 "src/parser.y"
                              {(yyval.Base) = (yyvsp[0].Base);}
#line 1890 "src/parser.tab.cpp"
    break;

  case 46: /* statement: jump_statement  */
#line 156 "src/parser.y"
                         {(yyval.Base) = (yyvsp[0].Base);}
#line 1896 "src/parser.tab.cpp"
    break;

  case 47: /* jump_statement: CONTINUE ';'  */
#line 160 "src/parser.y"
                   {(yyval.Base) = new Continue();}
#line 1902 "src/parser.tab.cpp"
    break;

  case 48: /* jump_statement: BREAK ';'  */
#line 161 "src/parser.y"
                {(yyval.Base) = new Break();}
#line 1908 "src/parser.tab.cpp"
    break;

  case 49: /* jump_statement: RETURN ';'  */
#line 162 "src/parser.y"
                 {(yyval.Base) = new Return();}
#line 1914 "src/parser.tab.cpp"
    break;

  case 50: /* jump_statement: RETURN expression ';'  */
#line 163 "src/parser.y"
                            { (yyval.Base) = new ReturnExpr((yyvsp[-1].Base)); }
#line 1920 "src/parser.tab.cpp"
    break;

  case 51: /* expression: assignment_expression  */
#line 167 "src/parser.y"
                            { (yyval.Base) = (yyvsp[0].Base);}
#line 1926 "src/parser.tab.cpp"
    break;

  case 52: /* expression: expression ',' assignment_expression  */
#line 168 "src/parser.y"
                                           {std::cerr << "Not Used ???" << std::endl;}
#line 1932 "src/parser.tab.cpp"
    break;

  case 53: /* assignment_expression: conditional_expression  */
#line 172 "src/parser.y"
                                 {(yyval.Base) = (yyvsp[0].Base);}
#line 1938 "src/parser.tab.cpp"
    break;

  case 54: /* assignment_expression: unary_expression '=' assignment_expression  */
#line 173 "src/parser.y"
                                                     {(yyval.Base) = new BinaryAssign((yyvsp[-2].Base),(yyvsp[0].Base));}
#line 1944 "src/parser.tab.cpp"
    break;

  case 55: /* assignment_expression: unary_expression MUL_ASSIGN assignment_expression  */
#line 174 "src/parser.y"
                                                        {(yyval.Base) = new BinaryAssign((yyvsp[-2].Base), new BinaryMultiplication((yyvsp[-2].Base), (yyvsp[0].Base)));}
#line 1950 "src/parser.tab.cpp"
    break;

  case 56: /* assignment_expression: unary_expression DIV_ASSIGN assignment_expression  */
#line 175 "src/parser.y"
                                                        {(yyval.Base) = new BinaryAssign((yyvsp[-2].Base), new BinaryDivision((yyvsp[-2].Base), (yyvsp[0].Base)));}
#line 1956 "src/parser.tab.cpp"
    break;

  case 57: /* assignment_expression: unary_expression MOD_ASSIGN assignment_expression  */
#line 176 "src/parser.y"
                                                        {(yyval.Base) = new BinaryAssign((yyvsp[-2].Base), new BinaryModulus((yyvsp[-2].Base), (yyvsp[0].Base)));}
#line 1962 "src/parser.tab.cpp"
    break;

  case 58: /* assignment_expression: unary_expression ADD_ASSIGN assignment_expression  */
#line 177 "src/parser.y"
                                                        {(yyval.Base) = new BinaryAssign((yyvsp[-2].Base), new BinaryAddition((yyvsp[-2].Base), (yyvsp[0].Base)));}
#line 1968 "src/parser.tab.cpp"
    break;

  case 59: /* assignment_expression: unary_expression SUB_ASSIGN assignment_expression  */
#line 178 "src/parser.y"
                                                        {(yyval.Base) = new BinaryAssign((yyvsp[-2].Base), new BinarySubtraction((yyvsp[-2].Base), (yyvsp[0].Base)));}
#line 1974 "src/parser.tab.cpp"
    break;

  case 60: /* assignment_expression: unary_expression LEFT_ASSIGN assignment_expression  */
#line 179 "src/parser.y"
                                                         {(yyval.Base) = new BinaryAssign((yyvsp[-2].Base), new BinaryLeftShift((yyvsp[-2].Base), (yyvsp[0].Base)));}
#line 1980 "src/parser.tab.cpp"
    break;

  case 61: /* assignment_expression: unary_expression RIGHT_ASSIGN assignment_expression  */
#line 180 "src/parser.y"
                                                          {(yyval.Base) = new BinaryAssign((yyvsp[-2].Base), new BinaryRightShift((yyvsp[-2].Base), (yyvsp[0].Base)));}
#line 1986 "src/parser.tab.cpp"
    break;

  case 62: /* assignment_expression: unary_expression AND_ASSIGN assignment_expression  */
#line 181 "src/parser.y"
                                                        {(yyval.Base) = new BinaryAssign((yyvsp[-2].Base), new BinaryAND((yyvsp[-2].Base), (yyvsp[0].Base)));}
#line 1992 "src/parser.tab.cpp"
    break;

  case 63: /* assignment_expression: unary_expression XOR_ASSIGN assignment_expression  */
#line 182 "src/parser.y"
                                                        {(yyval.Base) = new BinaryAssign((yyvsp[-2].Base), new BinaryXOR((yyvsp[-2].Base), (yyvsp[0].Base)));}
#line 1998 "src/parser.tab.cpp"
    break;

  case 64: /* assignment_expression: unary_expression OR_ASSIGN assignment_expression  */
#line 183 "src/parser.y"
                                                       {(yyval.Base) = new BinaryAssign((yyvsp[-2].Base), new BinaryOR((yyvsp[-2].Base), (yyvsp[0].Base)));}
#line 2004 "src/parser.tab.cpp"
    break;

  case 65: /* conditional_expression: logical_or_expression  */
#line 188 "src/parser.y"
                            {(yyval.Base) = (yyvsp[0].Base); }
#line 2010 "src/parser.tab.cpp"
    break;

  case 66: /* conditional_expression: logical_or_expression '?' expression ':' conditional_expression  */
#line 189 "src/parser.y"
                                                                      {std::cerr << "Not Implemented !!!" << std::endl;}
#line 2016 "src/parser.tab.cpp"
    break;

  case 67: /* logical_or_expression: logical_and_expression  */
#line 193 "src/parser.y"
                             {(yyval.Base) = (yyvsp[0].Base); }
#line 2022 "src/parser.tab.cpp"
    break;

  case 68: /* logical_or_expression: logical_or_expression OR_OP logical_and_expression  */
#line 194 "src/parser.y"
                                                         {(yyval.Base) = new BinaryLogicOR((yyvsp[-2].Base), (yyvsp[0].Base));}
#line 2028 "src/parser.tab.cpp"
    break;

  case 69: /* logical_and_expression: inclusive_or_expression  */
#line 198 "src/parser.y"
                              { (yyval.Base) = (yyvsp[0].Base);}
#line 2034 "src/parser.tab.cpp"
    break;

  case 70: /* logical_and_expression: logical_and_expression AND_OP inclusive_or_expression  */
#line 199 "src/parser.y"
                                                            {(yyval.Base) = new BinaryLogicAND((yyvsp[-2].Base), (yyvsp[0].Base));}
#line 2040 "src/parser.tab.cpp"
    break;

  case 71: /* inclusive_or_expression: exclusive_or_expression  */
#line 203 "src/parser.y"
                              { (yyval.Base) = (yyvsp[0].Base);}
#line 2046 "src/parser.tab.cpp"
    break;

  case 72: /* inclusive_or_expression: inclusive_or_expression '|' exclusive_or_expression  */
#line 204 "src/parser.y"
                                                          {(yyval.Base) = new BinaryOR((yyvsp[-2].Base), (yyvsp[0].Base));}
#line 2052 "src/parser.tab.cpp"
    break;

  case 73: /* exclusive_or_expression: and_expression  */
#line 208 "src/parser.y"
                     {(yyval.Base) = (yyvsp[0].Base); }
#line 2058 "src/parser.tab.cpp"
    break;

  case 74: /* exclusive_or_expression: exclusive_or_expression '^' and_expression  */
#line 209 "src/parser.y"
                                                 {(yyval.Base) = new BinaryXOR((yyvsp[-2].Base), (yyvsp[0].Base));}
#line 2064 "src/parser.tab.cpp"
    break;

  case 75: /* and_expression: equality_expression  */
#line 213 "src/parser.y"
                          {(yyval.Base) = (yyvsp[0].Base); }
#line 2070 "src/parser.tab.cpp"
    break;

  case 76: /* and_expression: and_expression '&' equality_expression  */
#line 214 "src/parser.y"
                                             {(yyval.Base) = new BinaryAND((yyvsp[-2].Base), (yyvsp[0].Base));}
#line 2076 "src/parser.tab.cpp"
    break;

  case 77: /* equality_expression: relational_expression  */
#line 218 "src/parser.y"
                            {(yyval.Base) = (yyvsp[0].Base); }
#line 2082 "src/parser.tab.cpp"
    break;

  case 78: /* equality_expression: equality_expression EQ_OP relational_expression  */
#line 219 "src/parser.y"
                                                      {(yyval.Base) = new BinaryEqual((yyvsp[-2].Base), (yyvsp[0].Base));}
#line 2088 "src/parser.tab.cpp"
    break;

  case 79: /* equality_expression: equality_expression NE_OP relational_expression  */
#line 220 "src/parser.y"
                                                      { (yyval.Base) = new BinaryNotEqual((yyvsp[-2].Base), (yyvsp[0].Base));}
#line 2094 "src/parser.tab.cpp"
    break;

  case 80: /* relational_expression: shift_expression  */
#line 224 "src/parser.y"
                       { (yyval.Base) = (yyvsp[0].Base);}
#line 2100 "src/parser.tab.cpp"
    break;

  case 81: /* relational_expression: relational_expression '<' shift_expression  */
#line 225 "src/parser.y"
                                                 {(yyval.Base) = new BinaryLessThan((yyvsp[-2].Base), (yyvsp[0].Base));}
#line 2106 "src/parser.tab.cpp"
    break;

  case 82: /* relational_expression: relational_expression '>' shift_expression  */
#line 226 "src/parser.y"
                                                 {(yyval.Base) = new BinaryGreaterThan((yyvsp[-2].Base), (yyvsp[0].Base));}
#line 2112 "src/parser.tab.cpp"
    break;

  case 83: /* relational_expression: relational_expression LE_OP shift_expression  */
#line 227 "src/parser.y"
                                                   {(yyval.Base) = new BinaryLessThanEqual((yyvsp[-2].Base), (yyvsp[0].Base));}
#line 2118 "src/parser.tab.cpp"
    break;

  case 84: /* relational_expression: relational_expression GE_OP shift_expression  */
#line 228 "src/parser.y"
                                                   {(yyval.Base) = new BinaryGreaterThanEqual((yyvsp[-2].Base), (yyvsp[0].Base));}
#line 2124 "src/parser.tab.cpp"
    break;

  case 85: /* shift_expression: additive_expression  */
#line 232 "src/parser.y"
                          {(yyval.Base) = (yyvsp[0].Base); }
#line 2130 "src/parser.tab.cpp"
    break;

  case 86: /* shift_expression: shift_expression LEFT_OP additive_expression  */
#line 233 "src/parser.y"
                                                   {(yyval.Base) = new BinaryLeftShift((yyvsp[-2].Base), (yyvsp[0].Base));}
#line 2136 "src/parser.tab.cpp"
    break;

  case 87: /* shift_expression: shift_expression RIGHT_OP additive_expression  */
#line 234 "src/parser.y"
                                                    {(yyval.Base) = new BinaryRightShift((yyvsp[-2].Base), (yyvsp[0].Base));}
#line 2142 "src/parser.tab.cpp"
    break;

  case 88: /* additive_expression: multiplicative_expression  */
#line 238 "src/parser.y"
                                {(yyval.Base) = (yyvsp[0].Base); }
#line 2148 "src/parser.tab.cpp"
    break;

  case 89: /* additive_expression: additive_expression '+' multiplicative_expression  */
#line 239 "src/parser.y"
                                                        {(yyval.Base) = new BinaryAddition((yyvsp[-2].Base), (yyvsp[0].Base));}
#line 2154 "src/parser.tab.cpp"
    break;

  case 90: /* additive_expression: additive_expression '-' multiplicative_expression  */
#line 240 "src/parser.y"
                                                        {(yyval.Base) = new BinarySubtraction((yyvsp[-2].Base), (yyvsp[0].Base));}
#line 2160 "src/parser.tab.cpp"
    break;

  case 91: /* multiplicative_expression: cast_expression  */
#line 244 "src/parser.y"
                                        { (yyval.Base) = (yyvsp[0].Base);}
#line 2166 "src/parser.tab.cpp"
    break;

  case 92: /* multiplicative_expression: multiplicative_expression '*' cast_expression  */
#line 245 "src/parser.y"
                                                        {(yyval.Base) = new BinaryMultiplication((yyvsp[-2].Base), (yyvsp[0].Base));}
#line 2172 "src/parser.tab.cpp"
    break;

  case 93: /* multiplicative_expression: multiplicative_expression '/' cast_expression  */
#line 246 "src/parser.y"
                                                        {(yyval.Base) = new BinaryDivision((yyvsp[-2].Base), (yyvsp[0].Base));}
#line 2178 "src/parser.tab.cpp"
    break;

  case 94: /* multiplicative_expression: multiplicative_expression '%' cast_expression  */
#line 247 "src/parser.y"
                                                        {(yyval.Base) = new BinaryModulus((yyvsp[-2].Base), (yyvsp[0].Base));}
#line 2184 "src/parser.tab.cpp"
    break;

  case 95: /* cast_expression: unary_expression  */
#line 251 "src/parser.y"
                                { (yyval.Base) = (yyvsp[0].Base); }
#line 2190 "src/parser.tab.cpp"
    break;

  case 96: /* cast_expression: '(' type_name ')' cast_expression  */
#line 252 "src/parser.y"
                                            {std::cerr << "Not Used ???" << std::endl;}
#line 2196 "src/parser.tab.cpp"
    break;

  case 97: /* unary_expression: postfix_expression  */
#line 256 "src/parser.y"
                                {(yyval.Base) = (yyvsp[0].Base); }
#line 2202 "src/parser.tab.cpp"
    break;

  case 98: /* unary_expression: INC_OP unary_expression  */
#line 257 "src/parser.y"
                                  {(yyval.Base) = new UnaryInc((yyvsp[0].Base));}
#line 2208 "src/parser.tab.cpp"
    break;

  case 99: /* unary_expression: DEC_OP unary_expression  */
#line 258 "src/parser.y"
                                  {(yyval.Base) = new UnaryDec((yyvsp[0].Base));}
#line 2214 "src/parser.tab.cpp"
    break;

  case 100: /* unary_expression: '&' unary_expression  */
#line 259 "src/parser.y"
                               {(yyval.Base) = new UnaryAddress((yyvsp[0].Base));}
#line 2220 "src/parser.tab.cpp"
    break;

  case 101: /* unary_expression: '*' unary_expression  */
#line 260 "src/parser.y"
                               {(yyval.Base) = new UnaryPointer((yyvsp[0].Base));}
#line 2226 "src/parser.tab.cpp"
    break;

  case 102: /* unary_expression: '+' unary_expression  */
#line 261 "src/parser.y"
                               {(yyval.Base) = (yyvsp[0].Base);}
#line 2232 "src/parser.tab.cpp"
    break;

  case 103: /* unary_expression: '-' unary_expression  */
#line 262 "src/parser.y"
                               {(yyval.Base) = new UnarySub((yyvsp[0].Base)); }
#line 2238 "src/parser.tab.cpp"
    break;

  case 104: /* unary_expression: '~' unary_expression  */
#line 263 "src/parser.y"
                               {std::cerr << "Not Implemented !!!" << std::endl;}
#line 2244 "src/parser.tab.cpp"
    break;

  case 105: /* unary_expression: '!' unary_expression  */
#line 264 "src/parser.y"
                               {std::cerr << "Not Implemented !!!" << std::endl;}
#line 2250 "src/parser.tab.cpp"
    break;

  case 106: /* unary_expression: SIZEOF unary_expression  */
#line 265 "src/parser.y"
                                  {(yyval.Base) = new Sizeof((yyvsp[0].Base));}
#line 2256 "src/parser.tab.cpp"
    break;

  case 107: /* unary_expression: SIZEOF '(' type_name ')'  */
#line 266 "src/parser.y"
                                   {(yyval.Base) = new Sizeof((yyvsp[-1].Base));}
#line 2262 "src/parser.tab.cpp"
    break;

  case 108: /* postfix_expression: primary_expression  */
#line 270 "src/parser.y"
                                { (yyval.Base) = (yyvsp[0].Base); }
#line 2268 "src/parser.tab.cpp"
    break;

  case 109: /* postfix_expression: postfix_expression '[' expression ']'  */
#line 271 "src/parser.y"
                                                {std::cerr << "Not Implemented !!!" << std::endl;}
#line 2274 "src/parser.tab.cpp"
    break;

  case 110: /* postfix_expression: postfix_expression '(' ')'  */
#line 272 "src/parser.y"
                                     {(yyval.Base) = new FunctionCallNoPara((yyvsp[-2].Base));}
#line 2280 "src/parser.tab.cpp"
    break;

  case 111: /* postfix_expression: postfix_expression '(' argument_expression_list ')'  */
#line 273 "src/parser.y"
                                                              {(yyval.Base) = new FunctionCall((yyvsp[-3].Base),(yyvsp[-1].Base));}
#line 2286 "src/parser.tab.cpp"
    break;

  case 112: /* postfix_expression: postfix_expression '.' IDENTIFIER  */
#line 274 "src/parser.y"
                                            {std::cerr << "Not Implemented !!!" << std::endl;}
#line 2292 "src/parser.tab.cpp"
    break;

  case 113: /* postfix_expression: postfix_expression PTR_OP IDENTIFIER  */
#line 275 "src/parser.y"
                                               {std::cerr << "Not Implemented !!!" << std::endl;}
#line 2298 "src/parser.tab.cpp"
    break;

  case 114: /* postfix_expression: postfix_expression INC_OP  */
#line 276 "src/parser.y"
                                    {(yyval.Base) = new UnaryInc((yyvsp[-1].Base));}
#line 2304 "src/parser.tab.cpp"
    break;

  case 115: /* postfix_expression: postfix_expression DEC_OP  */
#line 277 "src/parser.y"
                                    {(yyval.Base) = new UnaryDec((yyvsp[-1].Base));}
#line 2310 "src/parser.tab.cpp"
    break;

  case 116: /* argument_expression_list: assignment_expression  */
#line 281 "src/parser.y"
                                {(yyval.Base) = new ArgumentExprListOne((yyvsp[0].Base));}
#line 2316 "src/parser.tab.cpp"
    break;

  case 117: /* argument_expression_list: argument_expression_list ',' assignment_expression  */
#line 282 "src/parser.y"
                                                             {(yyval.Base) = new ArgumentExprList((yyvsp[-2].Base),(yyvsp[0].Base));}
#line 2322 "src/parser.tab.cpp"
    break;

  case 118: /* primary_expression: IDENTIFIER  */
#line 286 "src/parser.y"
                     {(yyval.Base) = new Identifier(*(yyvsp[0].string));  }
#line 2328 "src/parser.tab.cpp"
    break;

  case 119: /* primary_expression: INT_CONST  */
#line 287 "src/parser.y"
                         { (yyval.Base) = new Integer((yyvsp[0].number)); }
#line 2334 "src/parser.tab.cpp"
    break;

  case 120: /* primary_expression: FLOAT_CONST  */
#line 288 "src/parser.y"
                      { (yyval.Base) = new Float((yyvsp[0].numberFloat));}
#line 2340 "src/parser.tab.cpp"
    break;

  case 121: /* primary_expression: STRING_LITERAL  */
#line 289 "src/parser.y"
                         {(yyval.Base) = new Integer((yyvsp[0].number));}
#line 2346 "src/parser.tab.cpp"
    break;

  case 122: /* primary_expression: CHAR_LITERAL  */
#line 290 "src/parser.y"
                       {(yyval.Base) = new Integer((yyvsp[0].number));}
#line 2352 "src/parser.tab.cpp"
    break;

  case 123: /* primary_expression: '(' expression ')'  */
#line 291 "src/parser.y"
                             {(yyval.Base) = (yyvsp[-1].Base);}
#line 2358 "src/parser.tab.cpp"
    break;

  case 124: /* selection_statement: IF '(' expression ')' statement  */
#line 296 "src/parser.y"
                                          {(yyval.Base) = new If((yyvsp[-2].Base),(yyvsp[0].Base));}
#line 2364 "src/parser.tab.cpp"
    break;

  case 125: /* selection_statement: IF '(' expression ')' statement ELSE statement  */
#line 297 "src/parser.y"
                                                         {(yyval.Base) = new IfElse((yyvsp[-4].Base),(yyvsp[-2].Base),(yyvsp[0].Base));}
#line 2370 "src/parser.tab.cpp"
    break;

  case 126: /* selection_statement: SWITCH '(' expression ')' statement  */
#line 298 "src/parser.y"
                                              {std::cerr << "Not Implemented !!!" << std::endl;}
#line 2376 "src/parser.tab.cpp"
    break;

  case 127: /* iteration_statement: WHILE '(' expression ')' statement  */
#line 302 "src/parser.y"
                                             {(yyval.Base) = new While((yyvsp[-2].Base),(yyvsp[0].Base));}
#line 2382 "src/parser.tab.cpp"
    break;

  case 128: /* iteration_statement: DO statement WHILE '(' expression ')' ';'  */
#line 303 "src/parser.y"
                                                    {std::cerr << "Not Implemented !!!" << std::endl;}
#line 2388 "src/parser.tab.cpp"
    break;

  case 129: /* iteration_statement: FOR '(' expression_statement expression_statement ')' statement  */
#line 304 "src/parser.y"
                                                                          {std::cerr << "Not Implemented !!!" << std::endl;}
#line 2394 "src/parser.tab.cpp"
    break;

  case 130: /* iteration_statement: FOR '(' expression_statement expression_statement expression ')' statement  */
#line 305 "src/parser.y"
                                                                                     {(yyval.Base) = new For((yyvsp[-4].Base),(yyvsp[-3].Base),(yyvsp[-2].Base),(yyvsp[0].Base));}
#line 2400 "src/parser.tab.cpp"
    break;

  case 131: /* constant_expression: conditional_expression  */
#line 310 "src/parser.y"
                                 {(yyval.Base) = (yyvsp[0].Base);}
#line 2406 "src/parser.tab.cpp"
    break;

  case 132: /* declaration: declaration_specifiers ';'  */
#line 314 "src/parser.y"
                                     {(yyval.Base) = (yyvsp[-1].Base);}
#line 2412 "src/parser.tab.cpp"
    break;

  case 133: /* declaration: declaration_specifiers init_declarator_list ';'  */
#line 315 "src/parser.y"
                                                          {(yyval.Base) = new Declaration((yyvsp[-2].Base),(yyvsp[-1].Base));}
#line 2418 "src/parser.tab.cpp"
    break;

  case 134: /* init_declarator_list: init_declarator  */
#line 319 "src/parser.y"
                          {(yyval.Base) = (yyvsp[0].Base);}
#line 2424 "src/parser.tab.cpp"
    break;

  case 135: /* init_declarator_list: init_declarator_list ',' init_declarator  */
#line 320 "src/parser.y"
                                                   {std::cerr << "Not Used ???" << std::endl;}
#line 2430 "src/parser.tab.cpp"
    break;

  case 136: /* init_declarator: declarator  */
#line 324 "src/parser.y"
                     {(yyval.Base) = (yyvsp[0].Base);}
#line 2436 "src/parser.tab.cpp"
    break;

  case 137: /* init_declarator: declarator '=' initializer  */
#line 325 "src/parser.y"
                                     {(yyval.Base) = new InitDeclarator((yyvsp[-2].Base),(yyvsp[0].Base));}
#line 2442 "src/parser.tab.cpp"
    break;

  case 138: /* storage_class_specifier: TYPEDEF  */
#line 329 "src/parser.y"
                  {std::cerr << "Not Used ???" << std::endl;}
#line 2448 "src/parser.tab.cpp"
    break;

  case 139: /* storage_class_specifier: EXTERN  */
#line 330 "src/parser.y"
                 {std::cerr << "Not Used ???" << std::endl;}
#line 2454 "src/parser.tab.cpp"
    break;

  case 140: /* storage_class_specifier: STATIC  */
#line 331 "src/parser.y"
                 {std::cerr << "Not Used ???" << std::endl;}
#line 2460 "src/parser.tab.cpp"
    break;

  case 141: /* storage_class_specifier: AUTO  */
#line 332 "src/parser.y"
               {std::cerr << "Not Used ???" << std::endl;}
#line 2466 "src/parser.tab.cpp"
    break;

  case 142: /* storage_class_specifier: REGISTER  */
#line 333 "src/parser.y"
                   {std::cerr << "Not Used ???" << std::endl;}
#line 2472 "src/parser.tab.cpp"
    break;

  case 143: /* struct_or_union_specifier: struct_or_union IDENTIFIER '{' struct_declaration_list '}'  */
#line 337 "src/parser.y"
                                                                     {std::cerr << "Not Implemented !!!" << std::endl;}
#line 2478 "src/parser.tab.cpp"
    break;

  case 144: /* struct_or_union_specifier: struct_or_union '{' struct_declaration_list '}'  */
#line 338 "src/parser.y"
                                                          {std::cerr << "Not Implemented !!!" << std::endl;}
#line 2484 "src/parser.tab.cpp"
    break;

  case 145: /* struct_or_union_specifier: struct_or_union IDENTIFIER  */
#line 339 "src/parser.y"
                                     {std::cerr << "Not Implemented !!!" << std::endl;}
#line 2490 "src/parser.tab.cpp"
    break;

  case 146: /* struct_or_union: STRUCT  */
#line 343 "src/parser.y"
                 {std::cerr << "Not Implemented !!!" << std::endl;}
#line 2496 "src/parser.tab.cpp"
    break;

  case 147: /* struct_or_union: UNION  */
#line 344 "src/parser.y"
                {std::cerr << "Not Implemented !!!" << std::endl;}
#line 2502 "src/parser.tab.cpp"
    break;

  case 148: /* struct_declaration_list: struct_declaration  */
#line 348 "src/parser.y"
                             {(yyval.Base) = (yyvsp[0].Base);}
#line 2508 "src/parser.tab.cpp"
    break;

  case 149: /* struct_declaration_list: struct_declaration_list struct_declaration  */
#line 349 "src/parser.y"
                                                     {std::cerr << "Not Implemented !!!" << std::endl;}
#line 2514 "src/parser.tab.cpp"
    break;

  case 150: /* struct_declaration: specifier_qualifier_list struct_declarator_list ';'  */
#line 353 "src/parser.y"
                                                              {std::cerr << "Not Implemented !!!" << std::endl;}
#line 2520 "src/parser.tab.cpp"
    break;

  case 151: /* specifier_qualifier_list: type_specifier specifier_qualifier_list  */
#line 357 "src/parser.y"
                                                  {std::cerr << "Not Implemented !!!" << std::endl;}
#line 2526 "src/parser.tab.cpp"
    break;

  case 152: /* specifier_qualifier_list: type_specifier  */
#line 358 "src/parser.y"
                         {std::cerr << "Not Implemented !!!" << std::endl;}
#line 2532 "src/parser.tab.cpp"
    break;

  case 153: /* specifier_qualifier_list: type_qualifier specifier_qualifier_list  */
#line 359 "src/parser.y"
                                                  {std::cerr << "Not Implemented !!!" << std::endl;}
#line 2538 "src/parser.tab.cpp"
    break;

  case 154: /* specifier_qualifier_list: type_qualifier  */
#line 360 "src/parser.y"
                         {std::cerr << "Not Implemented !!!" << std::endl;}
#line 2544 "src/parser.tab.cpp"
    break;

  case 155: /* struct_declarator_list: struct_declarator  */
#line 364 "src/parser.y"
                            {(yyval.Base) = (yyvsp[0].Base);}
#line 2550 "src/parser.tab.cpp"
    break;

  case 156: /* struct_declarator_list: struct_declarator_list ',' struct_declarator  */
#line 365 "src/parser.y"
                                                       {std::cerr << "Not Implemented !!!" << std::endl;}
#line 2556 "src/parser.tab.cpp"
    break;

  case 157: /* struct_declarator: declarator  */
#line 369 "src/parser.y"
                     {(yyval.Base) = (yyvsp[0].Base);}
#line 2562 "src/parser.tab.cpp"
    break;

  case 158: /* struct_declarator: ':' constant_expression  */
#line 370 "src/parser.y"
                                  {std::cerr << "Not Implemented !!!" << std::endl;}
#line 2568 "src/parser.tab.cpp"
    break;

  case 159: /* struct_declarator: declarator ':' constant_expression  */
#line 371 "src/parser.y"
                                             {std::cerr << "Not Implemented !!!" << std::endl;}
#line 2574 "src/parser.tab.cpp"
    break;

  case 160: /* enum_specifier: ENUM '{' enumerator_list '}'  */
#line 375 "src/parser.y"
                                       {std::cerr << "Not Implemented !!!" << std::endl;}
#line 2580 "src/parser.tab.cpp"
    break;

  case 161: /* enum_specifier: ENUM IDENTIFIER '{' enumerator_list '}'  */
#line 376 "src/parser.y"
                                                  {std::cerr << "Not Implemented !!!" << std::endl;}
#line 2586 "src/parser.tab.cpp"
    break;

  case 162: /* enum_specifier: ENUM IDENTIFIER  */
#line 377 "src/parser.y"
                          {std::cerr << "Not Implemented !!!" << std::endl;}
#line 2592 "src/parser.tab.cpp"
    break;

  case 163: /* enumerator_list: enumerator  */
#line 381 "src/parser.y"
                     {(yyval.Base) = (yyvsp[0].Base);}
#line 2598 "src/parser.tab.cpp"
    break;

  case 164: /* enumerator_list: enumerator_list ',' enumerator  */
#line 382 "src/parser.y"
                                         {std::cerr << "Not Implemented !!!" << std::endl;}
#line 2604 "src/parser.tab.cpp"
    break;

  case 165: /* enumerator: IDENTIFIER  */
#line 386 "src/parser.y"
                     {std::cerr << "Not Implemented !!!" << std::endl;}
#line 2610 "src/parser.tab.cpp"
    break;

  case 166: /* enumerator: IDENTIFIER '=' constant_expression  */
#line 387 "src/parser.y"
                                             {std::cerr << "Not Implemented !!!" << std::endl;}
#line 2616 "src/parser.tab.cpp"
    break;

  case 167: /* type_qualifier: CONST  */
#line 391 "src/parser.y"
                {std::cerr << "Not Implemented !!!" << std::endl;}
#line 2622 "src/parser.tab.cpp"
    break;

  case 168: /* type_qualifier: VOLATILE  */
#line 392 "src/parser.y"
                   {std::cerr << "Not Implemented !!!" << std::endl;}
#line 2628 "src/parser.tab.cpp"
    break;

  case 169: /* pointer: '*'  */
#line 396 "src/parser.y"
              {std::cerr << "Not Implemented !!!" << std::endl;}
#line 2634 "src/parser.tab.cpp"
    break;

  case 170: /* pointer: '*' type_qualifier_list  */
#line 397 "src/parser.y"
                                  {std::cerr << "Not Implemented !!!" << std::endl;}
#line 2640 "src/parser.tab.cpp"
    break;

  case 171: /* pointer: '*' pointer  */
#line 398 "src/parser.y"
                      {std::cerr << "Not Implemented !!!" << std::endl;}
#line 2646 "src/parser.tab.cpp"
    break;

  case 172: /* pointer: '*' type_qualifier_list pointer  */
#line 399 "src/parser.y"
                                          {std::cerr << "Not Implemented !!!" << std::endl;}
#line 2652 "src/parser.tab.cpp"
    break;

  case 173: /* type_qualifier_list: type_qualifier  */
#line 403 "src/parser.y"
                         {std::cerr << "Not Implemented !!!" << std::endl;}
#line 2658 "src/parser.tab.cpp"
    break;

  case 174: /* type_qualifier_list: type_qualifier_list type_qualifier  */
#line 404 "src/parser.y"
                                             {std::cerr << "Not Implemented !!!" << std::endl;}
#line 2664 "src/parser.tab.cpp"
    break;

  case 175: /* parameter_type_list: parameter_list  */
#line 408 "src/parser.y"
                         {(yyval.Base) = (yyvsp[0].Base);}
#line 2670 "src/parser.tab.cpp"
    break;

  case 176: /* parameter_list: parameter_declaration  */
#line 413 "src/parser.y"
                                {(yyval.Base) = (yyvsp[0].Base);}
#line 2676 "src/parser.tab.cpp"
    break;

  case 177: /* parameter_list: parameter_list ',' parameter_declaration  */
#line 414 "src/parser.y"
                                                   {(yyval.Base) = new ParameterList((yyvsp[-2].Base), (yyvsp[0].Base));}
#line 2682 "src/parser.tab.cpp"
    break;

  case 178: /* parameter_declaration: declaration_specifiers declarator  */
#line 418 "src/parser.y"
                                            {(yyval.Base) = new ParameterDeclaration((yyvsp[-1].Base), (yyvsp[0].Base));}
#line 2688 "src/parser.tab.cpp"
    break;

  case 179: /* parameter_declaration: declaration_specifiers abstract_declarator  */
#line 419 "src/parser.y"
                                                     {std::cerr << "Not Implemented !!!" << std::endl;}
#line 2694 "src/parser.tab.cpp"
    break;

  case 180: /* parameter_declaration: declaration_specifiers  */
#line 420 "src/parser.y"
                                 {std::cerr << "Not Used ???" << std::endl;}
#line 2700 "src/parser.tab.cpp"
    break;

  case 181: /* identifier_list: IDENTIFIER  */
#line 424 "src/parser.y"
                     {std::cerr << "Not Implemented !!!" << std::endl;}
#line 2706 "src/parser.tab.cpp"
    break;

  case 182: /* identifier_list: identifier_list ',' IDENTIFIER  */
#line 425 "src/parser.y"
                                         {std::cerr << "Not Implemented !!!" << std::endl;}
#line 2712 "src/parser.tab.cpp"
    break;

  case 183: /* type_name: specifier_qualifier_list  */
#line 430 "src/parser.y"
                                   {(yyval.Base) = (yyvsp[0].Base);}
#line 2718 "src/parser.tab.cpp"
    break;

  case 184: /* type_name: specifier_qualifier_list abstract_declarator  */
#line 431 "src/parser.y"
                                                       {std::cerr << "Not Implemented !!!" << std::endl;}
#line 2724 "src/parser.tab.cpp"
    break;

  case 185: /* abstract_declarator: pointer  */
#line 435 "src/parser.y"
                  {(yyval.Base) = (yyvsp[0].Base);}
#line 2730 "src/parser.tab.cpp"
    break;

  case 186: /* abstract_declarator: direct_abstract_declarator  */
#line 436 "src/parser.y"
                                     {std::cerr << "Not Implemented !!!" << std::endl;}
#line 2736 "src/parser.tab.cpp"
    break;

  case 187: /* abstract_declarator: pointer direct_abstract_declarator  */
#line 437 "src/parser.y"
                                             {std::cerr << "Not Implemented !!!" << std::endl;}
#line 2742 "src/parser.tab.cpp"
    break;

  case 188: /* direct_abstract_declarator: '(' abstract_declarator ')'  */
#line 441 "src/parser.y"
                                      {(yyval.Base) = (yyvsp[-1].Base);}
#line 2748 "src/parser.tab.cpp"
    break;

  case 189: /* direct_abstract_declarator: '[' ']'  */
#line 442 "src/parser.y"
                  {std::cerr << "Not Implemented !!!" << std::endl;}
#line 2754 "src/parser.tab.cpp"
    break;

  case 190: /* direct_abstract_declarator: '[' constant_expression ']'  */
#line 443 "src/parser.y"
                                      {std::cerr << "Not Implemented !!!" << std::endl;}
#line 2760 "src/parser.tab.cpp"
    break;

  case 191: /* direct_abstract_declarator: direct_abstract_declarator '[' ']'  */
#line 444 "src/parser.y"
                                             {std::cerr << "Not Implemented !!!" << std::endl;}
#line 2766 "src/parser.tab.cpp"
    break;

  case 192: /* direct_abstract_declarator: direct_abstract_declarator '[' constant_expression ']'  */
#line 445 "src/parser.y"
                                                                 {std::cerr << "Not Implemented !!!" << std::endl;}
#line 2772 "src/parser.tab.cpp"
    break;

  case 193: /* direct_abstract_declarator: '(' ')'  */
#line 446 "src/parser.y"
                  {std::cerr << "Not Implemented !!!" << std::endl;}
#line 2778 "src/parser.tab.cpp"
    break;

  case 194: /* direct_abstract_declarator: '(' parameter_type_list ')'  */
#line 447 "src/parser.y"
                                      {std::cerr << "Not Implemented !!!" << std::endl;}
#line 2784 "src/parser.tab.cpp"
    break;

  case 195: /* direct_abstract_declarator: direct_abstract_declarator '(' ')'  */
#line 448 "src/parser.y"
                                             {std::cerr << "Not Implemented !!!" << std::endl;}
#line 2790 "src/parser.tab.cpp"
    break;

  case 196: /* direct_abstract_declarator: direct_abstract_declarator '(' parameter_type_list ')'  */
#line 449 "src/parser.y"
                                                                 {std::cerr << "Not Implemented !!!" << std::endl;}
#line 2796 "src/parser.tab.cpp"
    break;

  case 197: /* initializer: assignment_expression  */
#line 453 "src/parser.y"
                                {(yyval.Base) = (yyvsp[0].Base);}
#line 2802 "src/parser.tab.cpp"
    break;

  case 198: /* initializer: '{' initializer_list '}'  */
#line 454 "src/parser.y"
                                   {std::cerr << "Not Implemented !!!" << std::endl;}
#line 2808 "src/parser.tab.cpp"
    break;

  case 199: /* initializer: '{' initializer_list ',' '}'  */
#line 455 "src/parser.y"
                                       {std::cerr << "Not Implemented !!!" << std::endl;}
#line 2814 "src/parser.tab.cpp"
    break;

  case 200: /* initializer_list: initializer  */
#line 459 "src/parser.y"
                      {(yyval.Base) = (yyvsp[0].Base);}
#line 2820 "src/parser.tab.cpp"
    break;

  case 201: /* initializer_list: initializer_list ',' initializer  */
#line 460 "src/parser.y"
                                           {std::cerr << "Not Implemented !!!" << std::endl;}
#line 2826 "src/parser.tab.cpp"
    break;

  case 202: /* labeled_statement: IDENTIFIER ':' statement  */
#line 466 "src/parser.y"
                                   {std::cerr << "Not Implemented !!!" << std::endl;}
#line 2832 "src/parser.tab.cpp"
    break;

  case 203: /* labeled_statement: CASE constant_expression ':' statement  */
#line 467 "src/parser.y"
                                                 {std::cerr << "Not Implemented !!!" << std::endl;}
#line 2838 "src/parser.tab.cpp"
    break;

  case 204: /* labeled_statement: DEFAULT ':' statement  */
#line 468 "src/parser.y"
                                {std::cerr << "Not Implemented !!!" << std::endl;}
#line 2844 "src/parser.tab.cpp"
    break;

  case 205: /* declaration_list: declaration  */
#line 474 "src/parser.y"
                      {(yyval.Base) = (yyvsp[0].Base);}
#line 2850 "src/parser.tab.cpp"
    break;

  case 206: /* declaration_list: declaration_list declaration  */
#line 475 "src/parser.y"
                                       {(yyval.Base) = new DeclarationList((yyvsp[-1].Base),(yyvsp[0].Base));}
#line 2856 "src/parser.tab.cpp"
    break;

  case 207: /* expression_statement: ';'  */
#line 481 "src/parser.y"
              {std::cerr << "Not Implemented !!!" << std::endl;}
#line 2862 "src/parser.tab.cpp"
    break;

  case 208: /* expression_statement: expression ';'  */
#line 482 "src/parser.y"
                         {(yyval.Base) = (yyvsp[-1].Base);}
#line 2868 "src/parser.tab.cpp"
    break;


#line 2872 "src/parser.tab.cpp"

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

#line 491 "src/parser.y"


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
