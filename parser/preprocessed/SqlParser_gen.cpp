/* A Bison parser, made by GNU Bison 3.0.4.  */

/* Bison implementation for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015 Free Software Foundation, Inc.

   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <http://www.gnu.org/licenses/>.  */

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

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "3.0.4"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 1

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1


/* Substitute the variable and function names.  */
#define yyparse         quickstep_yyparse
#define yylex           quickstep_yylex
#define yyerror         quickstep_yyerror
#define yydebug         quickstep_yydebug
#define yynerrs         quickstep_yynerrs


/* Copy the first part of user declarations.  */
#line 35 "../SqlParser.ypp" /* yacc.c:339  */


/* Override the default definition, as we only need <first_line> and <first_column>. */
typedef struct YYLTYPE {
  int first_line;
  int first_column;
} YYLTYPE;

#define YYLTYPE_IS_DECLARED 1

/*
 * Modified from the default YYLLOC_DEFAULT
 * (http://www.gnu.org/software/bison/manual/html_node/Location-Default-Action.html).
 * The assignments for last_line and last_column are removed as they are not used.
 */
#define YYLLOC_DEFAULT(current, rhs, n)                         \
  do {                                                          \
    if (n) {                                                    \
      (current).first_line   = YYRHSLOC(rhs, 1).first_line;     \
      (current).first_column = YYRHSLOC(rhs, 1).first_column;   \
    } else {                                                    \
      /* empty RHS */                                           \
      (current).first_line = YYRHSLOC(rhs, 0).first_line;       \
      (current).first_column = YYRHSLOC(rhs, 0).first_column;   \
    }                                                           \
  } while (0)

#line 64 "../SqlParser.ypp" /* yacc.c:339  */

#include <cstdlib>
#include <string>
#include <utility>

#include "catalog/PartitionSchemeHeader.hpp"
#include "parser/ParseAssignment.hpp"
#include "parser/ParseAttributeDefinition.hpp"
#include "parser/ParseBasicExpressions.hpp"
#include "parser/ParseBlockProperties.hpp"
#include "parser/ParseCaseExpressions.hpp"
#include "parser/ParseExpression.hpp"
#include "parser/ParseGeneratorTableReference.hpp"
#include "parser/ParseGroupBy.hpp"
#include "parser/ParseHaving.hpp"
#include "parser/ParseJoinedTableReference.hpp"
#include "parser/ParseKeyValue.hpp"
#include "parser/ParseLimit.hpp"
#include "parser/ParseLiteralValue.hpp"
#include "parser/ParseOrderBy.hpp"
#include "parser/ParsePartitionClause.hpp"
#include "parser/ParsePredicate.hpp"
#include "parser/ParsePredicateExists.hpp"
#include "parser/ParsePredicateInTableQuery.hpp"
#include "parser/ParsePriority.hpp"
#include "parser/ParserUtil.hpp"
#include "parser/ParseSample.hpp"
#include "parser/ParseSelect.hpp"
#include "parser/ParseSelectionClause.hpp"
#include "parser/ParseSetOperation.hpp"
#include "parser/ParseSimpleTableReference.hpp"
#include "parser/ParseStatement.hpp"
#include "parser/ParseString.hpp"
#include "parser/ParseSubqueryExpression.hpp"
#include "parser/ParseSubqueryTableReference.hpp"
#include "parser/ParseTableReference.hpp"
#include "parser/ParseTransitiveClosureTableReference.hpp"
#include "parser/ParseWindow.hpp"
#include "storage/StorageBlockInfo.hpp"
#include "types/Type.hpp"
#include "types/TypeFactory.hpp"
#include "types/TypeID.hpp"
#include "types/operations/binary_operations/BinaryOperation.hpp"
#include "types/operations/binary_operations/BinaryOperationFactory.hpp"
#include "types/operations/binary_operations/BinaryOperationID.hpp"
#include "types/operations/comparisons/Comparison.hpp"
#include "types/operations/comparisons/ComparisonFactory.hpp"
#include "types/operations/comparisons/ComparisonID.hpp"
#include "types/operations/unary_operations/UnaryOperation.hpp"
#include "types/operations/unary_operations/UnaryOperationFactory.hpp"
#include "types/operations/unary_operations/UnaryOperationID.hpp"
#include "utility/PtrList.hpp"
#include "utility/PtrVector.hpp"

// Needed for Bison 2.6 and higher, which do not automatically provide this typedef.
typedef void* yyscan_t;

#line 158 "SqlParser_gen.cpp" /* yacc.c:339  */

# ifndef YY_NULLPTR
#  if defined __cplusplus && 201103L <= __cplusplus
#   define YY_NULLPTR nullptr
#  else
#   define YY_NULLPTR 0
#  endif
# endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

/* In a future release of Bison, this section will be replaced
   by #include "SqlParser_gen.hpp".  */
#ifndef YY_QUICKSTEP_YY_SQLPARSER_GEN_HPP_INCLUDED
# define YY_QUICKSTEP_YY_SQLPARSER_GEN_HPP_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int quickstep_yydebug;
#endif

/* Token type.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    TOKEN_COMMAND = 258,
    TOKEN_NAME = 259,
    TOKEN_STRING_SINGLE_QUOTED = 260,
    TOKEN_STRING_DOUBLE_QUOTED = 261,
    TOKEN_UNSIGNED_NUMVAL = 262,
    TOKEN_OR = 263,
    TOKEN_AND = 264,
    TOKEN_NOT = 265,
    TOKEN_EQ = 266,
    TOKEN_LT = 267,
    TOKEN_LEQ = 268,
    TOKEN_GT = 269,
    TOKEN_GEQ = 270,
    TOKEN_NEQ = 271,
    TOKEN_LIKE = 272,
    TOKEN_REGEXP = 273,
    TOKEN_BETWEEN = 274,
    TOKEN_IS = 275,
    UNARY_PLUS = 276,
    UNARY_MINUS = 277,
    TOKEN_ALL = 278,
    TOKEN_UNION = 279,
    TOKEN_INTERSECT = 280,
    TOKEN_ADD = 281,
    TOKEN_ALTER = 282,
    TOKEN_AS = 283,
    TOKEN_ASC = 284,
    TOKEN_BIGINT = 285,
    TOKEN_BIT = 286,
    TOKEN_BITWEAVING = 287,
    TOKEN_BLOCKPROPERTIES = 288,
    TOKEN_BLOCKSAMPLE = 289,
    TOKEN_BLOOM_FILTER = 290,
    TOKEN_BY = 291,
    TOKEN_CASE = 292,
    TOKEN_CHARACTER = 293,
    TOKEN_CHECK = 294,
    TOKEN_COLUMN = 295,
    TOKEN_CONNECT = 296,
    TOKEN_CONSTRAINT = 297,
    TOKEN_COPY = 298,
    TOKEN_CREATE = 299,
    TOKEN_CSB_TREE = 300,
    TOKEN_CURRENT = 301,
    TOKEN_DATE = 302,
    TOKEN_DATETIME = 303,
    TOKEN_DAY = 304,
    TOKEN_DECIMAL = 305,
    TOKEN_DEFAULT = 306,
    TOKEN_DELETE = 307,
    TOKEN_DESC = 308,
    TOKEN_DISTINCT = 309,
    TOKEN_DOUBLE = 310,
    TOKEN_DROP = 311,
    TOKEN_ELSE = 312,
    TOKEN_END = 313,
    TOKEN_EOF = 314,
    TOKEN_EXISTS = 315,
    TOKEN_EXTRACT = 316,
    TOKEN_FALSE = 317,
    TOKEN_FIRST = 318,
    TOKEN_FLOAT = 319,
    TOKEN_FOLLOWING = 320,
    TOKEN_FOR = 321,
    TOKEN_FOREIGN = 322,
    TOKEN_FROM = 323,
    TOKEN_FULL = 324,
    TOKEN_GROUP = 325,
    TOKEN_HASH = 326,
    TOKEN_HAVING = 327,
    TOKEN_HOUR = 328,
    TOKEN_IN = 329,
    TOKEN_INDEX = 330,
    TOKEN_INNER = 331,
    TOKEN_INSERT = 332,
    TOKEN_INTEGER = 333,
    TOKEN_INTERVAL = 334,
    TOKEN_INTO = 335,
    TOKEN_JOIN = 336,
    TOKEN_KEY = 337,
    TOKEN_LAST = 338,
    TOKEN_LEFT = 339,
    TOKEN_LEX_ERROR = 340,
    TOKEN_LIMIT = 341,
    TOKEN_LONG = 342,
    TOKEN_MINUTE = 343,
    TOKEN_MONTH = 344,
    TOKEN_NULL = 345,
    TOKEN_NULLS = 346,
    TOKEN_OFF = 347,
    TOKEN_ON = 348,
    TOKEN_ORDER = 349,
    TOKEN_OUTER = 350,
    TOKEN_OVER = 351,
    TOKEN_PARTITION = 352,
    TOKEN_PARTITIONS = 353,
    TOKEN_PERCENT = 354,
    TOKEN_PRECEDING = 355,
    TOKEN_PRIMARY = 356,
    TOKEN_PRIORITY = 357,
    TOKEN_QUIT = 358,
    TOKEN_RANGE = 359,
    TOKEN_REAL = 360,
    TOKEN_REFERENCES = 361,
    TOKEN_RIGHT = 362,
    TOKEN_ROW = 363,
    TOKEN_ROWS = 364,
    TOKEN_ROW_DELIMITER = 365,
    TOKEN_SECOND = 366,
    TOKEN_SELECT = 367,
    TOKEN_SET = 368,
    TOKEN_SMA = 369,
    TOKEN_SMALLINT = 370,
    TOKEN_STDERR = 371,
    TOKEN_STDOUT = 372,
    TOKEN_SUBSTRING = 373,
    TOKEN_TABLE = 374,
    TOKEN_THEN = 375,
    TOKEN_TIME = 376,
    TOKEN_TIMESTAMP = 377,
    TOKEN_TO = 378,
    TOKEN_TRUE = 379,
    TOKEN_TUPLESAMPLE = 380,
    TOKEN_UNBOUNDED = 381,
    TOKEN_UNIQUE = 382,
    TOKEN_UPDATE = 383,
    TOKEN_USING = 384,
    TOKEN_VALUES = 385,
    TOKEN_VARCHAR = 386,
    TOKEN_WHEN = 387,
    TOKEN_WHERE = 388,
    TOKEN_WINDOW = 389,
    TOKEN_WITH = 390,
    TOKEN_YEAR = 391,
    TOKEN_YEARMONTH = 392
  };
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED

union YYSTYPE
{
#line 122 "../SqlParser.ypp" /* yacc.c:355  */

  quickstep::ParseString *string_value_;

  quickstep::PtrList<quickstep::ParseString> *string_list_;

  bool boolean_value_;

  quickstep::NumericParseLiteralValue *numeric_literal_value_;
  quickstep::ParseLiteralValue *literal_value_;
  quickstep::PtrList<quickstep::ParseScalarLiteral> *literal_value_list_;
  quickstep::PtrList<quickstep::PtrList<quickstep::ParseScalarLiteral>> *literal_value_list_multiple_;

  quickstep::ParseExpression *expression_;

  quickstep::ParseScalarLiteral *scalar_literal_;
  quickstep::ParseAttribute *attribute_;
  quickstep::PtrList<quickstep::ParseAttribute> *attribute_list_;

  quickstep::ParsePredicate *predicate_;

  quickstep::ParseSubqueryExpression *subquery_expression_;

  quickstep::PtrVector<quickstep::ParseSimpleWhenClause> *simple_when_clause_list_;
  quickstep::ParseSimpleWhenClause *simple_when_clause_;

  quickstep::PtrVector<quickstep::ParseSearchedWhenClause> *searched_when_clause_list_;
  quickstep::ParseSearchedWhenClause *searched_when_clause_;

  quickstep::ParseSelectionClause *selection_;
  quickstep::ParseSelectionItem *selection_item_;
  quickstep::ParseSelectionList *selection_list_;

  quickstep::ParseSetOperation *set_operation_;

  quickstep::ParseTableReference *table_reference_;
  quickstep::PtrList<quickstep::ParseTableReference> *table_reference_list_;
  quickstep::ParseTableReferenceSignature *table_reference_signature_;

  quickstep::ParseJoinedTableReference::JoinType join_type_;

  quickstep::ParseDataType *data_type_;
  quickstep::ParseAttributeDefinition *attribute_definition_;
  quickstep::ParseColumnConstraint *column_constraint_;
  quickstep::PtrList<quickstep::ParseColumnConstraint> *column_constraint_list_;
  quickstep::PtrList<quickstep::ParseAttributeDefinition> *attribute_definition_list_;

  quickstep::ParseKeyValue *key_value_;
  quickstep::PtrList<quickstep::ParseKeyValue> *key_value_list_;
  quickstep::ParseKeyStringValue *key_string_value_;
  quickstep::ParseKeyStringList *key_string_list_;
  quickstep::ParseKeyIntegerValue *key_integer_value_;
  quickstep::ParseKeyBoolValue *key_bool_value_;

  quickstep::ParseAssignment *assignment_;
  quickstep::PtrList<quickstep::ParseAssignment> *assignment_list_;

  quickstep::ParseCommand *command_;
  quickstep::PtrVector<quickstep::ParseString> *command_argument_list_;

  quickstep::ParseStatement *statement_;
  quickstep::ParseStatementSetOperation *set_operation_statement_;
  quickstep::ParseStatementUpdate *update_statement_;
  quickstep::ParseStatementInsert *insert_statement_;
  quickstep::ParseStatementDelete *delete_statement_;
  quickstep::ParseStatementCopy *copy_statement_;
  quickstep::ParseStatementCreateTable *create_table_statement_;
  quickstep::ParsePartitionClause *partition_clause_;
  quickstep::ParseBlockProperties *block_properties_;
  quickstep::ParseStatementDropTable *drop_table_statement_;
  quickstep::ParseStatementQuit *quit_statement_;

  const quickstep::Comparison *comparison_;
  const quickstep::UnaryOperation *unary_operation_;
  const quickstep::BinaryOperation *binary_operation_;

  quickstep::ParseFunctionCall *function_call_;
  quickstep::PtrList<quickstep::ParseExpression> *expression_list_;

  quickstep::ParseSelect *select_query_;
  quickstep::ParseGroupBy *opt_group_by_clause_;
  quickstep::ParseHaving *opt_having_clause_;
  quickstep::ParseOrderBy *opt_order_by_clause_;
  bool *order_direction_;
  quickstep::ParseLimit *opt_limit_clause_;

  quickstep::ParseSample *opt_sample_clause_;

  quickstep::PtrList<quickstep::ParseWindow> *opt_window_clause_;
  quickstep::ParseWindow *window_definition_;
  quickstep::PtrList<quickstep::ParseExpression> *window_partition_by_list_;
  quickstep::PtrList<quickstep::ParseOrderByItem> *window_order_by_list_;
  quickstep::ParseFrameInfo *window_frame_info_;

  quickstep::PtrList<quickstep::ParseOrderByItem> *order_commalist_;
  quickstep::ParseOrderByItem *order_item_;

  quickstep::PtrVector<quickstep::ParseSubqueryTableReference> *with_list_;
  quickstep::ParseSubqueryTableReference *with_list_element_;

  quickstep::ParsePriority *opt_priority_clause_;

#line 438 "SqlParser_gen.cpp" /* yacc.c:355  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif

/* Location type.  */
#if ! defined YYLTYPE && ! defined YYLTYPE_IS_DECLARED
typedef struct YYLTYPE YYLTYPE;
struct YYLTYPE
{
  int first_line;
  int first_column;
  int last_line;
  int last_column;
};
# define YYLTYPE_IS_DECLARED 1
# define YYLTYPE_IS_TRIVIAL 1
#endif



int quickstep_yyparse (yyscan_t yyscanner, quickstep::ParseStatement **parsedStatement);

#endif /* !YY_QUICKSTEP_YY_SQLPARSER_GEN_HPP_INCLUDED  */

/* Copy the second part of user declarations.  */
#line 224 "../SqlParser.ypp" /* yacc.c:358  */

/* This header needs YYSTYPE, which is defined by the %union directive above */
#include "SqlLexer_gen.hpp"
void NotSupported(const YYLTYPE *location, yyscan_t yyscanner, const std::string &feature);

#line 473 "SqlParser_gen.cpp" /* yacc.c:358  */

#ifdef short
# undef short
#endif

#ifdef YYTYPE_UINT8
typedef YYTYPE_UINT8 yytype_uint8;
#else
typedef unsigned char yytype_uint8;
#endif

#ifdef YYTYPE_INT8
typedef YYTYPE_INT8 yytype_int8;
#else
typedef signed char yytype_int8;
#endif

#ifdef YYTYPE_UINT16
typedef YYTYPE_UINT16 yytype_uint16;
#else
typedef unsigned short int yytype_uint16;
#endif

#ifdef YYTYPE_INT16
typedef YYTYPE_INT16 yytype_int16;
#else
typedef short int yytype_int16;
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif ! defined YYSIZE_T
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned int
# endif
#endif

#define YYSIZE_MAXIMUM ((YYSIZE_T) -1)

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

#ifndef YY_ATTRIBUTE
# if (defined __GNUC__                                               \
      && (2 < __GNUC__ || (__GNUC__ == 2 && 96 <= __GNUC_MINOR__)))  \
     || defined __SUNPRO_C && 0x5110 <= __SUNPRO_C
#  define YY_ATTRIBUTE(Spec) __attribute__(Spec)
# else
#  define YY_ATTRIBUTE(Spec) /* empty */
# endif
#endif

#ifndef YY_ATTRIBUTE_PURE
# define YY_ATTRIBUTE_PURE   YY_ATTRIBUTE ((__pure__))
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# define YY_ATTRIBUTE_UNUSED YY_ATTRIBUTE ((__unused__))
#endif

#if !defined _Noreturn \
     && (!defined __STDC_VERSION__ || __STDC_VERSION__ < 201112)
# if defined _MSC_VER && 1200 <= _MSC_VER
#  define _Noreturn __declspec (noreturn)
# else
#  define _Noreturn YY_ATTRIBUTE ((__noreturn__))
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(E) ((void) (E))
#else
# define YYUSE(E) /* empty */
#endif

#if defined __GNUC__ && 407 <= __GNUC__ * 100 + __GNUC_MINOR__
/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN \
    _Pragma ("GCC diagnostic push") \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")\
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# define YY_IGNORE_MAYBE_UNINITIALIZED_END \
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


#if ! defined yyoverflow || YYERROR_VERBOSE

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
#endif /* ! defined yyoverflow || YYERROR_VERBOSE */


#if (! defined yyoverflow \
     && (! defined __cplusplus \
         || (defined YYLTYPE_IS_TRIVIAL && YYLTYPE_IS_TRIVIAL \
             && defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yytype_int16 yyss_alloc;
  YYSTYPE yyvs_alloc;
  YYLTYPE yyls_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (sizeof (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (sizeof (yytype_int16) + sizeof (YYSTYPE) + sizeof (YYLTYPE)) \
      + 2 * YYSTACK_GAP_MAXIMUM)

# define YYCOPY_NEEDED 1

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)                           \
    do                                                                  \
      {                                                                 \
        YYSIZE_T yynewbytes;                                            \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / sizeof (*yyptr);                          \
      }                                                                 \
    while (0)

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, (Count) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYSIZE_T yyi;                         \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (0)
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  50
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   1306

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  149
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  111
/* YYNRULES -- Number of rules.  */
#define YYNRULES  301
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  562

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   392

#define YYTRANSLATE(YYX)                                                \
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, without out-of-bounds checking.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     144,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,   148,     2,     2,
     145,   146,    23,    21,   147,    22,    27,    24,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,   143,
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
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     1,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    25,    26,    28,    29,
      30,    31,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    48,    49,
      50,    51,    52,    53,    54,    55,    56,    57,    58,    59,
      60,    61,    62,    63,    64,    65,    66,    67,    68,    69,
      70,    71,    72,    73,    74,    75,    76,    77,    78,    79,
      80,    81,    82,    83,    84,    85,    86,    87,    88,    89,
      90,    91,    92,    93,    94,    95,    96,    97,    98,    99,
     100,   101,   102,   103,   104,   105,   106,   107,   108,   109,
     110,   111,   112,   113,   114,   115,   116,   117,   118,   119,
     120,   121,   122,   123,   124,   125,   126,   127,   128,   129,
     130,   131,   132,   133,   134,   135,   136,   137,   138,   139,
     140,   141,   142
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   646,   646,   650,   654,   658,   662,   665,   672,   675,
     678,   681,   684,   687,   690,   693,   696,   699,   705,   711,
     718,   724,   731,   740,   745,   754,   759,   764,   768,   774,
     779,   782,   785,   790,   793,   796,   799,   802,   805,   808,
     811,   814,   817,   829,   832,   835,   853,   873,   876,   879,
     884,   889,   895,   901,   910,   914,   920,   923,   928,   933,
     938,   945,   952,   956,   962,   965,   970,   973,   978,   981,
     986,   989,  1008,  1011,  1016,  1020,  1026,  1029,  1032,  1035,
    1040,  1043,  1046,  1053,  1058,  1069,  1074,  1079,  1083,  1087,
    1093,  1096,  1102,  1110,  1113,  1116,  1122,  1127,  1132,  1136,
    1142,  1146,  1149,  1154,  1157,  1162,  1167,  1172,  1176,  1182,
    1191,  1194,  1199,  1202,  1221,  1226,  1230,  1236,  1242,  1251,
    1256,  1264,  1270,  1276,  1279,  1282,  1287,  1290,  1295,  1299,
    1305,  1308,  1311,  1316,  1321,  1326,  1329,  1332,  1337,  1340,
    1343,  1346,  1349,  1352,  1355,  1358,  1363,  1366,  1370,  1375,
    1379,  1383,  1386,  1390,  1393,  1398,  1401,  1406,  1409,  1414,
    1418,  1424,  1427,  1432,  1435,  1440,  1443,  1448,  1451,  1470,
    1473,  1478,  1482,  1488,  1494,  1499,  1502,  1507,  1510,  1515,
    1518,  1523,  1526,  1531,  1532,  1535,  1540,  1541,  1544,  1549,
    1553,  1559,  1566,  1569,  1572,  1577,  1580,  1583,  1589,  1592,
    1597,  1602,  1611,  1616,  1625,  1630,  1633,  1638,  1641,  1646,
    1652,  1658,  1661,  1664,  1667,  1670,  1673,  1679,  1688,  1691,
    1696,  1699,  1704,  1707,  1712,  1715,  1718,  1721,  1725,  1729,
    1732,  1735,  1738,  1741,  1746,  1750,  1754,  1757,  1762,  1767,
    1771,  1777,  1780,  1785,  1789,  1795,  1800,  1804,  1810,  1815,
    1818,  1823,  1827,  1833,  1836,  1839,  1842,  1854,  1858,  1877,
    1890,  1905,  1908,  1911,  1914,  1917,  1920,  1925,  1929,  1935,
    1939,  1945,  1948,  1953,  1957,  1964,  1967,  1970,  1973,  1976,
    1979,  1982,  1985,  1988,  1991,  1996,  2007,  2010,  2015,  2018,
    2021,  2027,  2031,  2037,  2040,  2048,  2051,  2054,  2057,  2063,
    2068,  2073
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "TOKEN_COMMAND", "TOKEN_NAME",
  "TOKEN_STRING_SINGLE_QUOTED", "TOKEN_STRING_DOUBLE_QUOTED",
  "TOKEN_UNSIGNED_NUMVAL", "TOKEN_OR", "TOKEN_AND", "TOKEN_NOT",
  "TOKEN_EQ", "TOKEN_LT", "TOKEN_LEQ", "TOKEN_GT", "TOKEN_GEQ",
  "TOKEN_NEQ", "TOKEN_LIKE", "TOKEN_REGEXP", "TOKEN_BETWEEN", "TOKEN_IS",
  "'+'", "'-'", "'*'", "'/'", "UNARY_PLUS", "UNARY_MINUS", "'.'",
  "TOKEN_ALL", "TOKEN_UNION", "TOKEN_INTERSECT", "TOKEN_ADD",
  "TOKEN_ALTER", "TOKEN_AS", "TOKEN_ASC", "TOKEN_BIGINT", "TOKEN_BIT",
  "TOKEN_BITWEAVING", "TOKEN_BLOCKPROPERTIES", "TOKEN_BLOCKSAMPLE",
  "TOKEN_BLOOM_FILTER", "TOKEN_BY", "TOKEN_CASE", "TOKEN_CHARACTER",
  "TOKEN_CHECK", "TOKEN_COLUMN", "TOKEN_CONNECT", "TOKEN_CONSTRAINT",
  "TOKEN_COPY", "TOKEN_CREATE", "TOKEN_CSB_TREE", "TOKEN_CURRENT",
  "TOKEN_DATE", "TOKEN_DATETIME", "TOKEN_DAY", "TOKEN_DECIMAL",
  "TOKEN_DEFAULT", "TOKEN_DELETE", "TOKEN_DESC", "TOKEN_DISTINCT",
  "TOKEN_DOUBLE", "TOKEN_DROP", "TOKEN_ELSE", "TOKEN_END", "TOKEN_EOF",
  "TOKEN_EXISTS", "TOKEN_EXTRACT", "TOKEN_FALSE", "TOKEN_FIRST",
  "TOKEN_FLOAT", "TOKEN_FOLLOWING", "TOKEN_FOR", "TOKEN_FOREIGN",
  "TOKEN_FROM", "TOKEN_FULL", "TOKEN_GROUP", "TOKEN_HASH", "TOKEN_HAVING",
  "TOKEN_HOUR", "TOKEN_IN", "TOKEN_INDEX", "TOKEN_INNER", "TOKEN_INSERT",
  "TOKEN_INTEGER", "TOKEN_INTERVAL", "TOKEN_INTO", "TOKEN_JOIN",
  "TOKEN_KEY", "TOKEN_LAST", "TOKEN_LEFT", "TOKEN_LEX_ERROR",
  "TOKEN_LIMIT", "TOKEN_LONG", "TOKEN_MINUTE", "TOKEN_MONTH", "TOKEN_NULL",
  "TOKEN_NULLS", "TOKEN_OFF", "TOKEN_ON", "TOKEN_ORDER", "TOKEN_OUTER",
  "TOKEN_OVER", "TOKEN_PARTITION", "TOKEN_PARTITIONS", "TOKEN_PERCENT",
  "TOKEN_PRECEDING", "TOKEN_PRIMARY", "TOKEN_PRIORITY", "TOKEN_QUIT",
  "TOKEN_RANGE", "TOKEN_REAL", "TOKEN_REFERENCES", "TOKEN_RIGHT",
  "TOKEN_ROW", "TOKEN_ROWS", "TOKEN_ROW_DELIMITER", "TOKEN_SECOND",
  "TOKEN_SELECT", "TOKEN_SET", "TOKEN_SMA", "TOKEN_SMALLINT",
  "TOKEN_STDERR", "TOKEN_STDOUT", "TOKEN_SUBSTRING", "TOKEN_TABLE",
  "TOKEN_THEN", "TOKEN_TIME", "TOKEN_TIMESTAMP", "TOKEN_TO", "TOKEN_TRUE",
  "TOKEN_TUPLESAMPLE", "TOKEN_UNBOUNDED", "TOKEN_UNIQUE", "TOKEN_UPDATE",
  "TOKEN_USING", "TOKEN_VALUES", "TOKEN_VARCHAR", "TOKEN_WHEN",
  "TOKEN_WHERE", "TOKEN_WINDOW", "TOKEN_WITH", "TOKEN_YEAR",
  "TOKEN_YEARMONTH", "';'", "'\\n'", "'('", "')'", "','", "'%'", "$accept",
  "start", "sql_statement", "quit_statement", "alter_table_statement",
  "create_table_statement", "create_index_statement",
  "drop_table_statement", "column_def", "column_def_commalist",
  "data_type", "column_constraint_def", "column_constraint_def_list",
  "opt_column_constraint_def_list", "table_constraint_def",
  "table_constraint_def_commalist", "opt_table_constraint_def_commalist",
  "opt_column_list", "opt_block_properties", "opt_partition_clause",
  "partition_type", "key_value_list", "key_value", "key_string_value",
  "key_string_list", "key_integer_value", "key_bool_value", "index_type",
  "opt_index_properties", "insert_statement", "copy_statement",
  "copy_to_target", "opt_copy_params", "update_statement",
  "delete_statement", "assignment_list", "assignment_item",
  "set_operation_statement", "opt_priority_clause", "with_clause",
  "with_list", "with_list_element", "set_operation_union",
  "set_operation_intersect", "select_query", "opt_all_distinct",
  "selection", "selection_item_commalist", "selection_item", "from_clause",
  "subquery_expression", "opt_sample_clause", "join_type",
  "joined_table_reference", "table_reference", "table_reference_signature",
  "table_reference_signature_primary", "joined_table_reference_commalist",
  "opt_group_by_clause", "opt_having_clause", "opt_order_by_clause",
  "opt_limit_clause", "opt_window_clause", "window_declaration_list",
  "window_declaration", "window_definition", "opt_window_partition",
  "opt_window_order", "opt_window_frame", "frame_mode", "frame_preceding",
  "frame_following", "order_commalist", "order_item",
  "opt_order_direction", "opt_nulls_first", "opt_where_clause",
  "where_clause", "or_expression", "and_expression", "not_expression",
  "predicate_expression_base", "add_expression", "multiply_expression",
  "unary_expression", "expression_base", "function_call",
  "extract_function", "substr_function", "case_expression",
  "simple_when_clause_list", "simple_when_clause",
  "searched_when_clause_list", "searched_when_clause", "opt_else_clause",
  "expression_list", "literal_value", "datetime_unit",
  "literal_value_commalist", "literal_value_commalist_multiple",
  "attribute_ref", "attribute_ref_list", "comparison_operation",
  "unary_operation", "add_operation", "multiply_operation",
  "name_commalist", "any_name", "boolean_value", "command",
  "command_argument_list", YY_NULLPTR
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[NUM] -- (External) token number corresponding to the
   (internal) symbol number NUM (which must be that of a token).  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,    43,    45,    42,    47,   276,   277,    46,   278,   279,
     280,   281,   282,   283,   284,   285,   286,   287,   288,   289,
     290,   291,   292,   293,   294,   295,   296,   297,   298,   299,
     300,   301,   302,   303,   304,   305,   306,   307,   308,   309,
     310,   311,   312,   313,   314,   315,   316,   317,   318,   319,
     320,   321,   322,   323,   324,   325,   326,   327,   328,   329,
     330,   331,   332,   333,   334,   335,   336,   337,   338,   339,
     340,   341,   342,   343,   344,   345,   346,   347,   348,   349,
     350,   351,   352,   353,   354,   355,   356,   357,   358,   359,
     360,   361,   362,   363,   364,   365,   366,   367,   368,   369,
     370,   371,   372,   373,   374,   375,   376,   377,   378,   379,
     380,   381,   382,   383,   384,   385,   386,   387,   388,   389,
     390,   391,   392,    59,    10,    40,    41,    44,    37
};
# endif

#define YYPACT_NINF -338

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-338)))

#define YYTABLE_NINF -139

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     605,  -338,  -338,   -63,    58,   138,    33,   -14,  -338,    32,
    -338,    72,   281,   281,   143,    81,  -338,  -338,  -338,  -338,
    -338,  -338,  -338,  -338,  -338,  -338,   154,    25,   122,  -338,
     -18,   155,   281,  -338,  -338,    -8,    -3,   281,   281,   281,
     281,   281,  -338,  -338,   642,    77,    59,  -338,   183,    86,
    -338,  -338,  -338,   120,   156,    25,    72,   152,  -338,   120,
    -338,  -338,  -338,    73,    76,   140,   286,   140,   217,   166,
     185,  -338,   157,  -338,  -338,   328,   344,  -338,  -338,  -338,
     711,   239,  -338,   307,  -338,  -338,   253,  -338,  -338,   399,
    -338,  -338,  -338,  -338,   266,  -338,  -338,   272,   336,   807,
     427,   362,   289,  -338,  -338,   213,     3,  -338,  -338,   337,
    -338,  -338,  -338,  -338,  -338,   971,   -16,   281,   281,   294,
     281,    -8,   281,  -338,   120,   430,  -338,   252,   296,  -338,
    -338,  -338,   299,  -338,   140,  -338,   281,   281,   547,  -338,
    -338,   303,   281,  -338,  -338,  -338,   547,    47,   -15,  -338,
     434,  -338,   145,   145,  1040,   436,  -338,    26,    28,  -338,
      18,   185,  1040,  -338,  -338,   281,  1040,  -338,  -338,  -338,
    -338,  1040,    19,   344,  -338,   281,   350,   -35,  -338,   439,
    -338,   120,  -338,   199,  -338,   140,   120,   122,  -338,   281,
     176,   281,   281,   281,  -338,   306,  -338,   212,  1164,   876,
     294,   478,   444,   445,  -338,  -338,   315,   433,  1126,   308,
     214,    79,  1040,    -9,  -338,  1040,  -338,   393,   311,  -338,
    -338,  -338,  -338,  -338,  -338,   385,  -338,    68,   313,  -338,
    -338,    10,   261,   235,  -338,   314,   261,    70,   387,  -338,
    -338,     3,  -338,   361,  -338,  -338,   318,  1040,  -338,   341,
     219,   281,  -338,  1040,  -338,   281,  -338,  -338,  -338,   320,
     379,   381,   324,  -338,  -338,  -338,   222,  -338,  -338,  -338,
    -338,  -338,    38,   281,   338,   176,   281,  -338,   147,  -338,
    -338,    23,    61,   547,   547,    75,  -338,  -338,  -338,  -338,
    -338,  -338,  -338,  -338,  1040,   326,  1040,    29,  -338,   228,
     333,   345,  1040,    35,  -338,   416,   341,  -338,  -338,  1040,
     474,  -338,   171,   441,   281,  -338,  -338,   389,  -338,   390,
     391,   407,    18,  -338,   490,   491,   261,   460,   426,   463,
     359,   408,  -338,   230,  -338,  1040,  -338,   341,  -338,   547,
     363,   364,   281,  -338,   281,  -338,  -338,  -338,  -338,  -338,
    -338,  -338,   281,  -338,  -338,  -338,   232,   483,   193,  -338,
     365,   371,  -338,   420,   372,  1126,  -338,   429,   281,  -338,
    -338,   147,  -338,  -338,   445,  -338,  -338,  -338,  1040,   374,
     292,   807,  -338,   341,   428,  -338,  -338,  1126,  1126,   377,
     341,  1040,  -338,    63,    20,  -338,   484,  -338,  -338,  -338,
    -338,    34,   235,   422,   423,  -338,  1040,   547,   425,  1040,
    -338,   487,   181,  -338,   341,    40,   281,   281,   234,  -338,
     236,  -338,   281,  -338,  -338,  -338,  -338,   384,   176,   494,
     432,  -338,   547,  -338,  -338,   394,  -338,   298,   807,  -338,
    1040,   241,  -338,  -338,   243,  1126,   341,  -338,   528,  -338,
      34,    10,   438,  -338,  -338,   395,   444,   499,   450,   395,
    1040,  -338,  -338,  -338,   527,  -338,   249,   260,  -338,  -338,
    -338,   281,  -338,  -338,   403,   508,  -338,    44,   281,  1040,
     268,   341,  -338,  -338,   276,   404,   409,   547,  1040,   549,
     419,   412,  -338,   191,    91,   449,  -338,   278,   281,    12,
    -338,   417,   341,  -338,  -338,  -338,   261,   444,   412,  -338,
     281,  -338,   419,  -338,  1040,  -338,  -338,   468,   461,   452,
     462,   562,   281,  -338,   280,  -338,  -338,   431,  -338,  -338,
     539,  -338,  -338,   216,  -338,  -338,  -338,  -338,    95,   435,
    -338,   281,   440,  -338,  -338,   504,   464,   505,  -338,   281,
     282,   361,  -338,  -338,  -338,   284,   475,   446,  -338,   572,
    -338,  -338
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint16 yydefact[] =
{
       0,     6,   301,     0,     0,     0,     0,     0,     7,     0,
      18,   123,     0,     0,     0,     0,    15,     8,    10,    11,
      13,    14,     9,    17,    12,    16,     0,   112,   119,   121,
       0,   299,     0,   293,   294,     0,     0,     0,     0,     0,
       0,     0,   124,   125,     0,     0,   114,   115,     0,   157,
       1,     3,     2,     0,     0,   112,   123,     0,   110,     0,
       5,     4,   300,     0,     0,   103,     0,   103,     0,     0,
     198,    25,     0,   257,   254,     0,   285,   126,    40,    29,
       0,     0,    30,    31,    34,    36,     0,    37,    39,     0,
      41,   253,    35,    38,     0,    32,    33,     0,     0,     0,
       0,     0,   127,   128,   233,   132,   219,   221,   223,   226,
     229,   230,   231,   225,   224,     0,   271,     0,     0,     0,
       0,     0,     0,   111,     0,     0,   120,     0,     0,   100,
     102,   101,     0,    98,   103,    97,     0,     0,     0,   106,
     199,     0,     0,    94,   255,   256,     0,     0,   249,   246,
       0,    43,     0,   258,     0,     0,    44,     0,     0,   260,
       0,   198,     0,   286,   287,     0,     0,   131,   289,   290,
     288,     0,     0,     0,   222,     0,     0,   198,   108,     0,
     116,     0,   117,     0,   291,   103,     0,   118,   113,     0,
       0,     0,     0,     0,    96,    66,    27,     0,     0,     0,
       0,     0,   200,   202,   204,   206,     0,   224,     0,    93,
       0,     0,     0,   249,   243,     0,   247,     0,     0,   263,
     264,   265,   262,   266,   261,     0,   259,     0,     0,   134,
     232,     0,     0,   159,   148,   133,   153,   135,   161,   129,
     130,   218,   220,   175,   227,   272,     0,     0,   234,   251,
       0,     0,   105,     0,   158,     0,    99,    95,    19,     0,
       0,     0,     0,    20,    21,    22,     0,    74,    76,    77,
      78,    79,     0,     0,     0,    64,     0,    42,    56,   205,
     213,     0,     0,     0,     0,     0,   275,   277,   278,   279,
     280,   276,   281,   283,     0,     0,     0,     0,   267,     0,
       0,     0,     0,     0,   244,     0,   250,   242,    45,     0,
       0,    46,   138,   148,     0,   149,   155,   144,   139,   140,
     142,     0,     0,   152,     0,     0,   151,     0,   163,     0,
       0,   177,   235,     0,   236,     0,   107,   109,   292,     0,
       0,     0,     0,   104,     0,    81,    84,    82,   297,   298,
     296,   295,     0,    80,    85,   273,     0,   271,     0,    63,
      65,    68,    28,     0,     0,     0,    47,     0,     0,    49,
      55,    57,    26,   212,   201,   203,   282,   284,     0,     0,
       0,     0,   214,   211,     0,   210,   269,     0,     0,     0,
     248,     0,   241,     0,     0,   154,     0,   156,   145,   141,
     143,     0,   160,     0,     0,   150,     0,     0,   165,     0,
     228,     0,   179,   237,   252,     0,     0,     0,     0,    75,
       0,    67,     0,    86,    87,    88,    89,    90,     0,     0,
      70,    48,     0,    51,    50,     0,    54,     0,     0,   216,
       0,     0,   209,   268,     0,     0,   245,   238,     0,   239,
       0,     0,     0,   136,   137,   162,   164,     0,   167,   176,
       0,   182,   181,   174,     0,    61,     0,     0,    58,    83,
     274,     0,    24,    62,     0,     0,    23,     0,     0,     0,
       0,   207,   215,   270,     0,     0,     0,     0,     0,     0,
     169,   178,   189,   192,     0,     0,    59,     0,     0,     0,
      52,     0,   208,   217,    92,   240,     0,   146,   166,   168,
       0,   122,   170,   171,     0,   193,   194,   195,     0,     0,
       0,     0,     0,    91,     0,    72,    73,     0,    53,   147,
       0,   172,   190,     0,   191,   183,   185,   184,     0,     0,
      69,     0,     0,   196,   197,     0,     0,     0,   180,     0,
       0,   175,   186,   188,   187,     0,     0,     0,    60,     0,
     173,    71
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -338,  -338,  -338,  -338,  -338,  -338,  -338,  -338,  -157,  -338,
     383,   215,  -338,  -338,  -269,  -338,  -338,  -338,  -338,  -338,
    -338,  -217,   247,  -338,  -338,  -338,  -338,  -338,  -338,  -338,
    -338,    27,   -38,  -338,  -338,  -338,   342,  -338,   529,  -338,
    -338,   469,   240,   470,   -42,   540,  -338,  -338,   447,  -338,
    -101,  -338,  -338,  -140,  -221,  -229,   -11,  -338,  -338,  -338,
    -338,  -338,  -338,  -338,    85,    52,  -338,  -338,  -338,  -338,
    -338,  -338,   123,    96,  -338,  -338,   -66,  -338,  -143,   332,
     334,   418,   -39,   453,   451,   506,  -145,  -338,  -338,  -338,
    -338,   411,  -338,   477,   413,  -228,  -195,   476,  -337,  -338,
    -134,  -338,  -338,  -338,  -338,  -338,  -141,    -4,  -338,  -338,
    -338
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    14,    15,    16,    17,    18,    19,    20,   196,   197,
     100,   370,   371,   372,   263,   360,   361,   274,   430,   476,
     527,   266,   267,   268,   269,   270,   271,   427,   472,    21,
      22,    65,   133,    23,    24,   177,   178,    25,    58,    26,
      46,    47,   157,    28,    29,    44,   101,   102,   103,   161,
     104,   326,   321,   312,   234,   315,   316,   235,   328,   408,
     458,   490,   511,   512,   513,   330,   331,   412,   463,   464,
     521,   548,   491,   492,   517,   534,   139,   140,   202,   203,
     204,   205,   206,   106,   107,   108,   109,   110,   111,   112,
     213,   214,   148,   149,   217,   250,   113,   225,   299,   209,
     114,   356,   296,   115,   166,   171,   183,   116,   354,    30,
      31
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      36,   210,    48,   211,   207,   105,   359,   323,    45,    49,
     313,   175,   207,   298,    33,   236,    34,   126,   182,   333,
     233,    56,    33,    33,    34,    34,   168,   169,    63,   135,
     143,   283,   258,    68,    69,    70,    71,    72,    33,   384,
      34,   147,    33,   345,    34,   346,    60,   215,   283,   163,
     164,   444,   283,   215,    56,    56,   163,   164,   281,   232,
     158,    32,    33,    67,    34,   207,   347,   207,   163,   164,
      66,   285,   286,   287,   288,   289,   290,   291,   292,   293,
     294,   129,   163,   164,   163,   164,   236,   283,   525,   163,
     164,   448,   376,   377,   378,   238,   194,   405,   518,   280,
      42,   167,   545,   138,   127,   348,    39,    48,   484,   324,
      40,   252,   251,   179,    49,   227,   184,    41,   186,   362,
      64,   526,   146,   105,   385,    64,    61,    11,   212,   176,
     232,    43,   195,   198,   128,   349,   350,   249,   184,   355,
     295,   310,   519,    50,   257,    51,   546,   256,   185,   207,
     207,   170,    59,   441,   379,   231,   237,   363,    62,   473,
     391,   240,   282,   231,   243,    57,   449,   351,   244,   373,
     433,   245,   229,   303,   230,    11,   306,   236,   455,   451,
     452,   459,   402,   352,   212,   198,   465,   264,   265,   272,
     500,   364,   443,   298,   382,   117,   415,   130,   131,   219,
     325,   418,    53,   365,   302,   207,   118,   230,   249,   447,
     480,   420,   163,   164,   337,   176,   119,    33,    37,    34,
     259,   232,   520,   220,    52,   515,   547,   237,    49,   486,
     423,   120,    49,   424,   163,   164,    54,    11,   221,   222,
      27,   122,   366,   425,    35,   317,   165,   179,   260,   516,
     298,   338,   318,   367,   497,   380,   236,   383,   368,   125,
     319,   223,    38,   390,   456,    33,    55,    34,   353,   357,
     393,    11,   198,   207,    11,   466,   467,   529,   439,   369,
     132,   524,   261,   320,   543,    33,   224,    34,   470,   477,
     461,   134,   141,   121,   314,   462,   414,   189,   207,   190,
     232,   440,   142,   397,   544,   236,   236,   479,   262,   317,
      49,   137,   426,   163,   164,   136,   318,   395,   237,   163,
     164,  -138,    49,   138,   319,   285,   286,   287,   288,   289,
     290,   291,   292,   293,   294,   144,   163,   164,   184,   437,
     272,   191,   249,   192,   507,   254,   255,   320,   184,   232,
     232,   145,   446,   207,    33,    73,    34,    74,   275,   276,
     301,   255,   163,   164,   435,   334,   335,   249,   343,   344,
     249,    75,    76,   246,   386,   387,   413,   335,   421,   422,
     468,   255,   469,   255,   150,    78,    79,   482,   335,   483,
     387,   151,    80,    81,   295,   495,   255,   237,   152,   249,
     550,   481,    82,    83,   153,    84,   496,   255,   555,   247,
      85,   154,   184,   184,   503,   335,    86,   155,   357,    87,
     156,   493,   504,   387,   523,   344,   540,   344,   556,   255,
     558,   255,   159,    88,    89,   160,   162,   188,   172,   181,
     502,   218,    90,   228,   193,    91,   237,   237,   208,   493,
     253,   273,   283,   297,   284,   300,   307,   308,   309,   311,
      92,   322,   327,   329,   332,   339,   340,   272,   341,   342,
      93,   381,   358,    94,   501,   493,    95,    96,   388,   392,
     389,   394,    33,    73,    34,    74,    97,   396,   199,   398,
     399,   400,    98,   401,   272,    99,   248,   403,   404,    75,
      76,   406,    49,   407,   409,   410,   530,   411,   416,   417,
     175,   429,   428,    78,    79,   431,   434,   432,   539,   438,
      80,    81,   445,   442,   457,   450,   453,   454,   460,   471,
      82,    83,   474,    84,   475,   485,   487,   184,    85,   478,
     488,   489,   335,   200,    86,   184,   494,    87,   498,   499,
     505,    33,    73,    34,    74,   506,   509,   199,   510,   514,
     522,    88,    89,   528,   533,   536,   535,   537,    75,    76,
      90,   538,   542,    91,   552,   554,   541,   553,   559,   561,
     549,   278,    78,    79,   123,   551,   436,   180,    92,    80,
      81,   419,   560,   336,   187,    11,   124,   531,    93,    82,
      83,    94,    84,   557,    95,    96,     1,    85,     2,   239,
     532,   508,   200,    86,    97,   374,    87,   279,   375,   241,
      98,   174,   242,   201,   304,   216,   305,     0,     0,   226,
      88,    89,     0,     0,     0,     0,     0,     3,     0,    90,
       0,     0,    91,     0,     0,     0,    33,    73,    34,    74,
       0,     0,     0,     4,     5,     0,     0,    92,     0,     0,
       0,     0,     6,    75,    76,    77,     7,    93,     0,     8,
      94,     0,     0,    95,    96,     0,     0,    78,    79,     0,
       0,     0,     0,    97,    80,    81,     0,     9,     0,    98,
       0,     0,   201,     0,    82,    83,     0,    84,     0,     0,
       0,     0,    85,     0,     0,     0,     0,     0,    86,     0,
       0,    87,     0,    10,     0,    33,    73,    34,    74,     0,
       0,     0,    11,     0,     0,    88,    89,     0,     0,     0,
       0,     0,    75,    76,    90,     0,     0,    91,    12,     0,
       0,     0,     0,     0,     0,    13,    78,    79,     0,     0,
       0,     0,    92,    80,    81,     0,     0,     0,     0,     0,
       0,     0,    93,    82,    83,    94,    84,     0,    95,    96,
       0,    85,     0,     0,     0,     0,     0,    86,    97,     0,
      87,     0,     0,     0,    98,     0,     0,    99,     0,     0,
       0,     0,     0,     0,    88,    89,     0,     0,     0,     0,
       0,     0,     0,    90,     0,     0,    91,     0,     0,     0,
       0,    33,    73,    34,    74,     0,     0,     0,     0,     0,
       0,    92,     0,     0,     0,     0,     0,     0,    75,    76,
       0,    93,     0,     0,    94,     0,     0,    95,    96,     0,
       0,     0,    78,    79,     0,     0,     0,    97,   146,    80,
      81,     0,     0,    98,     0,     0,    99,     0,     0,    82,
      83,     0,    84,     0,     0,     0,     0,    85,     0,     0,
       0,     0,     0,    86,     0,     0,    87,     0,     0,     0,
      33,    73,    34,    74,     0,     0,     0,     0,     0,     0,
      88,    89,     0,     0,     0,     0,     0,    75,    76,    90,
       0,     0,    91,     0,     0,     0,     0,     0,     0,     0,
       0,    78,    79,     0,     0,     0,     0,    92,    80,    81,
       0,     0,     0,     0,    11,     0,     0,    93,    82,    83,
      94,    84,     0,    95,    96,     0,    85,     0,     0,     0,
       0,   200,    86,    97,     0,    87,     0,     0,     0,    98,
       0,     0,    99,     0,     0,     0,     0,     0,     0,    88,
      89,     0,     0,     0,     0,     0,     0,     0,    90,     0,
       0,    91,     0,     0,     0,    33,    73,    34,    74,     0,
       0,     0,     0,     0,     0,     0,    92,     0,     0,     0,
       0,     0,    75,   173,     0,     0,    93,     0,     0,    94,
       0,     0,    95,    96,     0,     0,    78,    79,     0,     0,
       0,     0,    97,    80,    81,     0,     0,     0,    98,     0,
       0,   201,     0,    82,    83,     0,    84,     0,     0,     0,
       0,    85,     0,     0,     0,     0,     0,    86,     0,     0,
      87,     0,     0,     0,    33,    73,    34,    74,     0,     0,
       0,     0,     0,     0,    88,    89,     0,     0,     0,     0,
       0,    75,    76,    90,     0,     0,    91,     0,     0,     0,
       0,     0,     0,     0,     0,    78,    79,     0,     0,     0,
       0,    92,    80,    81,     0,     0,     0,     0,     0,     0,
       0,    93,    82,    83,    94,    84,     0,    95,    96,     0,
      85,     0,     0,     0,     0,     0,    86,    97,     0,    87,
       0,     0,     0,    98,     0,     0,    99,     0,     0,     0,
       0,     0,     0,    88,    89,     0,     0,     0,     0,     0,
       0,    73,    90,    74,     0,    91,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    75,   173,     0,
      92,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      93,    78,    79,    94,     0,     0,    95,    96,     0,    81,
       0,     0,     0,     0,     0,     0,    97,     0,    82,    83,
       0,    84,    98,     0,     0,    99,    85,     0,     0,     0,
       0,     0,     0,     0,     0,    87,     0,     0,     0,    78,
      79,     0,     0,     0,     0,     0,     0,    81,     0,    88,
      89,     0,     0,     0,     0,     0,    82,    83,    90,    84,
       0,    91,     0,     0,    85,     0,     0,     0,     0,     0,
       0,     0,     0,    87,     0,     0,    92,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    93,    88,   277,     0,
       0,     0,    95,    96,     0,     0,    90,     0,     0,     0,
       0,     0,    97,     0,     0,     0,     0,     0,    98,     0,
       0,     0,     0,     0,    92,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    93,     0,     0,     0,     0,     0,
      95,    96,     0,     0,     0,     0,     0,     0,     0,     0,
      97,     0,     0,     0,     0,     0,    98
};

static const yytype_int16 yycheck[] =
{
       4,   142,    13,   146,   138,    44,   275,   236,    12,    13,
     231,    27,   146,   208,     4,   160,     6,    59,   119,   247,
     160,    29,     4,     4,     6,     6,    23,    24,    32,    67,
      72,     8,   189,    37,    38,    39,    40,    41,     4,    10,
       6,    80,     4,     5,     6,     7,    64,    62,     8,    21,
      22,   388,     8,    62,    29,    29,    21,    22,   201,   160,
      99,   124,     4,    36,     6,   199,    28,   201,    21,    22,
      73,    10,    11,    12,    13,    14,    15,    16,    17,    18,
      19,     5,    21,    22,    21,    22,   231,     8,    76,    21,
      22,    71,    17,    18,    19,   161,   134,   326,     7,   200,
      28,   105,     7,   138,    31,    67,    73,   118,   445,    39,
     124,   177,   147,   117,   118,   154,   120,    85,   122,   276,
     128,   109,   137,   162,    95,   128,   144,   117,   137,   145,
     231,    59,   136,   137,    61,    97,    98,   176,   142,   273,
      79,    73,    51,     0,   186,    64,    51,   185,   121,   283,
     284,   148,    30,   381,    79,   145,   160,    10,     3,   428,
     125,   165,   201,   145,   145,   140,   146,   129,   172,   146,
     365,   175,   146,   212,   146,   117,   215,   322,   406,   145,
     401,   409,   322,   145,   137,   189,   146,   191,   192,   193,
     146,    44,   387,   388,   295,   118,   339,   121,   122,    54,
     130,   342,    48,    56,   125,   339,   147,   146,   247,   146,
     438,   352,    21,    22,   253,   145,    33,     4,    80,     6,
      44,   322,   131,    78,   143,    34,   131,   231,   232,   450,
      37,   145,   236,    40,    21,    22,    82,   117,    93,    94,
       0,    85,    95,    50,     4,    74,    33,   251,    72,    58,
     445,   255,    81,   106,   471,   294,   401,   296,   111,   107,
      89,   116,   124,   302,   407,     4,    26,     6,   272,   273,
     309,   117,   276,   407,   117,   416,   417,   506,   379,   132,
     140,   498,   106,   112,    68,     4,   141,     6,   422,   432,
     109,     5,   135,    53,    33,   114,   335,    45,   432,    47,
     401,     9,   145,   314,    88,   450,   451,     9,   132,    74,
     314,   145,   119,    21,    22,    98,    81,   146,   322,    21,
      22,    86,   326,   138,    89,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,     7,    21,    22,   342,   378,
     344,    45,   381,    47,   487,   146,   147,   112,   352,   450,
     451,     7,   391,   487,     4,     5,     6,     7,   146,   147,
     146,   147,    21,    22,   368,   146,   147,   406,   146,   147,
     409,    21,    22,    23,   146,   147,   146,   147,   146,   147,
     146,   147,   146,   147,   145,    35,    36,   146,   147,   146,
     147,    84,    42,    43,    79,   146,   147,   401,   145,   438,
     541,   440,    52,    53,     5,    55,   146,   147,   549,    59,
      60,   145,   416,   417,   146,   147,    66,   145,   422,    69,
      84,   460,   146,   147,   146,   147,   146,   147,   146,   147,
     146,   147,     5,    83,    84,    73,   147,     7,   101,   145,
     479,     7,    92,     7,   145,    95,   450,   451,   145,   488,
      11,   145,     8,    20,     9,   147,    63,   146,    73,   146,
     110,   147,    75,   102,   146,   145,    87,   471,    87,   145,
     120,   145,   134,   123,   478,   514,   126,   127,   145,    63,
     135,     7,     4,     5,     6,     7,   136,    46,    10,   100,
     100,   100,   142,    86,   498,   145,   146,     7,     7,    21,
      22,    41,   506,    77,    41,   146,   510,    99,   145,   145,
      27,   140,   147,    35,    36,    95,    87,   145,   522,   145,
      42,    43,   145,    95,    99,    41,   104,   104,    41,   145,
      52,    53,    38,    55,   102,     7,    98,   541,    60,   145,
      41,    91,   147,    65,    66,   549,    19,    69,   145,    41,
     146,     4,     5,     6,     7,   146,     7,    10,   139,   147,
     111,    83,    84,   146,    96,   113,   105,   105,    21,    22,
      92,     9,    33,    95,    70,    70,   145,   113,   103,     7,
     145,   198,    35,    36,    55,   145,   371,   118,   110,    42,
      43,   344,   146,   251,   124,   117,    56,   512,   120,    52,
      53,   123,    55,   551,   126,   127,     1,    60,     3,   162,
     514,   488,    65,    66,   136,   283,    69,   199,   284,   166,
     142,   115,   171,   145,   213,   148,   213,    -1,    -1,   153,
      83,    84,    -1,    -1,    -1,    -1,    -1,    32,    -1,    92,
      -1,    -1,    95,    -1,    -1,    -1,     4,     5,     6,     7,
      -1,    -1,    -1,    48,    49,    -1,    -1,   110,    -1,    -1,
      -1,    -1,    57,    21,    22,    23,    61,   120,    -1,    64,
     123,    -1,    -1,   126,   127,    -1,    -1,    35,    36,    -1,
      -1,    -1,    -1,   136,    42,    43,    -1,    82,    -1,   142,
      -1,    -1,   145,    -1,    52,    53,    -1,    55,    -1,    -1,
      -1,    -1,    60,    -1,    -1,    -1,    -1,    -1,    66,    -1,
      -1,    69,    -1,   108,    -1,     4,     5,     6,     7,    -1,
      -1,    -1,   117,    -1,    -1,    83,    84,    -1,    -1,    -1,
      -1,    -1,    21,    22,    92,    -1,    -1,    95,   133,    -1,
      -1,    -1,    -1,    -1,    -1,   140,    35,    36,    -1,    -1,
      -1,    -1,   110,    42,    43,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   120,    52,    53,   123,    55,    -1,   126,   127,
      -1,    60,    -1,    -1,    -1,    -1,    -1,    66,   136,    -1,
      69,    -1,    -1,    -1,   142,    -1,    -1,   145,    -1,    -1,
      -1,    -1,    -1,    -1,    83,    84,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    92,    -1,    -1,    95,    -1,    -1,    -1,
      -1,     4,     5,     6,     7,    -1,    -1,    -1,    -1,    -1,
      -1,   110,    -1,    -1,    -1,    -1,    -1,    -1,    21,    22,
      -1,   120,    -1,    -1,   123,    -1,    -1,   126,   127,    -1,
      -1,    -1,    35,    36,    -1,    -1,    -1,   136,   137,    42,
      43,    -1,    -1,   142,    -1,    -1,   145,    -1,    -1,    52,
      53,    -1,    55,    -1,    -1,    -1,    -1,    60,    -1,    -1,
      -1,    -1,    -1,    66,    -1,    -1,    69,    -1,    -1,    -1,
       4,     5,     6,     7,    -1,    -1,    -1,    -1,    -1,    -1,
      83,    84,    -1,    -1,    -1,    -1,    -1,    21,    22,    92,
      -1,    -1,    95,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    35,    36,    -1,    -1,    -1,    -1,   110,    42,    43,
      -1,    -1,    -1,    -1,   117,    -1,    -1,   120,    52,    53,
     123,    55,    -1,   126,   127,    -1,    60,    -1,    -1,    -1,
      -1,    65,    66,   136,    -1,    69,    -1,    -1,    -1,   142,
      -1,    -1,   145,    -1,    -1,    -1,    -1,    -1,    -1,    83,
      84,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    92,    -1,
      -1,    95,    -1,    -1,    -1,     4,     5,     6,     7,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   110,    -1,    -1,    -1,
      -1,    -1,    21,    22,    -1,    -1,   120,    -1,    -1,   123,
      -1,    -1,   126,   127,    -1,    -1,    35,    36,    -1,    -1,
      -1,    -1,   136,    42,    43,    -1,    -1,    -1,   142,    -1,
      -1,   145,    -1,    52,    53,    -1,    55,    -1,    -1,    -1,
      -1,    60,    -1,    -1,    -1,    -1,    -1,    66,    -1,    -1,
      69,    -1,    -1,    -1,     4,     5,     6,     7,    -1,    -1,
      -1,    -1,    -1,    -1,    83,    84,    -1,    -1,    -1,    -1,
      -1,    21,    22,    92,    -1,    -1,    95,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    35,    36,    -1,    -1,    -1,
      -1,   110,    42,    43,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   120,    52,    53,   123,    55,    -1,   126,   127,    -1,
      60,    -1,    -1,    -1,    -1,    -1,    66,   136,    -1,    69,
      -1,    -1,    -1,   142,    -1,    -1,   145,    -1,    -1,    -1,
      -1,    -1,    -1,    83,    84,    -1,    -1,    -1,    -1,    -1,
      -1,     5,    92,     7,    -1,    95,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    21,    22,    -1,
     110,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     120,    35,    36,   123,    -1,    -1,   126,   127,    -1,    43,
      -1,    -1,    -1,    -1,    -1,    -1,   136,    -1,    52,    53,
      -1,    55,   142,    -1,    -1,   145,    60,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    69,    -1,    -1,    -1,    35,
      36,    -1,    -1,    -1,    -1,    -1,    -1,    43,    -1,    83,
      84,    -1,    -1,    -1,    -1,    -1,    52,    53,    92,    55,
      -1,    95,    -1,    -1,    60,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    69,    -1,    -1,   110,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   120,    83,    84,    -1,
      -1,    -1,   126,   127,    -1,    -1,    92,    -1,    -1,    -1,
      -1,    -1,   136,    -1,    -1,    -1,    -1,    -1,   142,    -1,
      -1,    -1,    -1,    -1,   110,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   120,    -1,    -1,    -1,    -1,    -1,
     126,   127,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     136,    -1,    -1,    -1,    -1,    -1,   142
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint16 yystos[] =
{
       0,     1,     3,    32,    48,    49,    57,    61,    64,    82,
     108,   117,   133,   140,   150,   151,   152,   153,   154,   155,
     156,   178,   179,   182,   183,   186,   188,   191,   192,   193,
     258,   259,   124,     4,     6,   191,   256,    80,   124,    73,
     124,    85,    28,    59,   194,   256,   189,   190,   205,   256,
       0,    64,   143,    48,    82,   191,    29,   140,   187,    30,
      64,   144,     3,   256,   128,   180,    73,   180,   256,   256,
     256,   256,   256,     5,     7,    21,    22,    23,    35,    36,
      42,    43,    52,    53,    55,    60,    66,    69,    83,    84,
      92,    95,   110,   120,   123,   126,   127,   136,   142,   145,
     159,   195,   196,   197,   199,   231,   232,   233,   234,   235,
     236,   237,   238,   245,   249,   252,   256,   118,   147,    33,
     145,   191,    85,   187,   194,   107,   193,    31,    61,     5,
     121,   122,   140,   181,     5,   181,    98,   145,   138,   225,
     226,   135,   145,   193,     7,     7,   137,   231,   241,   242,
     145,    84,   145,     5,   145,   145,    84,   191,   231,     5,
      73,   198,   147,    21,    22,    33,   253,   256,    23,    24,
     148,   254,   101,    22,   234,    27,   145,   184,   185,   256,
     190,   145,   199,   255,   256,   180,   256,   192,     7,    45,
      47,    45,    47,   145,   181,   256,   157,   158,   256,    10,
      65,   145,   227,   228,   229,   230,   231,   249,   145,   248,
     255,   227,   137,   239,   240,    62,   242,   243,     7,    54,
      78,    93,    94,   116,   141,   246,   246,   231,     7,   146,
     146,   145,   199,   202,   203,   206,   235,   256,   225,   197,
     256,   232,   233,   145,   256,   256,    23,    59,   146,   231,
     244,   147,   225,    11,   146,   147,   181,   193,   157,    44,
      72,   106,   132,   163,   256,   256,   170,   171,   172,   173,
     174,   175,   256,   145,   166,   146,   147,    84,   159,   230,
     199,   227,   231,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    79,   251,    20,   245,   247,
     147,   146,   125,   231,   240,   243,   231,    63,   146,    73,
      73,   146,   202,   203,    33,   204,   205,    74,    81,    89,
     112,   201,   147,   204,    39,   130,   200,    75,   207,   102,
     214,   215,   146,   244,   146,   147,   185,   231,   256,   145,
      87,    87,   145,   146,   147,     5,     7,    28,    67,    97,
      98,   129,   145,   256,   257,   249,   250,   256,   134,   163,
     164,   165,   157,    10,    44,    56,    95,   106,   111,   132,
     160,   161,   162,   146,   228,   229,    17,    18,    19,    79,
     231,   145,   199,   231,    10,    95,   146,   147,   145,   135,
     231,   125,    63,   231,     7,   146,    46,   205,   100,   100,
     100,    86,   202,     7,     7,   204,    41,    77,   208,    41,
     146,    99,   216,   146,   231,   227,   145,   145,   255,   171,
     255,   146,   147,    37,    40,    50,   119,   176,   147,   140,
     167,    95,   145,   245,    87,   256,   160,   231,   145,   199,
       9,   244,    95,   245,   247,   145,   231,   146,    71,   146,
      41,   145,   203,   104,   104,   244,   227,    99,   209,   244,
      41,   109,   114,   217,   218,   146,   255,   255,   146,   146,
     249,   145,   177,   163,    38,   102,   168,   227,   145,     9,
     244,   231,   146,   146,   247,     7,   203,    98,    41,    91,
     210,   221,   222,   231,    19,   146,   146,   170,   145,    41,
     146,   256,   231,   146,   146,   146,   146,   227,   221,     7,
     139,   211,   212,   213,   147,    34,    58,   223,     7,    51,
     131,   219,   111,   146,   170,    76,   109,   169,   146,   204,
     256,   213,   222,    96,   224,   105,   113,   105,     9,   256,
     146,   145,    33,    68,    88,     7,    51,   131,   220,   145,
     255,   145,    70,   113,    70,   255,   146,   214,   146,   103,
     146,     7
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint16 yyr1[] =
{
       0,   149,   150,   150,   150,   150,   150,   150,   151,   151,
     151,   151,   151,   151,   151,   151,   151,   151,   152,   153,
     153,   153,   153,   154,   155,   156,   157,   158,   158,   159,
     159,   159,   159,   159,   159,   159,   159,   159,   159,   159,
     159,   159,   159,   159,   159,   159,   159,   160,   160,   160,
     160,   160,   160,   160,   161,   161,   162,   162,   163,   163,
     163,   163,   164,   164,   165,   165,   166,   166,   167,   167,
     168,   168,   169,   169,   170,   170,   171,   171,   171,   171,
     172,   172,   172,   173,   174,   175,   176,   176,   176,   176,
     177,   177,   178,   178,   178,   178,   179,   179,   179,   179,
     180,   180,   180,   181,   181,   182,   183,   184,   184,   185,
     186,   186,   187,   187,   188,   189,   189,   190,   191,   191,
     192,   192,   193,   194,   194,   194,   195,   195,   196,   196,
     197,   197,   197,   198,   199,   200,   200,   200,   201,   201,
     201,   201,   201,   201,   201,   201,   202,   202,   202,   203,
     203,   203,   203,   203,   203,   204,   204,   205,   205,   206,
     206,   207,   207,   208,   208,   209,   209,   210,   210,   211,
     211,   212,   212,   213,   214,   215,   215,   216,   216,   217,
     217,   218,   218,   219,   219,   219,   220,   220,   220,   221,
     221,   222,   223,   223,   223,   224,   224,   224,   225,   225,
     226,   227,   227,   228,   228,   229,   229,   230,   230,   230,
     230,   230,   230,   230,   230,   230,   230,   230,   231,   231,
     232,   232,   233,   233,   234,   234,   234,   234,   234,   234,
     234,   234,   234,   234,   235,   235,   235,   235,   236,   237,
     237,   238,   238,   239,   239,   240,   241,   241,   242,   243,
     243,   244,   244,   245,   245,   245,   245,   245,   245,   245,
     245,   246,   246,   246,   246,   246,   246,   247,   247,   248,
     248,   249,   249,   250,   250,   251,   251,   251,   251,   251,
     251,   251,   251,   251,   251,   252,   253,   253,   254,   254,
     254,   255,   255,   256,   256,   257,   257,   257,   257,   258,
     259,   259
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     2,     2,     2,     2,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     6,
       6,     6,     6,     9,     9,     3,     3,     1,     3,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     2,     2,     4,     4,     1,     2,     1,
       2,     2,     4,     5,     2,     1,     0,     1,     4,     5,
      10,     4,     3,     1,     0,     1,     0,     3,     0,     5,
       0,     8,     1,     1,     1,     3,     1,     1,     1,     1,
       2,     2,     2,     4,     2,     2,     1,     1,     1,     1,
       0,     3,    10,     5,     4,     5,     5,     4,     4,     5,
       2,     2,     2,     0,     4,     5,     4,     3,     1,     3,
       2,     3,     0,     3,     2,     1,     3,     3,     4,     1,
       3,     1,    10,     0,     1,     1,     1,     1,     1,     3,
       3,     2,     1,     2,     3,     0,     3,     3,     0,     1,
       1,     2,     1,     2,     1,     2,     6,     7,     1,     2,
       3,     2,     2,     1,     3,     1,     2,     1,     4,     1,
       3,     0,     3,     0,     2,     0,     3,     0,     2,     0,
       1,     1,     2,     6,     3,     0,     3,     0,     3,     0,
       5,     1,     1,     2,     2,     2,     2,     2,     2,     1,
       3,     3,     0,     1,     1,     0,     2,     2,     0,     1,
       2,     3,     1,     3,     1,     2,     1,     5,     6,     4,
       3,     3,     3,     2,     3,     5,     4,     6,     3,     1,
       3,     1,     2,     1,     1,     1,     1,     3,     5,     1,
       1,     1,     3,     1,     3,     4,     4,     5,     6,     6,
       8,     5,     4,     1,     2,     4,     1,     2,     4,     0,
       2,     1,     3,     1,     1,     2,     2,     1,     2,     3,
       2,     1,     1,     1,     1,     1,     1,     1,     3,     3,
       5,     1,     3,     1,     3,     1,     1,     1,     1,     1,
       1,     1,     2,     1,     2,     1,     1,     1,     1,     1,
       1,     1,     3,     1,     1,     1,     1,     1,     1,     2,
       2,     0
};


#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)
#define YYEMPTY         (-2)
#define YYEOF           0

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                  \
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
      yyerror (&yylloc, yyscanner, parsedStatement, YY_("syntax error: cannot back up")); \
      YYERROR;                                                  \
    }                                                           \
while (0)

/* Error token number */
#define YYTERROR        1
#define YYERRCODE       256


/* YYLLOC_DEFAULT -- Set CURRENT to span from RHS[1] to RHS[N].
   If N is 0, then set CURRENT to the empty location which ends
   the previous symbol: RHS[0] (always defined).  */

#ifndef YYLLOC_DEFAULT
# define YYLLOC_DEFAULT(Current, Rhs, N)                                \
    do                                                                  \
      if (N)                                                            \
        {                                                               \
          (Current).first_line   = YYRHSLOC (Rhs, 1).first_line;        \
          (Current).first_column = YYRHSLOC (Rhs, 1).first_column;      \
          (Current).last_line    = YYRHSLOC (Rhs, N).last_line;         \
          (Current).last_column  = YYRHSLOC (Rhs, N).last_column;       \
        }                                                               \
      else                                                              \
        {                                                               \
          (Current).first_line   = (Current).last_line   =              \
            YYRHSLOC (Rhs, 0).last_line;                                \
          (Current).first_column = (Current).last_column =              \
            YYRHSLOC (Rhs, 0).last_column;                              \
        }                                                               \
    while (0)
#endif

#define YYRHSLOC(Rhs, K) ((Rhs)[K])


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


/* YY_LOCATION_PRINT -- Print the location on the stream.
   This macro was not mandated originally: define only if we know
   we won't break user code: when these are the locations we know.  */

#ifndef YY_LOCATION_PRINT
# if defined YYLTYPE_IS_TRIVIAL && YYLTYPE_IS_TRIVIAL

/* Print *YYLOCP on YYO.  Private, do not rely on its existence. */

YY_ATTRIBUTE_UNUSED
static unsigned
yy_location_print_ (FILE *yyo, YYLTYPE const * const yylocp)
{
  unsigned res = 0;
  int end_col = 0 != yylocp->last_column ? yylocp->last_column - 1 : 0;
  if (0 <= yylocp->first_line)
    {
      res += YYFPRINTF (yyo, "%d", yylocp->first_line);
      if (0 <= yylocp->first_column)
        res += YYFPRINTF (yyo, ".%d", yylocp->first_column);
    }
  if (0 <= yylocp->last_line)
    {
      if (yylocp->first_line < yylocp->last_line)
        {
          res += YYFPRINTF (yyo, "-%d", yylocp->last_line);
          if (0 <= end_col)
            res += YYFPRINTF (yyo, ".%d", end_col);
        }
      else if (0 <= end_col && yylocp->first_column < end_col)
        res += YYFPRINTF (yyo, "-%d", end_col);
    }
  return res;
 }

#  define YY_LOCATION_PRINT(File, Loc)          \
  yy_location_print_ (File, &(Loc))

# else
#  define YY_LOCATION_PRINT(File, Loc) ((void) 0)
# endif
#endif


# define YY_SYMBOL_PRINT(Title, Type, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Type, Value, Location, yyscanner, parsedStatement); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*----------------------------------------.
| Print this symbol's value on YYOUTPUT.  |
`----------------------------------------*/

static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep, YYLTYPE const * const yylocationp, yyscan_t yyscanner, quickstep::ParseStatement **parsedStatement)
{
  FILE *yyo = yyoutput;
  YYUSE (yyo);
  YYUSE (yylocationp);
  YYUSE (yyscanner);
  YYUSE (parsedStatement);
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# endif
  YYUSE (yytype);
}


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep, YYLTYPE const * const yylocationp, yyscan_t yyscanner, quickstep::ParseStatement **parsedStatement)
{
  YYFPRINTF (yyoutput, "%s %s (",
             yytype < YYNTOKENS ? "token" : "nterm", yytname[yytype]);

  YY_LOCATION_PRINT (yyoutput, *yylocationp);
  YYFPRINTF (yyoutput, ": ");
  yy_symbol_value_print (yyoutput, yytype, yyvaluep, yylocationp, yyscanner, parsedStatement);
  YYFPRINTF (yyoutput, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yytype_int16 *yybottom, yytype_int16 *yytop)
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
yy_reduce_print (yytype_int16 *yyssp, YYSTYPE *yyvsp, YYLTYPE *yylsp, int yyrule, yyscan_t yyscanner, quickstep::ParseStatement **parsedStatement)
{
  unsigned long int yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       yystos[yyssp[yyi + 1 - yynrhs]],
                       &(yyvsp[(yyi + 1) - (yynrhs)])
                       , &(yylsp[(yyi + 1) - (yynrhs)])                       , yyscanner, parsedStatement);
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)          \
do {                                    \
  if (yydebug)                          \
    yy_reduce_print (yyssp, yyvsp, yylsp, Rule, yyscanner, parsedStatement); \
} while (0)

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !YYDEBUG */
# define YYDPRINTF(Args)
# define YY_SYMBOL_PRINT(Title, Type, Value, Location)
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


#if YYERROR_VERBOSE

# ifndef yystrlen
#  if defined __GLIBC__ && defined _STRING_H
#   define yystrlen strlen
#  else
/* Return the length of YYSTR.  */
static YYSIZE_T
yystrlen (const char *yystr)
{
  YYSIZE_T yylen;
  for (yylen = 0; yystr[yylen]; yylen++)
    continue;
  return yylen;
}
#  endif
# endif

# ifndef yystpcpy
#  if defined __GLIBC__ && defined _STRING_H && defined _GNU_SOURCE
#   define yystpcpy stpcpy
#  else
/* Copy YYSRC to YYDEST, returning the address of the terminating '\0' in
   YYDEST.  */
static char *
yystpcpy (char *yydest, const char *yysrc)
{
  char *yyd = yydest;
  const char *yys = yysrc;

  while ((*yyd++ = *yys++) != '\0')
    continue;

  return yyd - 1;
}
#  endif
# endif

# ifndef yytnamerr
/* Copy to YYRES the contents of YYSTR after stripping away unnecessary
   quotes and backslashes, so that it's suitable for yyerror.  The
   heuristic is that double-quoting is unnecessary unless the string
   contains an apostrophe, a comma, or backslash (other than
   backslash-backslash).  YYSTR is taken from yytname.  If YYRES is
   null, do not copy; instead, return the length of what the result
   would have been.  */
static YYSIZE_T
yytnamerr (char *yyres, const char *yystr)
{
  if (*yystr == '"')
    {
      YYSIZE_T yyn = 0;
      char const *yyp = yystr;

      for (;;)
        switch (*++yyp)
          {
          case '\'':
          case ',':
            goto do_not_strip_quotes;

          case '\\':
            if (*++yyp != '\\')
              goto do_not_strip_quotes;
            /* Fall through.  */
          default:
            if (yyres)
              yyres[yyn] = *yyp;
            yyn++;
            break;

          case '"':
            if (yyres)
              yyres[yyn] = '\0';
            return yyn;
          }
    do_not_strip_quotes: ;
    }

  if (! yyres)
    return yystrlen (yystr);

  return yystpcpy (yyres, yystr) - yyres;
}
# endif

/* Copy into *YYMSG, which is of size *YYMSG_ALLOC, an error message
   about the unexpected token YYTOKEN for the state stack whose top is
   YYSSP.

   Return 0 if *YYMSG was successfully written.  Return 1 if *YYMSG is
   not large enough to hold the message.  In that case, also set
   *YYMSG_ALLOC to the required number of bytes.  Return 2 if the
   required number of bytes is too large to store.  */
static int
yysyntax_error (YYSIZE_T *yymsg_alloc, char **yymsg,
                yytype_int16 *yyssp, int yytoken)
{
  YYSIZE_T yysize0 = yytnamerr (YY_NULLPTR, yytname[yytoken]);
  YYSIZE_T yysize = yysize0;
  enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
  /* Internationalized format string. */
  const char *yyformat = YY_NULLPTR;
  /* Arguments of yyformat. */
  char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
  /* Number of reported tokens (one for the "unexpected", one per
     "expected"). */
  int yycount = 0;

  /* There are many possibilities here to consider:
     - If this state is a consistent state with a default action, then
       the only way this function was invoked is if the default action
       is an error action.  In that case, don't check for expected
       tokens because there are none.
     - The only way there can be no lookahead present (in yychar) is if
       this state is a consistent state with a default action.  Thus,
       detecting the absence of a lookahead is sufficient to determine
       that there is no unexpected or expected token to report.  In that
       case, just report a simple "syntax error".
     - Don't assume there isn't a lookahead just because this state is a
       consistent state with a default action.  There might have been a
       previous inconsistent state, consistent state with a non-default
       action, or user semantic action that manipulated yychar.
     - Of course, the expected token list depends on states to have
       correct lookahead information, and it depends on the parser not
       to perform extra reductions after fetching a lookahead from the
       scanner and before detecting a syntax error.  Thus, state merging
       (from LALR or IELR) and default reductions corrupt the expected
       token list.  However, the list is correct for canonical LR with
       one exception: it will still contain any token that will not be
       accepted due to an error action in a later state.
  */
  if (yytoken != YYEMPTY)
    {
      int yyn = yypact[*yyssp];
      yyarg[yycount++] = yytname[yytoken];
      if (!yypact_value_is_default (yyn))
        {
          /* Start YYX at -YYN if negative to avoid negative indexes in
             YYCHECK.  In other words, skip the first -YYN actions for
             this state because they are default actions.  */
          int yyxbegin = yyn < 0 ? -yyn : 0;
          /* Stay within bounds of both yycheck and yytname.  */
          int yychecklim = YYLAST - yyn + 1;
          int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
          int yyx;

          for (yyx = yyxbegin; yyx < yyxend; ++yyx)
            if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR
                && !yytable_value_is_error (yytable[yyx + yyn]))
              {
                if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
                  {
                    yycount = 1;
                    yysize = yysize0;
                    break;
                  }
                yyarg[yycount++] = yytname[yyx];
                {
                  YYSIZE_T yysize1 = yysize + yytnamerr (YY_NULLPTR, yytname[yyx]);
                  if (! (yysize <= yysize1
                         && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
                    return 2;
                  yysize = yysize1;
                }
              }
        }
    }

  switch (yycount)
    {
# define YYCASE_(N, S)                      \
      case N:                               \
        yyformat = S;                       \
      break
      YYCASE_(0, YY_("syntax error"));
      YYCASE_(1, YY_("syntax error, unexpected %s"));
      YYCASE_(2, YY_("syntax error, unexpected %s, expecting %s"));
      YYCASE_(3, YY_("syntax error, unexpected %s, expecting %s or %s"));
      YYCASE_(4, YY_("syntax error, unexpected %s, expecting %s or %s or %s"));
      YYCASE_(5, YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s"));
# undef YYCASE_
    }

  {
    YYSIZE_T yysize1 = yysize + yystrlen (yyformat);
    if (! (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
      return 2;
    yysize = yysize1;
  }

  if (*yymsg_alloc < yysize)
    {
      *yymsg_alloc = 2 * yysize;
      if (! (yysize <= *yymsg_alloc
             && *yymsg_alloc <= YYSTACK_ALLOC_MAXIMUM))
        *yymsg_alloc = YYSTACK_ALLOC_MAXIMUM;
      return 1;
    }

  /* Avoid sprintf, as that infringes on the user's name space.
     Don't have undefined behavior even if the translation
     produced a string with the wrong number of "%s"s.  */
  {
    char *yyp = *yymsg;
    int yyi = 0;
    while ((*yyp = *yyformat) != '\0')
      if (*yyp == '%' && yyformat[1] == 's' && yyi < yycount)
        {
          yyp += yytnamerr (yyp, yyarg[yyi++]);
          yyformat += 2;
        }
      else
        {
          yyp++;
          yyformat++;
        }
  }
  return 0;
}
#endif /* YYERROR_VERBOSE */

/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep, YYLTYPE *yylocationp, yyscan_t yyscanner, quickstep::ParseStatement **parsedStatement)
{
  YYUSE (yyvaluep);
  YYUSE (yylocationp);
  YYUSE (yyscanner);
  YYUSE (parsedStatement);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  switch (yytype)
    {
          case 3: /* TOKEN_COMMAND  */
#line 637 "../SqlParser.ypp" /* yacc.c:1257  */
      {
  if (((*yyvaluep).string_value_) != nullptr) {
    delete ((*yyvaluep).string_value_);
  }
}
#line 2001 "SqlParser_gen.cpp" /* yacc.c:1257  */
        break;

    case 4: /* TOKEN_NAME  */
#line 637 "../SqlParser.ypp" /* yacc.c:1257  */
      {
  if (((*yyvaluep).string_value_) != nullptr) {
    delete ((*yyvaluep).string_value_);
  }
}
#line 2011 "SqlParser_gen.cpp" /* yacc.c:1257  */
        break;

    case 5: /* TOKEN_STRING_SINGLE_QUOTED  */
#line 637 "../SqlParser.ypp" /* yacc.c:1257  */
      {
  if (((*yyvaluep).string_value_) != nullptr) {
    delete ((*yyvaluep).string_value_);
  }
}
#line 2021 "SqlParser_gen.cpp" /* yacc.c:1257  */
        break;

    case 6: /* TOKEN_STRING_DOUBLE_QUOTED  */
#line 637 "../SqlParser.ypp" /* yacc.c:1257  */
      {
  if (((*yyvaluep).string_value_) != nullptr) {
    delete ((*yyvaluep).string_value_);
  }
}
#line 2031 "SqlParser_gen.cpp" /* yacc.c:1257  */
        break;

    case 7: /* TOKEN_UNSIGNED_NUMVAL  */
#line 637 "../SqlParser.ypp" /* yacc.c:1257  */
      {
  if (((*yyvaluep).numeric_literal_value_) != nullptr) {
    delete ((*yyvaluep).numeric_literal_value_);
  }
}
#line 2041 "SqlParser_gen.cpp" /* yacc.c:1257  */
        break;

    case 151: /* sql_statement  */
#line 637 "../SqlParser.ypp" /* yacc.c:1257  */
      {
  if (((*yyvaluep).statement_) != nullptr) {
    delete ((*yyvaluep).statement_);
  }
}
#line 2051 "SqlParser_gen.cpp" /* yacc.c:1257  */
        break;

    case 152: /* quit_statement  */
#line 637 "../SqlParser.ypp" /* yacc.c:1257  */
      {
  if (((*yyvaluep).quit_statement_) != nullptr) {
    delete ((*yyvaluep).quit_statement_);
  }
}
#line 2061 "SqlParser_gen.cpp" /* yacc.c:1257  */
        break;

    case 153: /* alter_table_statement  */
#line 637 "../SqlParser.ypp" /* yacc.c:1257  */
      {
  if (((*yyvaluep).statement_) != nullptr) {
    delete ((*yyvaluep).statement_);
  }
}
#line 2071 "SqlParser_gen.cpp" /* yacc.c:1257  */
        break;

    case 154: /* create_table_statement  */
#line 637 "../SqlParser.ypp" /* yacc.c:1257  */
      {
  if (((*yyvaluep).create_table_statement_) != nullptr) {
    delete ((*yyvaluep).create_table_statement_);
  }
}
#line 2081 "SqlParser_gen.cpp" /* yacc.c:1257  */
        break;

    case 155: /* create_index_statement  */
#line 637 "../SqlParser.ypp" /* yacc.c:1257  */
      {
  if (((*yyvaluep).statement_) != nullptr) {
    delete ((*yyvaluep).statement_);
  }
}
#line 2091 "SqlParser_gen.cpp" /* yacc.c:1257  */
        break;

    case 156: /* drop_table_statement  */
#line 637 "../SqlParser.ypp" /* yacc.c:1257  */
      {
  if (((*yyvaluep).drop_table_statement_) != nullptr) {
    delete ((*yyvaluep).drop_table_statement_);
  }
}
#line 2101 "SqlParser_gen.cpp" /* yacc.c:1257  */
        break;

    case 157: /* column_def  */
#line 637 "../SqlParser.ypp" /* yacc.c:1257  */
      {
  if (((*yyvaluep).attribute_definition_) != nullptr) {
    delete ((*yyvaluep).attribute_definition_);
  }
}
#line 2111 "SqlParser_gen.cpp" /* yacc.c:1257  */
        break;

    case 158: /* column_def_commalist  */
#line 637 "../SqlParser.ypp" /* yacc.c:1257  */
      {
  if (((*yyvaluep).attribute_definition_list_) != nullptr) {
    delete ((*yyvaluep).attribute_definition_list_);
  }
}
#line 2121 "SqlParser_gen.cpp" /* yacc.c:1257  */
        break;

    case 159: /* data_type  */
#line 637 "../SqlParser.ypp" /* yacc.c:1257  */
      {
  if (((*yyvaluep).data_type_) != nullptr) {
    delete ((*yyvaluep).data_type_);
  }
}
#line 2131 "SqlParser_gen.cpp" /* yacc.c:1257  */
        break;

    case 160: /* column_constraint_def  */
#line 637 "../SqlParser.ypp" /* yacc.c:1257  */
      {
  if (((*yyvaluep).column_constraint_) != nullptr) {
    delete ((*yyvaluep).column_constraint_);
  }
}
#line 2141 "SqlParser_gen.cpp" /* yacc.c:1257  */
        break;

    case 161: /* column_constraint_def_list  */
#line 637 "../SqlParser.ypp" /* yacc.c:1257  */
      {
  if (((*yyvaluep).column_constraint_list_) != nullptr) {
    delete ((*yyvaluep).column_constraint_list_);
  }
}
#line 2151 "SqlParser_gen.cpp" /* yacc.c:1257  */
        break;

    case 162: /* opt_column_constraint_def_list  */
#line 637 "../SqlParser.ypp" /* yacc.c:1257  */
      {
  if (((*yyvaluep).column_constraint_list_) != nullptr) {
    delete ((*yyvaluep).column_constraint_list_);
  }
}
#line 2161 "SqlParser_gen.cpp" /* yacc.c:1257  */
        break;

    case 166: /* opt_column_list  */
#line 637 "../SqlParser.ypp" /* yacc.c:1257  */
      {
  if (((*yyvaluep).attribute_list_) != nullptr) {
    delete ((*yyvaluep).attribute_list_);
  }
}
#line 2171 "SqlParser_gen.cpp" /* yacc.c:1257  */
        break;

    case 167: /* opt_block_properties  */
#line 637 "../SqlParser.ypp" /* yacc.c:1257  */
      {
  if (((*yyvaluep).block_properties_) != nullptr) {
    delete ((*yyvaluep).block_properties_);
  }
}
#line 2181 "SqlParser_gen.cpp" /* yacc.c:1257  */
        break;

    case 168: /* opt_partition_clause  */
#line 637 "../SqlParser.ypp" /* yacc.c:1257  */
      {
  if (((*yyvaluep).partition_clause_) != nullptr) {
    delete ((*yyvaluep).partition_clause_);
  }
}
#line 2191 "SqlParser_gen.cpp" /* yacc.c:1257  */
        break;

    case 169: /* partition_type  */
#line 637 "../SqlParser.ypp" /* yacc.c:1257  */
      {
  if (((*yyvaluep).string_value_) != nullptr) {
    delete ((*yyvaluep).string_value_);
  }
}
#line 2201 "SqlParser_gen.cpp" /* yacc.c:1257  */
        break;

    case 170: /* key_value_list  */
#line 637 "../SqlParser.ypp" /* yacc.c:1257  */
      {
  if (((*yyvaluep).key_value_list_) != nullptr) {
    delete ((*yyvaluep).key_value_list_);
  }
}
#line 2211 "SqlParser_gen.cpp" /* yacc.c:1257  */
        break;

    case 171: /* key_value  */
#line 637 "../SqlParser.ypp" /* yacc.c:1257  */
      {
  if (((*yyvaluep).key_value_) != nullptr) {
    delete ((*yyvaluep).key_value_);
  }
}
#line 2221 "SqlParser_gen.cpp" /* yacc.c:1257  */
        break;

    case 172: /* key_string_value  */
#line 637 "../SqlParser.ypp" /* yacc.c:1257  */
      {
  if (((*yyvaluep).key_string_value_) != nullptr) {
    delete ((*yyvaluep).key_string_value_);
  }
}
#line 2231 "SqlParser_gen.cpp" /* yacc.c:1257  */
        break;

    case 173: /* key_string_list  */
#line 637 "../SqlParser.ypp" /* yacc.c:1257  */
      {
  if (((*yyvaluep).key_string_list_) != nullptr) {
    delete ((*yyvaluep).key_string_list_);
  }
}
#line 2241 "SqlParser_gen.cpp" /* yacc.c:1257  */
        break;

    case 174: /* key_integer_value  */
#line 637 "../SqlParser.ypp" /* yacc.c:1257  */
      {
  if (((*yyvaluep).key_integer_value_) != nullptr) {
    delete ((*yyvaluep).key_integer_value_);
  }
}
#line 2251 "SqlParser_gen.cpp" /* yacc.c:1257  */
        break;

    case 175: /* key_bool_value  */
#line 637 "../SqlParser.ypp" /* yacc.c:1257  */
      {
  if (((*yyvaluep).key_bool_value_) != nullptr) {
    delete ((*yyvaluep).key_bool_value_);
  }
}
#line 2261 "SqlParser_gen.cpp" /* yacc.c:1257  */
        break;

    case 176: /* index_type  */
#line 637 "../SqlParser.ypp" /* yacc.c:1257  */
      {
  if (((*yyvaluep).string_value_) != nullptr) {
    delete ((*yyvaluep).string_value_);
  }
}
#line 2271 "SqlParser_gen.cpp" /* yacc.c:1257  */
        break;

    case 177: /* opt_index_properties  */
#line 637 "../SqlParser.ypp" /* yacc.c:1257  */
      {
  if (((*yyvaluep).key_value_list_) != nullptr) {
    delete ((*yyvaluep).key_value_list_);
  }
}
#line 2281 "SqlParser_gen.cpp" /* yacc.c:1257  */
        break;

    case 178: /* insert_statement  */
#line 637 "../SqlParser.ypp" /* yacc.c:1257  */
      {
  if (((*yyvaluep).insert_statement_) != nullptr) {
    delete ((*yyvaluep).insert_statement_);
  }
}
#line 2291 "SqlParser_gen.cpp" /* yacc.c:1257  */
        break;

    case 179: /* copy_statement  */
#line 637 "../SqlParser.ypp" /* yacc.c:1257  */
      {
  if (((*yyvaluep).copy_statement_) != nullptr) {
    delete ((*yyvaluep).copy_statement_);
  }
}
#line 2301 "SqlParser_gen.cpp" /* yacc.c:1257  */
        break;

    case 180: /* copy_to_target  */
#line 637 "../SqlParser.ypp" /* yacc.c:1257  */
      {
  if (((*yyvaluep).string_value_) != nullptr) {
    delete ((*yyvaluep).string_value_);
  }
}
#line 2311 "SqlParser_gen.cpp" /* yacc.c:1257  */
        break;

    case 181: /* opt_copy_params  */
#line 637 "../SqlParser.ypp" /* yacc.c:1257  */
      {
  if (((*yyvaluep).key_value_list_) != nullptr) {
    delete ((*yyvaluep).key_value_list_);
  }
}
#line 2321 "SqlParser_gen.cpp" /* yacc.c:1257  */
        break;

    case 182: /* update_statement  */
#line 637 "../SqlParser.ypp" /* yacc.c:1257  */
      {
  if (((*yyvaluep).update_statement_) != nullptr) {
    delete ((*yyvaluep).update_statement_);
  }
}
#line 2331 "SqlParser_gen.cpp" /* yacc.c:1257  */
        break;

    case 183: /* delete_statement  */
#line 637 "../SqlParser.ypp" /* yacc.c:1257  */
      {
  if (((*yyvaluep).delete_statement_) != nullptr) {
    delete ((*yyvaluep).delete_statement_);
  }
}
#line 2341 "SqlParser_gen.cpp" /* yacc.c:1257  */
        break;

    case 184: /* assignment_list  */
#line 637 "../SqlParser.ypp" /* yacc.c:1257  */
      {
  if (((*yyvaluep).assignment_list_) != nullptr) {
    delete ((*yyvaluep).assignment_list_);
  }
}
#line 2351 "SqlParser_gen.cpp" /* yacc.c:1257  */
        break;

    case 185: /* assignment_item  */
#line 637 "../SqlParser.ypp" /* yacc.c:1257  */
      {
  if (((*yyvaluep).assignment_) != nullptr) {
    delete ((*yyvaluep).assignment_);
  }
}
#line 2361 "SqlParser_gen.cpp" /* yacc.c:1257  */
        break;

    case 186: /* set_operation_statement  */
#line 637 "../SqlParser.ypp" /* yacc.c:1257  */
      {
  if (((*yyvaluep).set_operation_statement_) != nullptr) {
    delete ((*yyvaluep).set_operation_statement_);
  }
}
#line 2371 "SqlParser_gen.cpp" /* yacc.c:1257  */
        break;

    case 187: /* opt_priority_clause  */
#line 637 "../SqlParser.ypp" /* yacc.c:1257  */
      {
  if (((*yyvaluep).opt_priority_clause_) != nullptr) {
    delete ((*yyvaluep).opt_priority_clause_);
  }
}
#line 2381 "SqlParser_gen.cpp" /* yacc.c:1257  */
        break;

    case 188: /* with_clause  */
#line 637 "../SqlParser.ypp" /* yacc.c:1257  */
      {
  if (((*yyvaluep).with_list_) != nullptr) {
    delete ((*yyvaluep).with_list_);
  }
}
#line 2391 "SqlParser_gen.cpp" /* yacc.c:1257  */
        break;

    case 189: /* with_list  */
#line 637 "../SqlParser.ypp" /* yacc.c:1257  */
      {
  if (((*yyvaluep).with_list_) != nullptr) {
    delete ((*yyvaluep).with_list_);
  }
}
#line 2401 "SqlParser_gen.cpp" /* yacc.c:1257  */
        break;

    case 190: /* with_list_element  */
#line 637 "../SqlParser.ypp" /* yacc.c:1257  */
      {
  if (((*yyvaluep).with_list_element_) != nullptr) {
    delete ((*yyvaluep).with_list_element_);
  }
}
#line 2411 "SqlParser_gen.cpp" /* yacc.c:1257  */
        break;

    case 191: /* set_operation_union  */
#line 637 "../SqlParser.ypp" /* yacc.c:1257  */
      {
  if (((*yyvaluep).set_operation_) != nullptr) {
    delete ((*yyvaluep).set_operation_);
  }
}
#line 2421 "SqlParser_gen.cpp" /* yacc.c:1257  */
        break;

    case 192: /* set_operation_intersect  */
#line 637 "../SqlParser.ypp" /* yacc.c:1257  */
      {
  if (((*yyvaluep).set_operation_) != nullptr) {
    delete ((*yyvaluep).set_operation_);
  }
}
#line 2431 "SqlParser_gen.cpp" /* yacc.c:1257  */
        break;

    case 193: /* select_query  */
#line 637 "../SqlParser.ypp" /* yacc.c:1257  */
      {
  if (((*yyvaluep).select_query_) != nullptr) {
    delete ((*yyvaluep).select_query_);
  }
}
#line 2441 "SqlParser_gen.cpp" /* yacc.c:1257  */
        break;

    case 194: /* opt_all_distinct  */
#line 631 "../SqlParser.ypp" /* yacc.c:1257  */
      { }
#line 2447 "SqlParser_gen.cpp" /* yacc.c:1257  */
        break;

    case 195: /* selection  */
#line 637 "../SqlParser.ypp" /* yacc.c:1257  */
      {
  if (((*yyvaluep).selection_) != nullptr) {
    delete ((*yyvaluep).selection_);
  }
}
#line 2457 "SqlParser_gen.cpp" /* yacc.c:1257  */
        break;

    case 196: /* selection_item_commalist  */
#line 637 "../SqlParser.ypp" /* yacc.c:1257  */
      {
  if (((*yyvaluep).selection_list_) != nullptr) {
    delete ((*yyvaluep).selection_list_);
  }
}
#line 2467 "SqlParser_gen.cpp" /* yacc.c:1257  */
        break;

    case 197: /* selection_item  */
#line 637 "../SqlParser.ypp" /* yacc.c:1257  */
      {
  if (((*yyvaluep).selection_item_) != nullptr) {
    delete ((*yyvaluep).selection_item_);
  }
}
#line 2477 "SqlParser_gen.cpp" /* yacc.c:1257  */
        break;

    case 198: /* from_clause  */
#line 637 "../SqlParser.ypp" /* yacc.c:1257  */
      {
  if (((*yyvaluep).table_reference_list_) != nullptr) {
    delete ((*yyvaluep).table_reference_list_);
  }
}
#line 2487 "SqlParser_gen.cpp" /* yacc.c:1257  */
        break;

    case 199: /* subquery_expression  */
#line 637 "../SqlParser.ypp" /* yacc.c:1257  */
      {
  if (((*yyvaluep).subquery_expression_) != nullptr) {
    delete ((*yyvaluep).subquery_expression_);
  }
}
#line 2497 "SqlParser_gen.cpp" /* yacc.c:1257  */
        break;

    case 200: /* opt_sample_clause  */
#line 637 "../SqlParser.ypp" /* yacc.c:1257  */
      {
  if (((*yyvaluep).opt_sample_clause_) != nullptr) {
    delete ((*yyvaluep).opt_sample_clause_);
  }
}
#line 2507 "SqlParser_gen.cpp" /* yacc.c:1257  */
        break;

    case 201: /* join_type  */
#line 635 "../SqlParser.ypp" /* yacc.c:1257  */
      { }
#line 2513 "SqlParser_gen.cpp" /* yacc.c:1257  */
        break;

    case 202: /* joined_table_reference  */
#line 637 "../SqlParser.ypp" /* yacc.c:1257  */
      {
  if (((*yyvaluep).table_reference_) != nullptr) {
    delete ((*yyvaluep).table_reference_);
  }
}
#line 2523 "SqlParser_gen.cpp" /* yacc.c:1257  */
        break;

    case 203: /* table_reference  */
#line 637 "../SqlParser.ypp" /* yacc.c:1257  */
      {
  if (((*yyvaluep).table_reference_) != nullptr) {
    delete ((*yyvaluep).table_reference_);
  }
}
#line 2533 "SqlParser_gen.cpp" /* yacc.c:1257  */
        break;

    case 204: /* table_reference_signature  */
#line 637 "../SqlParser.ypp" /* yacc.c:1257  */
      {
  if (((*yyvaluep).table_reference_signature_) != nullptr) {
    delete ((*yyvaluep).table_reference_signature_);
  }
}
#line 2543 "SqlParser_gen.cpp" /* yacc.c:1257  */
        break;

    case 205: /* table_reference_signature_primary  */
#line 637 "../SqlParser.ypp" /* yacc.c:1257  */
      {
  if (((*yyvaluep).table_reference_signature_) != nullptr) {
    delete ((*yyvaluep).table_reference_signature_);
  }
}
#line 2553 "SqlParser_gen.cpp" /* yacc.c:1257  */
        break;

    case 206: /* joined_table_reference_commalist  */
#line 637 "../SqlParser.ypp" /* yacc.c:1257  */
      {
  if (((*yyvaluep).table_reference_list_) != nullptr) {
    delete ((*yyvaluep).table_reference_list_);
  }
}
#line 2563 "SqlParser_gen.cpp" /* yacc.c:1257  */
        break;

    case 207: /* opt_group_by_clause  */
#line 637 "../SqlParser.ypp" /* yacc.c:1257  */
      {
  if (((*yyvaluep).opt_group_by_clause_) != nullptr) {
    delete ((*yyvaluep).opt_group_by_clause_);
  }
}
#line 2573 "SqlParser_gen.cpp" /* yacc.c:1257  */
        break;

    case 208: /* opt_having_clause  */
#line 637 "../SqlParser.ypp" /* yacc.c:1257  */
      {
  if (((*yyvaluep).opt_having_clause_) != nullptr) {
    delete ((*yyvaluep).opt_having_clause_);
  }
}
#line 2583 "SqlParser_gen.cpp" /* yacc.c:1257  */
        break;

    case 209: /* opt_order_by_clause  */
#line 637 "../SqlParser.ypp" /* yacc.c:1257  */
      {
  if (((*yyvaluep).opt_order_by_clause_) != nullptr) {
    delete ((*yyvaluep).opt_order_by_clause_);
  }
}
#line 2593 "SqlParser_gen.cpp" /* yacc.c:1257  */
        break;

    case 210: /* opt_limit_clause  */
#line 637 "../SqlParser.ypp" /* yacc.c:1257  */
      {
  if (((*yyvaluep).opt_limit_clause_) != nullptr) {
    delete ((*yyvaluep).opt_limit_clause_);
  }
}
#line 2603 "SqlParser_gen.cpp" /* yacc.c:1257  */
        break;

    case 211: /* opt_window_clause  */
#line 637 "../SqlParser.ypp" /* yacc.c:1257  */
      {
  if (((*yyvaluep).opt_window_clause_) != nullptr) {
    delete ((*yyvaluep).opt_window_clause_);
  }
}
#line 2613 "SqlParser_gen.cpp" /* yacc.c:1257  */
        break;

    case 212: /* window_declaration_list  */
#line 637 "../SqlParser.ypp" /* yacc.c:1257  */
      {
  if (((*yyvaluep).opt_window_clause_) != nullptr) {
    delete ((*yyvaluep).opt_window_clause_);
  }
}
#line 2623 "SqlParser_gen.cpp" /* yacc.c:1257  */
        break;

    case 213: /* window_declaration  */
#line 637 "../SqlParser.ypp" /* yacc.c:1257  */
      {
  if (((*yyvaluep).window_definition_) != nullptr) {
    delete ((*yyvaluep).window_definition_);
  }
}
#line 2633 "SqlParser_gen.cpp" /* yacc.c:1257  */
        break;

    case 214: /* window_definition  */
#line 637 "../SqlParser.ypp" /* yacc.c:1257  */
      {
  if (((*yyvaluep).window_definition_) != nullptr) {
    delete ((*yyvaluep).window_definition_);
  }
}
#line 2643 "SqlParser_gen.cpp" /* yacc.c:1257  */
        break;

    case 215: /* opt_window_partition  */
#line 637 "../SqlParser.ypp" /* yacc.c:1257  */
      {
  if (((*yyvaluep).window_partition_by_list_) != nullptr) {
    delete ((*yyvaluep).window_partition_by_list_);
  }
}
#line 2653 "SqlParser_gen.cpp" /* yacc.c:1257  */
        break;

    case 216: /* opt_window_order  */
#line 637 "../SqlParser.ypp" /* yacc.c:1257  */
      {
  if (((*yyvaluep).window_order_by_list_) != nullptr) {
    delete ((*yyvaluep).window_order_by_list_);
  }
}
#line 2663 "SqlParser_gen.cpp" /* yacc.c:1257  */
        break;

    case 217: /* opt_window_frame  */
#line 637 "../SqlParser.ypp" /* yacc.c:1257  */
      {
  if (((*yyvaluep).window_frame_info_) != nullptr) {
    delete ((*yyvaluep).window_frame_info_);
  }
}
#line 2673 "SqlParser_gen.cpp" /* yacc.c:1257  */
        break;

    case 218: /* frame_mode  */
#line 631 "../SqlParser.ypp" /* yacc.c:1257  */
      { }
#line 2679 "SqlParser_gen.cpp" /* yacc.c:1257  */
        break;

    case 219: /* frame_preceding  */
#line 637 "../SqlParser.ypp" /* yacc.c:1257  */
      {
  if (((*yyvaluep).numeric_literal_value_) != nullptr) {
    delete ((*yyvaluep).numeric_literal_value_);
  }
}
#line 2689 "SqlParser_gen.cpp" /* yacc.c:1257  */
        break;

    case 220: /* frame_following  */
#line 637 "../SqlParser.ypp" /* yacc.c:1257  */
      {
  if (((*yyvaluep).numeric_literal_value_) != nullptr) {
    delete ((*yyvaluep).numeric_literal_value_);
  }
}
#line 2699 "SqlParser_gen.cpp" /* yacc.c:1257  */
        break;

    case 221: /* order_commalist  */
#line 637 "../SqlParser.ypp" /* yacc.c:1257  */
      {
  if (((*yyvaluep).order_commalist_) != nullptr) {
    delete ((*yyvaluep).order_commalist_);
  }
}
#line 2709 "SqlParser_gen.cpp" /* yacc.c:1257  */
        break;

    case 222: /* order_item  */
#line 637 "../SqlParser.ypp" /* yacc.c:1257  */
      {
  if (((*yyvaluep).order_item_) != nullptr) {
    delete ((*yyvaluep).order_item_);
  }
}
#line 2719 "SqlParser_gen.cpp" /* yacc.c:1257  */
        break;

    case 223: /* opt_order_direction  */
#line 637 "../SqlParser.ypp" /* yacc.c:1257  */
      {
  if (((*yyvaluep).order_direction_) != nullptr) {
    delete ((*yyvaluep).order_direction_);
  }
}
#line 2729 "SqlParser_gen.cpp" /* yacc.c:1257  */
        break;

    case 224: /* opt_nulls_first  */
#line 637 "../SqlParser.ypp" /* yacc.c:1257  */
      {
  if (((*yyvaluep).order_direction_) != nullptr) {
    delete ((*yyvaluep).order_direction_);
  }
}
#line 2739 "SqlParser_gen.cpp" /* yacc.c:1257  */
        break;

    case 225: /* opt_where_clause  */
#line 637 "../SqlParser.ypp" /* yacc.c:1257  */
      {
  if (((*yyvaluep).predicate_) != nullptr) {
    delete ((*yyvaluep).predicate_);
  }
}
#line 2749 "SqlParser_gen.cpp" /* yacc.c:1257  */
        break;

    case 226: /* where_clause  */
#line 637 "../SqlParser.ypp" /* yacc.c:1257  */
      {
  if (((*yyvaluep).predicate_) != nullptr) {
    delete ((*yyvaluep).predicate_);
  }
}
#line 2759 "SqlParser_gen.cpp" /* yacc.c:1257  */
        break;

    case 227: /* or_expression  */
#line 637 "../SqlParser.ypp" /* yacc.c:1257  */
      {
  if (((*yyvaluep).predicate_) != nullptr) {
    delete ((*yyvaluep).predicate_);
  }
}
#line 2769 "SqlParser_gen.cpp" /* yacc.c:1257  */
        break;

    case 228: /* and_expression  */
#line 637 "../SqlParser.ypp" /* yacc.c:1257  */
      {
  if (((*yyvaluep).predicate_) != nullptr) {
    delete ((*yyvaluep).predicate_);
  }
}
#line 2779 "SqlParser_gen.cpp" /* yacc.c:1257  */
        break;

    case 229: /* not_expression  */
#line 637 "../SqlParser.ypp" /* yacc.c:1257  */
      {
  if (((*yyvaluep).predicate_) != nullptr) {
    delete ((*yyvaluep).predicate_);
  }
}
#line 2789 "SqlParser_gen.cpp" /* yacc.c:1257  */
        break;

    case 230: /* predicate_expression_base  */
#line 637 "../SqlParser.ypp" /* yacc.c:1257  */
      {
  if (((*yyvaluep).predicate_) != nullptr) {
    delete ((*yyvaluep).predicate_);
  }
}
#line 2799 "SqlParser_gen.cpp" /* yacc.c:1257  */
        break;

    case 231: /* add_expression  */
#line 637 "../SqlParser.ypp" /* yacc.c:1257  */
      {
  if (((*yyvaluep).expression_) != nullptr) {
    delete ((*yyvaluep).expression_);
  }
}
#line 2809 "SqlParser_gen.cpp" /* yacc.c:1257  */
        break;

    case 232: /* multiply_expression  */
#line 637 "../SqlParser.ypp" /* yacc.c:1257  */
      {
  if (((*yyvaluep).expression_) != nullptr) {
    delete ((*yyvaluep).expression_);
  }
}
#line 2819 "SqlParser_gen.cpp" /* yacc.c:1257  */
        break;

    case 233: /* unary_expression  */
#line 637 "../SqlParser.ypp" /* yacc.c:1257  */
      {
  if (((*yyvaluep).expression_) != nullptr) {
    delete ((*yyvaluep).expression_);
  }
}
#line 2829 "SqlParser_gen.cpp" /* yacc.c:1257  */
        break;

    case 234: /* expression_base  */
#line 637 "../SqlParser.ypp" /* yacc.c:1257  */
      {
  if (((*yyvaluep).expression_) != nullptr) {
    delete ((*yyvaluep).expression_);
  }
}
#line 2839 "SqlParser_gen.cpp" /* yacc.c:1257  */
        break;

    case 235: /* function_call  */
#line 637 "../SqlParser.ypp" /* yacc.c:1257  */
      {
  if (((*yyvaluep).function_call_) != nullptr) {
    delete ((*yyvaluep).function_call_);
  }
}
#line 2849 "SqlParser_gen.cpp" /* yacc.c:1257  */
        break;

    case 236: /* extract_function  */
#line 637 "../SqlParser.ypp" /* yacc.c:1257  */
      {
  if (((*yyvaluep).expression_) != nullptr) {
    delete ((*yyvaluep).expression_);
  }
}
#line 2859 "SqlParser_gen.cpp" /* yacc.c:1257  */
        break;

    case 237: /* substr_function  */
#line 637 "../SqlParser.ypp" /* yacc.c:1257  */
      {
  if (((*yyvaluep).expression_) != nullptr) {
    delete ((*yyvaluep).expression_);
  }
}
#line 2869 "SqlParser_gen.cpp" /* yacc.c:1257  */
        break;

    case 238: /* case_expression  */
#line 637 "../SqlParser.ypp" /* yacc.c:1257  */
      {
  if (((*yyvaluep).expression_) != nullptr) {
    delete ((*yyvaluep).expression_);
  }
}
#line 2879 "SqlParser_gen.cpp" /* yacc.c:1257  */
        break;

    case 239: /* simple_when_clause_list  */
#line 637 "../SqlParser.ypp" /* yacc.c:1257  */
      {
  if (((*yyvaluep).simple_when_clause_list_) != nullptr) {
    delete ((*yyvaluep).simple_when_clause_list_);
  }
}
#line 2889 "SqlParser_gen.cpp" /* yacc.c:1257  */
        break;

    case 240: /* simple_when_clause  */
#line 637 "../SqlParser.ypp" /* yacc.c:1257  */
      {
  if (((*yyvaluep).simple_when_clause_) != nullptr) {
    delete ((*yyvaluep).simple_when_clause_);
  }
}
#line 2899 "SqlParser_gen.cpp" /* yacc.c:1257  */
        break;

    case 241: /* searched_when_clause_list  */
#line 637 "../SqlParser.ypp" /* yacc.c:1257  */
      {
  if (((*yyvaluep).searched_when_clause_list_) != nullptr) {
    delete ((*yyvaluep).searched_when_clause_list_);
  }
}
#line 2909 "SqlParser_gen.cpp" /* yacc.c:1257  */
        break;

    case 242: /* searched_when_clause  */
#line 637 "../SqlParser.ypp" /* yacc.c:1257  */
      {
  if (((*yyvaluep).searched_when_clause_) != nullptr) {
    delete ((*yyvaluep).searched_when_clause_);
  }
}
#line 2919 "SqlParser_gen.cpp" /* yacc.c:1257  */
        break;

    case 243: /* opt_else_clause  */
#line 637 "../SqlParser.ypp" /* yacc.c:1257  */
      {
  if (((*yyvaluep).expression_) != nullptr) {
    delete ((*yyvaluep).expression_);
  }
}
#line 2929 "SqlParser_gen.cpp" /* yacc.c:1257  */
        break;

    case 244: /* expression_list  */
#line 637 "../SqlParser.ypp" /* yacc.c:1257  */
      {
  if (((*yyvaluep).expression_list_) != nullptr) {
    delete ((*yyvaluep).expression_list_);
  }
}
#line 2939 "SqlParser_gen.cpp" /* yacc.c:1257  */
        break;

    case 245: /* literal_value  */
#line 637 "../SqlParser.ypp" /* yacc.c:1257  */
      {
  if (((*yyvaluep).literal_value_) != nullptr) {
    delete ((*yyvaluep).literal_value_);
  }
}
#line 2949 "SqlParser_gen.cpp" /* yacc.c:1257  */
        break;

    case 246: /* datetime_unit  */
#line 637 "../SqlParser.ypp" /* yacc.c:1257  */
      {
  if (((*yyvaluep).string_value_) != nullptr) {
    delete ((*yyvaluep).string_value_);
  }
}
#line 2959 "SqlParser_gen.cpp" /* yacc.c:1257  */
        break;

    case 247: /* literal_value_commalist  */
#line 637 "../SqlParser.ypp" /* yacc.c:1257  */
      {
  if (((*yyvaluep).literal_value_list_) != nullptr) {
    delete ((*yyvaluep).literal_value_list_);
  }
}
#line 2969 "SqlParser_gen.cpp" /* yacc.c:1257  */
        break;

    case 248: /* literal_value_commalist_multiple  */
#line 637 "../SqlParser.ypp" /* yacc.c:1257  */
      {
  if (((*yyvaluep).literal_value_list_multiple_) != nullptr) {
    delete ((*yyvaluep).literal_value_list_multiple_);
  }
}
#line 2979 "SqlParser_gen.cpp" /* yacc.c:1257  */
        break;

    case 249: /* attribute_ref  */
#line 637 "../SqlParser.ypp" /* yacc.c:1257  */
      {
  if (((*yyvaluep).attribute_) != nullptr) {
    delete ((*yyvaluep).attribute_);
  }
}
#line 2989 "SqlParser_gen.cpp" /* yacc.c:1257  */
        break;

    case 250: /* attribute_ref_list  */
#line 637 "../SqlParser.ypp" /* yacc.c:1257  */
      {
  if (((*yyvaluep).attribute_list_) != nullptr) {
    delete ((*yyvaluep).attribute_list_);
  }
}
#line 2999 "SqlParser_gen.cpp" /* yacc.c:1257  */
        break;

    case 251: /* comparison_operation  */
#line 632 "../SqlParser.ypp" /* yacc.c:1257  */
      { }
#line 3005 "SqlParser_gen.cpp" /* yacc.c:1257  */
        break;

    case 252: /* unary_operation  */
#line 633 "../SqlParser.ypp" /* yacc.c:1257  */
      { }
#line 3011 "SqlParser_gen.cpp" /* yacc.c:1257  */
        break;

    case 253: /* add_operation  */
#line 634 "../SqlParser.ypp" /* yacc.c:1257  */
      { }
#line 3017 "SqlParser_gen.cpp" /* yacc.c:1257  */
        break;

    case 254: /* multiply_operation  */
#line 634 "../SqlParser.ypp" /* yacc.c:1257  */
      { }
#line 3023 "SqlParser_gen.cpp" /* yacc.c:1257  */
        break;

    case 255: /* name_commalist  */
#line 637 "../SqlParser.ypp" /* yacc.c:1257  */
      {
  if (((*yyvaluep).string_list_) != nullptr) {
    delete ((*yyvaluep).string_list_);
  }
}
#line 3033 "SqlParser_gen.cpp" /* yacc.c:1257  */
        break;

    case 256: /* any_name  */
#line 637 "../SqlParser.ypp" /* yacc.c:1257  */
      {
  if (((*yyvaluep).string_value_) != nullptr) {
    delete ((*yyvaluep).string_value_);
  }
}
#line 3043 "SqlParser_gen.cpp" /* yacc.c:1257  */
        break;

    case 257: /* boolean_value  */
#line 631 "../SqlParser.ypp" /* yacc.c:1257  */
      { }
#line 3049 "SqlParser_gen.cpp" /* yacc.c:1257  */
        break;

    case 258: /* command  */
#line 637 "../SqlParser.ypp" /* yacc.c:1257  */
      {
  if (((*yyvaluep).command_) != nullptr) {
    delete ((*yyvaluep).command_);
  }
}
#line 3059 "SqlParser_gen.cpp" /* yacc.c:1257  */
        break;

    case 259: /* command_argument_list  */
#line 637 "../SqlParser.ypp" /* yacc.c:1257  */
      {
  if (((*yyvaluep).command_argument_list_) != nullptr) {
    delete ((*yyvaluep).command_argument_list_);
  }
}
#line 3069 "SqlParser_gen.cpp" /* yacc.c:1257  */
        break;


      default:
        break;
    }
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}




/*----------.
| yyparse.  |
`----------*/

int
yyparse (yyscan_t yyscanner, quickstep::ParseStatement **parsedStatement)
{
/* The lookahead symbol.  */
int yychar;


/* The semantic value of the lookahead symbol.  */
/* Default value used for initialization, for pacifying older GCCs
   or non-GCC compilers.  */
YY_INITIAL_VALUE (static YYSTYPE yyval_default;)
YYSTYPE yylval YY_INITIAL_VALUE (= yyval_default);

/* Location data for the lookahead symbol.  */
static YYLTYPE yyloc_default
# if defined YYLTYPE_IS_TRIVIAL && YYLTYPE_IS_TRIVIAL
  = { 1, 1, 1, 1 }
# endif
;
YYLTYPE yylloc = yyloc_default;

    /* Number of syntax errors so far.  */
    int yynerrs;

    int yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       'yyss': related to states.
       'yyvs': related to semantic values.
       'yyls': related to locations.

       Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* The state stack.  */
    yytype_int16 yyssa[YYINITDEPTH];
    yytype_int16 *yyss;
    yytype_int16 *yyssp;

    /* The semantic value stack.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs;
    YYSTYPE *yyvsp;

    /* The location stack.  */
    YYLTYPE yylsa[YYINITDEPTH];
    YYLTYPE *yyls;
    YYLTYPE *yylsp;

    /* The locations where the error started and ended.  */
    YYLTYPE yyerror_range[3];

    YYSIZE_T yystacksize;

  int yyn;
  int yyresult;
  /* Lookahead token as an internal (translated) token number.  */
  int yytoken = 0;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;
  YYLTYPE yyloc;

#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYSIZE_T yymsg_alloc = sizeof yymsgbuf;
#endif

#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N), yylsp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  yyssp = yyss = yyssa;
  yyvsp = yyvs = yyvsa;
  yylsp = yyls = yylsa;
  yystacksize = YYINITDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY; /* Cause a token to be read.  */
  yylsp[0] = yylloc;
  goto yysetstate;

/*------------------------------------------------------------.
| yynewstate -- Push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
 yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;

 yysetstate:
  *yyssp = yystate;

  if (yyss + yystacksize - 1 <= yyssp)
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYSIZE_T yysize = yyssp - yyss + 1;

#ifdef yyoverflow
      {
        /* Give user a chance to reallocate the stack.  Use copies of
           these so that the &'s don't force the real ones into
           memory.  */
        YYSTYPE *yyvs1 = yyvs;
        yytype_int16 *yyss1 = yyss;
        YYLTYPE *yyls1 = yyls;

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * sizeof (*yyssp),
                    &yyvs1, yysize * sizeof (*yyvsp),
                    &yyls1, yysize * sizeof (*yylsp),
                    &yystacksize);

        yyls = yyls1;
        yyss = yyss1;
        yyvs = yyvs1;
      }
#else /* no yyoverflow */
# ifndef YYSTACK_RELOCATE
      goto yyexhaustedlab;
# else
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
        goto yyexhaustedlab;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yytype_int16 *yyss1 = yyss;
        union yyalloc *yyptr =
          (union yyalloc *) YYSTACK_ALLOC (YYSTACK_BYTES (yystacksize));
        if (! yyptr)
          goto yyexhaustedlab;
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
        YYSTACK_RELOCATE (yyls_alloc, yyls);
#  undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif
#endif /* no yyoverflow */

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;
      yylsp = yyls + yysize - 1;

      YYDPRINTF ((stderr, "Stack size increased to %lu\n",
                  (unsigned long int) yystacksize));

      if (yyss + yystacksize - 1 <= yyssp)
        YYABORT;
    }

  YYDPRINTF ((stderr, "Entering state %d\n", yystate));

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

  /* YYCHAR is either YYEMPTY or YYEOF or a valid lookahead symbol.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = yylex (&yylval, &yylloc, yyscanner);
    }

  if (yychar <= YYEOF)
    {
      yychar = yytoken = YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
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

  /* Discard the shifted token.  */
  yychar = YYEMPTY;

  yystate = yyn;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END
  *++yylsp = yylloc;
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
| yyreduce -- Do a reduction.  |
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

  /* Default location.  */
  YYLLOC_DEFAULT (yyloc, (yylsp - yylen), yylen);
  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
        case 2:
#line 646 "../SqlParser.ypp" /* yacc.c:1661  */
    {
    *parsedStatement = (yyvsp[-1].statement_);
    YYACCEPT;
  }
#line 3366 "SqlParser_gen.cpp" /* yacc.c:1661  */
    break;

  case 3:
#line 650 "../SqlParser.ypp" /* yacc.c:1661  */
    {
    *parsedStatement = (yyvsp[-1].statement_);
    YYACCEPT;
  }
#line 3375 "SqlParser_gen.cpp" /* yacc.c:1661  */
    break;

  case 4:
#line 654 "../SqlParser.ypp" /* yacc.c:1661  */
    {
    *parsedStatement = (yyvsp[-1].command_);
    YYACCEPT;
  }
#line 3384 "SqlParser_gen.cpp" /* yacc.c:1661  */
    break;

  case 5:
#line 658 "../SqlParser.ypp" /* yacc.c:1661  */
    {
    *parsedStatement = (yyvsp[-1].command_);
    YYACCEPT;
  }
#line 3393 "SqlParser_gen.cpp" /* yacc.c:1661  */
    break;

  case 6:
#line 662 "../SqlParser.ypp" /* yacc.c:1661  */
    {
    YYABORT;
  }
#line 3401 "SqlParser_gen.cpp" /* yacc.c:1661  */
    break;

  case 7:
#line 665 "../SqlParser.ypp" /* yacc.c:1661  */
    {
    // Regular yyparse() return codes are non-negative, so use a negative one here.
    return -1;
  }
#line 3410 "SqlParser_gen.cpp" /* yacc.c:1661  */
    break;

  case 8:
#line 672 "../SqlParser.ypp" /* yacc.c:1661  */
    {
    (yyval.statement_) = (yyvsp[0].statement_);
  }
#line 3418 "SqlParser_gen.cpp" /* yacc.c:1661  */
    break;

  case 9:
#line 675 "../SqlParser.ypp" /* yacc.c:1661  */
    {
    (yyval.statement_) = (yyvsp[0].copy_statement_);
  }
#line 3426 "SqlParser_gen.cpp" /* yacc.c:1661  */
    break;

  case 10:
#line 678 "../SqlParser.ypp" /* yacc.c:1661  */
    {
    (yyval.statement_) = (yyvsp[0].create_table_statement_);
  }
#line 3434 "SqlParser_gen.cpp" /* yacc.c:1661  */
    break;

  case 11:
#line 681 "../SqlParser.ypp" /* yacc.c:1661  */
    {
    (yyval.statement_) = (yyvsp[0].statement_);
  }
#line 3442 "SqlParser_gen.cpp" /* yacc.c:1661  */
    break;

  case 12:
#line 684 "../SqlParser.ypp" /* yacc.c:1661  */
    {
    (yyval.statement_) = (yyvsp[0].delete_statement_);
  }
#line 3450 "SqlParser_gen.cpp" /* yacc.c:1661  */
    break;

  case 13:
#line 687 "../SqlParser.ypp" /* yacc.c:1661  */
    {
    (yyval.statement_) = (yyvsp[0].drop_table_statement_);
  }
#line 3458 "SqlParser_gen.cpp" /* yacc.c:1661  */
    break;

  case 14:
#line 690 "../SqlParser.ypp" /* yacc.c:1661  */
    {
    (yyval.statement_) = (yyvsp[0].insert_statement_);
  }
#line 3466 "SqlParser_gen.cpp" /* yacc.c:1661  */
    break;

  case 15:
#line 693 "../SqlParser.ypp" /* yacc.c:1661  */
    {
    (yyval.statement_) = (yyvsp[0].quit_statement_);
  }
#line 3474 "SqlParser_gen.cpp" /* yacc.c:1661  */
    break;

  case 16:
#line 696 "../SqlParser.ypp" /* yacc.c:1661  */
    {
    (yyval.statement_) = (yyvsp[0].set_operation_statement_);
  }
#line 3482 "SqlParser_gen.cpp" /* yacc.c:1661  */
    break;

  case 17:
#line 699 "../SqlParser.ypp" /* yacc.c:1661  */
    {
    (yyval.statement_) = (yyvsp[0].update_statement_);
  }
#line 3490 "SqlParser_gen.cpp" /* yacc.c:1661  */
    break;

  case 18:
#line 705 "../SqlParser.ypp" /* yacc.c:1661  */
    {
    (yyval.quit_statement_) = new quickstep::ParseStatementQuit((yylsp[0]).first_line, (yylsp[0]).first_column);
  }
#line 3498 "SqlParser_gen.cpp" /* yacc.c:1661  */
    break;

  case 19:
#line 711 "../SqlParser.ypp" /* yacc.c:1661  */
    {
    delete (yyvsp[-3].string_value_);
    delete (yyvsp[0].attribute_definition_);
    (yyval.statement_) = nullptr;
    NotSupported(&(yylsp[-5]), yyscanner, "ALTER statements");
    YYERROR;
  }
#line 3510 "SqlParser_gen.cpp" /* yacc.c:1661  */
    break;

  case 20:
#line 718 "../SqlParser.ypp" /* yacc.c:1661  */
    {
    delete (yyvsp[-3].string_value_);
    (yyval.statement_) = nullptr;
    NotSupported(&(yylsp[-5]), yyscanner, "ALTER statements");
    YYERROR;
  }
#line 3521 "SqlParser_gen.cpp" /* yacc.c:1661  */
    break;

  case 21:
#line 724 "../SqlParser.ypp" /* yacc.c:1661  */
    {
    delete (yyvsp[-3].string_value_);
    delete (yyvsp[0].string_value_);
    (yyval.statement_) = nullptr;
    NotSupported(&(yylsp[-5]), yyscanner, "ALTER statements");
    YYERROR;
  }
#line 3533 "SqlParser_gen.cpp" /* yacc.c:1661  */
    break;

  case 22:
#line 731 "../SqlParser.ypp" /* yacc.c:1661  */
    {
    delete (yyvsp[-3].string_value_);
    delete (yyvsp[0].string_value_);
    (yyval.statement_) = nullptr;
    NotSupported(&(yylsp[-5]), yyscanner, "ALTER statements");
    YYERROR;
  }
#line 3545 "SqlParser_gen.cpp" /* yacc.c:1661  */
    break;

  case 23:
#line 740 "../SqlParser.ypp" /* yacc.c:1661  */
    {
    (yyval.create_table_statement_) = new quickstep::ParseStatementCreateTable((yylsp[-8]).first_line, (yylsp[-8]).first_column, (yyvsp[-6].string_value_), (yyvsp[-4].attribute_definition_list_), (yyvsp[-1].block_properties_), (yyvsp[0].partition_clause_));
  }
#line 3553 "SqlParser_gen.cpp" /* yacc.c:1661  */
    break;

  case 24:
#line 745 "../SqlParser.ypp" /* yacc.c:1661  */
    {
    if ((yyvsp[0].key_value_list_)) {
      (yyval.statement_) = new quickstep::ParseStatementCreateIndex((yylsp[-8]).first_line, (yylsp[-8]).first_column, (yyvsp[-6].string_value_), (yyvsp[-4].string_value_), (yyvsp[-3].attribute_list_), (yyvsp[-1].string_value_), (yylsp[0]).first_line, (yylsp[0]).first_column, (yyvsp[0].key_value_list_));
    } else {
      (yyval.statement_) = new quickstep::ParseStatementCreateIndex((yylsp[-8]).first_line, (yylsp[-8]).first_column, (yyvsp[-6].string_value_), (yyvsp[-4].string_value_), (yyvsp[-3].attribute_list_), (yyvsp[-1].string_value_));
    }
  }
#line 3565 "SqlParser_gen.cpp" /* yacc.c:1661  */
    break;

  case 25:
#line 754 "../SqlParser.ypp" /* yacc.c:1661  */
    {
    (yyval.drop_table_statement_) = new quickstep::ParseStatementDropTable((yylsp[-2]).first_line, (yylsp[-2]).first_column, (yyvsp[0].string_value_));
  }
#line 3573 "SqlParser_gen.cpp" /* yacc.c:1661  */
    break;

  case 26:
#line 759 "../SqlParser.ypp" /* yacc.c:1661  */
    {
    (yyval.attribute_definition_) = new quickstep::ParseAttributeDefinition((yylsp[-2]).first_line, (yylsp[-2]).first_column, (yyvsp[-2].string_value_), (yyvsp[-1].data_type_), (yyvsp[0].column_constraint_list_));
  }
#line 3581 "SqlParser_gen.cpp" /* yacc.c:1661  */
    break;

  case 27:
#line 764 "../SqlParser.ypp" /* yacc.c:1661  */
    {
    (yyval.attribute_definition_list_) = new quickstep::PtrList<quickstep::ParseAttributeDefinition>();
    (yyval.attribute_definition_list_)->push_back((yyvsp[0].attribute_definition_));
  }
#line 3590 "SqlParser_gen.cpp" /* yacc.c:1661  */
    break;

  case 28:
#line 768 "../SqlParser.ypp" /* yacc.c:1661  */
    {
    (yyval.attribute_definition_list_) = (yyvsp[-2].attribute_definition_list_);
    (yyval.attribute_definition_list_)->push_back((yyvsp[0].attribute_definition_));
  }
#line 3599 "SqlParser_gen.cpp" /* yacc.c:1661  */
    break;

  case 29:
#line 774 "../SqlParser.ypp" /* yacc.c:1661  */
    {
    (yyval.data_type_) = nullptr;
    NotSupported(&(yylsp[0]), yyscanner, "BIT data type");
    YYERROR;
  }
#line 3609 "SqlParser_gen.cpp" /* yacc.c:1661  */
    break;

  case 30:
#line 779 "../SqlParser.ypp" /* yacc.c:1661  */
    {
    (yyval.data_type_) = new quickstep::ParseDataType(quickstep::TypeFactory::GetType(quickstep::kDate));
  }
#line 3617 "SqlParser_gen.cpp" /* yacc.c:1661  */
    break;

  case 31:
#line 782 "../SqlParser.ypp" /* yacc.c:1661  */
    {
    (yyval.data_type_) = new quickstep::ParseDataType(quickstep::TypeFactory::GetType(quickstep::kDatetime));
  }
#line 3625 "SqlParser_gen.cpp" /* yacc.c:1661  */
    break;

  case 32:
#line 785 "../SqlParser.ypp" /* yacc.c:1661  */
    {
    (yyval.data_type_) = nullptr;
    NotSupported(&(yylsp[0]), yyscanner, "TIME data type");
    YYERROR;
  }
#line 3635 "SqlParser_gen.cpp" /* yacc.c:1661  */
    break;

  case 33:
#line 790 "../SqlParser.ypp" /* yacc.c:1661  */
    {
    (yyval.data_type_) = new quickstep::ParseDataType(quickstep::TypeFactory::GetType(quickstep::kDatetime));
  }
#line 3643 "SqlParser_gen.cpp" /* yacc.c:1661  */
    break;

  case 34:
#line 793 "../SqlParser.ypp" /* yacc.c:1661  */
    {
    (yyval.data_type_) = new quickstep::ParseDataType(quickstep::TypeFactory::GetType(quickstep::kDouble));
  }
#line 3651 "SqlParser_gen.cpp" /* yacc.c:1661  */
    break;

  case 35:
#line 796 "../SqlParser.ypp" /* yacc.c:1661  */
    {
    (yyval.data_type_) = new quickstep::ParseDataType(quickstep::TypeFactory::GetType(quickstep::kDouble));
  }
#line 3659 "SqlParser_gen.cpp" /* yacc.c:1661  */
    break;

  case 36:
#line 799 "../SqlParser.ypp" /* yacc.c:1661  */
    {
    (yyval.data_type_) = new quickstep::ParseDataType(quickstep::TypeFactory::GetType(quickstep::kDouble));
  }
#line 3667 "SqlParser_gen.cpp" /* yacc.c:1661  */
    break;

  case 37:
#line 802 "../SqlParser.ypp" /* yacc.c:1661  */
    {
    (yyval.data_type_) = new quickstep::ParseDataType(quickstep::TypeFactory::GetType(quickstep::kFloat));
  }
#line 3675 "SqlParser_gen.cpp" /* yacc.c:1661  */
    break;

  case 38:
#line 805 "../SqlParser.ypp" /* yacc.c:1661  */
    {
    (yyval.data_type_) = new quickstep::ParseDataType(quickstep::TypeFactory::GetType(quickstep::kInt));
  }
#line 3683 "SqlParser_gen.cpp" /* yacc.c:1661  */
    break;

  case 39:
#line 808 "../SqlParser.ypp" /* yacc.c:1661  */
    {
    (yyval.data_type_) = new quickstep::ParseDataType(quickstep::TypeFactory::GetType(quickstep::kInt));
  }
#line 3691 "SqlParser_gen.cpp" /* yacc.c:1661  */
    break;

  case 40:
#line 811 "../SqlParser.ypp" /* yacc.c:1661  */
    {
    (yyval.data_type_) = new quickstep::ParseDataType(quickstep::TypeFactory::GetType(quickstep::kLong));
  }
#line 3699 "SqlParser_gen.cpp" /* yacc.c:1661  */
    break;

  case 41:
#line 814 "../SqlParser.ypp" /* yacc.c:1661  */
    {
    (yyval.data_type_) = new quickstep::ParseDataType(quickstep::TypeFactory::GetType(quickstep::kLong));
  }
#line 3707 "SqlParser_gen.cpp" /* yacc.c:1661  */
    break;

  case 42:
#line 817 "../SqlParser.ypp" /* yacc.c:1661  */
    {
    /**
     * NOTE(chasseur): This pattern exhibits a shift/reduce conflict with the
     * TOKEN_INTERVAL case in 'literal_value'. Bison prefers to shift rather
     * than reduce, so the case in 'literal_value' has precedence over this.
     **/
    (yyval.data_type_) = nullptr;
    quickstep_yyerror(&(yylsp[0]), yyscanner, nullptr,
        "INTERVAL is ambiguous as a column type. Specify either DATETIME INTERVAL "
        "or YEARMONTH INTERVAL");
    YYERROR;
  }
#line 3724 "SqlParser_gen.cpp" /* yacc.c:1661  */
    break;

  case 43:
#line 829 "../SqlParser.ypp" /* yacc.c:1661  */
    {
    (yyval.data_type_) = new quickstep::ParseDataType(quickstep::TypeFactory::GetType(quickstep::kDatetimeInterval));
  }
#line 3732 "SqlParser_gen.cpp" /* yacc.c:1661  */
    break;

  case 44:
#line 832 "../SqlParser.ypp" /* yacc.c:1661  */
    {
    (yyval.data_type_) = new quickstep::ParseDataType(quickstep::TypeFactory::GetType(quickstep::kYearMonthInterval));
  }
#line 3740 "SqlParser_gen.cpp" /* yacc.c:1661  */
    break;

  case 45:
#line 835 "../SqlParser.ypp" /* yacc.c:1661  */
    {
    if ((yyvsp[-1].numeric_literal_value_)->float_like()) {
      delete (yyvsp[-1].numeric_literal_value_);
      (yyval.data_type_) = NULL;
      quickstep_yyerror(&(yylsp[-1]), yyscanner, nullptr, "Non-integer length supplied for CHAR type");
      YYERROR;
    } else {
      if ((yyvsp[-1].numeric_literal_value_)->long_value() <= 0) {
        delete (yyvsp[-1].numeric_literal_value_);
        (yyval.data_type_) = NULL;
        quickstep_yyerror(&(yylsp[-1]), yyscanner, nullptr, "Length for CHAR type must be at least 1");
        YYERROR;
      } else {
        (yyval.data_type_) = new quickstep::ParseDataType(quickstep::TypeFactory::GetType(quickstep::kChar, (yyvsp[-1].numeric_literal_value_)->long_value(), false));
        delete (yyvsp[-1].numeric_literal_value_);
      }
    }
  }
#line 3763 "SqlParser_gen.cpp" /* yacc.c:1661  */
    break;

  case 46:
#line 853 "../SqlParser.ypp" /* yacc.c:1661  */
    {
    if ((yyvsp[-1].numeric_literal_value_)->float_like()) {
      delete (yyvsp[-1].numeric_literal_value_);
      (yyval.data_type_) = NULL;
      quickstep_yyerror(&(yylsp[-1]), yyscanner, nullptr, "Non-integer length supplied for VARCHAR type");
      YYERROR;
    } else {
      if ((yyvsp[-1].numeric_literal_value_)->long_value() < 0) {
        delete (yyvsp[-1].numeric_literal_value_);
        (yyval.data_type_) = NULL;
        quickstep_yyerror(&(yylsp[-1]), yyscanner, nullptr, "Negative length supplied for VARCHAR type");
        YYERROR;
      } else {
        (yyval.data_type_) = new quickstep::ParseDataType(quickstep::TypeFactory::GetType(quickstep::kVarChar, (yyvsp[-1].numeric_literal_value_)->long_value(), false));
        delete (yyvsp[-1].numeric_literal_value_);
      }
    }
  }
#line 3786 "SqlParser_gen.cpp" /* yacc.c:1661  */
    break;

  case 47:
#line 873 "../SqlParser.ypp" /* yacc.c:1661  */
    {
    (yyval.column_constraint_) = new quickstep::ParseColumnConstraintNull((yylsp[0]).first_line, (yylsp[0]).first_column);
  }
#line 3794 "SqlParser_gen.cpp" /* yacc.c:1661  */
    break;

  case 48:
#line 876 "../SqlParser.ypp" /* yacc.c:1661  */
    {
    (yyval.column_constraint_) = new quickstep::ParseColumnConstraintNotNull((yylsp[-1]).first_line, (yylsp[-1]).first_column);
  }
#line 3802 "SqlParser_gen.cpp" /* yacc.c:1661  */
    break;

  case 49:
#line 879 "../SqlParser.ypp" /* yacc.c:1661  */
    {
    (yyval.column_constraint_) = nullptr;
    NotSupported(&(yylsp[0]), yyscanner, "Column Constraints (UNIQUE)");
    YYERROR;
  }
#line 3812 "SqlParser_gen.cpp" /* yacc.c:1661  */
    break;

  case 50:
#line 884 "../SqlParser.ypp" /* yacc.c:1661  */
    {
    (yyval.column_constraint_) = nullptr;
    NotSupported(&(yylsp[-1]), yyscanner, "Column Constraints (PRIMARY KEY)");
    YYERROR;
  }
#line 3822 "SqlParser_gen.cpp" /* yacc.c:1661  */
    break;

  case 51:
#line 889 "../SqlParser.ypp" /* yacc.c:1661  */
    {
    (yyval.column_constraint_) = nullptr;
    delete (yyvsp[0].literal_value_);
    NotSupported(&(yylsp[-1]), yyscanner, "Column Constraints (DEFAULT)");
    YYERROR;
  }
#line 3833 "SqlParser_gen.cpp" /* yacc.c:1661  */
    break;

  case 52:
#line 895 "../SqlParser.ypp" /* yacc.c:1661  */
    {
    (yyval.column_constraint_) = nullptr;
    delete (yyvsp[-1].predicate_);
    NotSupported(&(yylsp[-3]), yyscanner, "Column Constraints (CHECK)");
    YYERROR;
  }
#line 3844 "SqlParser_gen.cpp" /* yacc.c:1661  */
    break;

  case 53:
#line 901 "../SqlParser.ypp" /* yacc.c:1661  */
    {
    (yyval.column_constraint_) = nullptr;
    delete (yyvsp[-3].string_value_);
    delete (yyvsp[-1].string_value_);
    NotSupported(&(yylsp[-4]), yyscanner, "Foreign Keys");
    YYERROR;
  }
#line 3856 "SqlParser_gen.cpp" /* yacc.c:1661  */
    break;

  case 54:
#line 910 "../SqlParser.ypp" /* yacc.c:1661  */
    {
    (yyval.column_constraint_list_) = (yyvsp[-1].column_constraint_list_);
    (yyval.column_constraint_list_)->push_back((yyvsp[0].column_constraint_));
  }
#line 3865 "SqlParser_gen.cpp" /* yacc.c:1661  */
    break;

  case 55:
#line 914 "../SqlParser.ypp" /* yacc.c:1661  */
    {
    (yyval.column_constraint_list_) = new quickstep::PtrList<quickstep::ParseColumnConstraint>();
    (yyval.column_constraint_list_)->push_back((yyvsp[0].column_constraint_));
  }
#line 3874 "SqlParser_gen.cpp" /* yacc.c:1661  */
    break;

  case 56:
#line 920 "../SqlParser.ypp" /* yacc.c:1661  */
    {
    (yyval.column_constraint_list_) = nullptr;
  }
#line 3882 "SqlParser_gen.cpp" /* yacc.c:1661  */
    break;

  case 57:
#line 923 "../SqlParser.ypp" /* yacc.c:1661  */
    {
    (yyval.column_constraint_list_) = (yyvsp[0].column_constraint_list_);
  }
#line 3890 "SqlParser_gen.cpp" /* yacc.c:1661  */
    break;

  case 58:
#line 928 "../SqlParser.ypp" /* yacc.c:1661  */
    {
    delete (yyvsp[-1].string_list_);
    NotSupported(&(yylsp[-3]), yyscanner, "Table Constraints (UNIQUE)");
    YYERROR;
  }
#line 3900 "SqlParser_gen.cpp" /* yacc.c:1661  */
    break;

  case 59:
#line 933 "../SqlParser.ypp" /* yacc.c:1661  */
    {
    delete (yyvsp[-1].string_list_);
    NotSupported(&(yylsp[-4]), yyscanner, "Table Constraints (PRIMARY KEY)");
    YYERROR;
  }
#line 3910 "SqlParser_gen.cpp" /* yacc.c:1661  */
    break;

  case 60:
#line 938 "../SqlParser.ypp" /* yacc.c:1661  */
    {
    delete (yyvsp[-6].string_list_);
    delete (yyvsp[-3].string_value_);
    delete (yyvsp[-1].string_list_);
    NotSupported(&(yylsp[-9]), yyscanner, "Table Constraints (FOREIGN KEY)");
    YYERROR;
  }
#line 3922 "SqlParser_gen.cpp" /* yacc.c:1661  */
    break;

  case 61:
#line 945 "../SqlParser.ypp" /* yacc.c:1661  */
    {
    delete (yyvsp[-1].predicate_);
    NotSupported(&(yylsp[-3]), yyscanner, "Table Constraints (CHECK)");
    YYERROR;
  }
#line 3932 "SqlParser_gen.cpp" /* yacc.c:1661  */
    break;

  case 62:
#line 952 "../SqlParser.ypp" /* yacc.c:1661  */
    {
    NotSupported(&(yylsp[-2]), yyscanner, "Table Constraints");
    YYERROR;
  }
#line 3941 "SqlParser_gen.cpp" /* yacc.c:1661  */
    break;

  case 63:
#line 956 "../SqlParser.ypp" /* yacc.c:1661  */
    {
    NotSupported(&(yylsp[0]), yyscanner, "Table Constraints");
    YYERROR;
  }
#line 3950 "SqlParser_gen.cpp" /* yacc.c:1661  */
    break;

  case 64:
#line 962 "../SqlParser.ypp" /* yacc.c:1661  */
    {
    /* $$ = nullptr; */
  }
#line 3958 "SqlParser_gen.cpp" /* yacc.c:1661  */
    break;

  case 65:
#line 965 "../SqlParser.ypp" /* yacc.c:1661  */
    {
    /* $$ = $1; */
  }
#line 3966 "SqlParser_gen.cpp" /* yacc.c:1661  */
    break;

  case 66:
#line 970 "../SqlParser.ypp" /* yacc.c:1661  */
    {
    (yyval.attribute_list_) = nullptr;
  }
#line 3974 "SqlParser_gen.cpp" /* yacc.c:1661  */
    break;

  case 67:
#line 973 "../SqlParser.ypp" /* yacc.c:1661  */
    {
    (yyval.attribute_list_) = (yyvsp[-1].attribute_list_);
  }
#line 3982 "SqlParser_gen.cpp" /* yacc.c:1661  */
    break;

  case 68:
#line 978 "../SqlParser.ypp" /* yacc.c:1661  */
    {
    (yyval.block_properties_) = nullptr;
  }
#line 3990 "SqlParser_gen.cpp" /* yacc.c:1661  */
    break;

  case 69:
#line 981 "../SqlParser.ypp" /* yacc.c:1661  */
    {
    (yyval.block_properties_) = new quickstep::ParseBlockProperties((yylsp[-3]).first_line, (yylsp[-3]).first_column, (yyvsp[-1].key_value_list_));
  }
#line 3998 "SqlParser_gen.cpp" /* yacc.c:1661  */
    break;

  case 70:
#line 986 "../SqlParser.ypp" /* yacc.c:1661  */
    {
    (yyval.partition_clause_) = nullptr;
  }
#line 4006 "SqlParser_gen.cpp" /* yacc.c:1661  */
    break;

  case 71:
#line 989 "../SqlParser.ypp" /* yacc.c:1661  */
    {
    if ((yyvsp[0].numeric_literal_value_)->float_like()) {
      delete (yyvsp[0].numeric_literal_value_);
      (yyval.partition_clause_) = NULL;
      quickstep_yyerror(&(yylsp[0]), yyscanner, NULL, "NUMBER OF PARTITIONS must be an integer");
      YYERROR;
    } else {
      if ((yyvsp[0].numeric_literal_value_)->long_value() <= 0 || (yyvsp[0].numeric_literal_value_)->long_value() > 64) {
        delete (yyvsp[0].numeric_literal_value_);
        (yyval.partition_clause_) = NULL;
        quickstep_yyerror(&(yylsp[0]), yyscanner, NULL, "NUMBER OF PARITIONS must be between 1 and 64");
        YYERROR;
      } else {
        (yyval.partition_clause_) = new quickstep::ParsePartitionClause((yylsp[-7]).first_line, (yylsp[-7]).first_column, (yyvsp[-5].string_value_), (yyvsp[-3].string_list_), (yyvsp[0].numeric_literal_value_));
      }
    }
  }
#line 4028 "SqlParser_gen.cpp" /* yacc.c:1661  */
    break;

  case 72:
#line 1008 "../SqlParser.ypp" /* yacc.c:1661  */
    {
    (yyval.string_value_) = new quickstep::ParseString((yylsp[0]).first_line, (yylsp[0]).first_column, quickstep::kHashPartitionType);
  }
#line 4036 "SqlParser_gen.cpp" /* yacc.c:1661  */
    break;

  case 73:
#line 1011 "../SqlParser.ypp" /* yacc.c:1661  */
    {
    (yyval.string_value_) = new quickstep::ParseString((yylsp[0]).first_line, (yylsp[0]).first_column, quickstep::kRangePartitionType);
  }
#line 4044 "SqlParser_gen.cpp" /* yacc.c:1661  */
    break;

  case 74:
#line 1016 "../SqlParser.ypp" /* yacc.c:1661  */
    {
    (yyval.key_value_list_) = new quickstep::PtrList<quickstep::ParseKeyValue>();
    (yyval.key_value_list_)->push_back((yyvsp[0].key_value_));
  }
#line 4053 "SqlParser_gen.cpp" /* yacc.c:1661  */
    break;

  case 75:
#line 1020 "../SqlParser.ypp" /* yacc.c:1661  */
    {
    (yyval.key_value_list_) = (yyvsp[-2].key_value_list_);
    (yyval.key_value_list_)->push_back((yyvsp[0].key_value_));
  }
#line 4062 "SqlParser_gen.cpp" /* yacc.c:1661  */
    break;

  case 76:
#line 1026 "../SqlParser.ypp" /* yacc.c:1661  */
    {
    (yyval.key_value_) = (yyvsp[0].key_string_value_);
  }
#line 4070 "SqlParser_gen.cpp" /* yacc.c:1661  */
    break;

  case 77:
#line 1029 "../SqlParser.ypp" /* yacc.c:1661  */
    {
    (yyval.key_value_) = (yyvsp[0].key_string_list_);
  }
#line 4078 "SqlParser_gen.cpp" /* yacc.c:1661  */
    break;

  case 78:
#line 1032 "../SqlParser.ypp" /* yacc.c:1661  */
    {
    (yyval.key_value_) = (yyvsp[0].key_integer_value_);
  }
#line 4086 "SqlParser_gen.cpp" /* yacc.c:1661  */
    break;

  case 79:
#line 1035 "../SqlParser.ypp" /* yacc.c:1661  */
    {
    (yyval.key_value_) = (yyvsp[0].key_bool_value_);
  }
#line 4094 "SqlParser_gen.cpp" /* yacc.c:1661  */
    break;

  case 80:
#line 1040 "../SqlParser.ypp" /* yacc.c:1661  */
    {
    (yyval.key_string_value_) = new quickstep::ParseKeyStringValue((yylsp[-1]).first_line, (yylsp[-1]).first_column, (yyvsp[-1].string_value_), (yyvsp[0].string_value_));
  }
#line 4102 "SqlParser_gen.cpp" /* yacc.c:1661  */
    break;

  case 81:
#line 1043 "../SqlParser.ypp" /* yacc.c:1661  */
    {
    (yyval.key_string_value_) = new quickstep::ParseKeyStringValue((yylsp[-1]).first_line, (yylsp[-1]).first_column, (yyvsp[-1].string_value_), (yyvsp[0].string_value_));
  }
#line 4110 "SqlParser_gen.cpp" /* yacc.c:1661  */
    break;

  case 82:
#line 1046 "../SqlParser.ypp" /* yacc.c:1661  */
    {
    // This is a special case to handle the COMPRESS ALL option of the BLOCK PROPERTIES.
    (yyval.key_string_value_) = new quickstep::ParseKeyStringValue((yylsp[-1]).first_line, (yylsp[-1]).first_column, (yyvsp[-1].string_value_),
        new quickstep::ParseString((yylsp[0]).first_line, (yylsp[0]).first_column, "ALL"));
  }
#line 4120 "SqlParser_gen.cpp" /* yacc.c:1661  */
    break;

  case 83:
#line 1053 "../SqlParser.ypp" /* yacc.c:1661  */
    {
    (yyval.key_string_list_) = new quickstep::ParseKeyStringList((yylsp[-3]).first_line, (yylsp[-3]).first_column, (yyvsp[-3].string_value_), (yyvsp[-1].string_list_));
  }
#line 4128 "SqlParser_gen.cpp" /* yacc.c:1661  */
    break;

  case 84:
#line 1058 "../SqlParser.ypp" /* yacc.c:1661  */
    {
    if ((yyvsp[0].numeric_literal_value_)->float_like()) {
      delete (yyvsp[0].numeric_literal_value_);
      (yyval.key_integer_value_) = nullptr;
      quickstep_yyerror(&(yylsp[0]), yyscanner, nullptr, "Value must be an integer");
      YYERROR;
    }
    (yyval.key_integer_value_) = new quickstep::ParseKeyIntegerValue((yylsp[-1]).first_line, (yylsp[-1]).first_column, (yyvsp[-1].string_value_), (yyvsp[0].numeric_literal_value_));
  }
#line 4142 "SqlParser_gen.cpp" /* yacc.c:1661  */
    break;

  case 85:
#line 1069 "../SqlParser.ypp" /* yacc.c:1661  */
    {
    (yyval.key_bool_value_) = new quickstep::ParseKeyBoolValue((yylsp[-1]).first_line, (yylsp[-1]).first_column, (yyvsp[-1].string_value_), (yyvsp[0].boolean_value_));
  }
#line 4150 "SqlParser_gen.cpp" /* yacc.c:1661  */
    break;

  case 86:
#line 1074 "../SqlParser.ypp" /* yacc.c:1661  */
    {
    // Defaults to BitWeavingV, but IndexProperties can change this to H.
    (yyval.string_value_) = new quickstep::ParseString((yylsp[0]).first_line, (yylsp[0]).first_column,
           std::to_string(quickstep::IndexSubBlockType::kBitWeavingV));
  }
#line 4160 "SqlParser_gen.cpp" /* yacc.c:1661  */
    break;

  case 87:
#line 1079 "../SqlParser.ypp" /* yacc.c:1661  */
    {
    (yyval.string_value_) = new quickstep::ParseString((yylsp[0]).first_line, (yylsp[0]).first_column,
           std::to_string(quickstep::IndexSubBlockType::kBloomFilter));
  }
#line 4169 "SqlParser_gen.cpp" /* yacc.c:1661  */
    break;

  case 88:
#line 1083 "../SqlParser.ypp" /* yacc.c:1661  */
    {
    (yyval.string_value_) = new quickstep::ParseString((yylsp[0]).first_line, (yylsp[0]).first_column,
           std::to_string(quickstep::IndexSubBlockType::kCSBTree));
  }
#line 4178 "SqlParser_gen.cpp" /* yacc.c:1661  */
    break;

  case 89:
#line 1087 "../SqlParser.ypp" /* yacc.c:1661  */
    {
    (yyval.string_value_) = new quickstep::ParseString((yylsp[0]).first_line, (yylsp[0]).first_column,
           std::to_string(quickstep::IndexSubBlockType::kSMA));
  }
#line 4187 "SqlParser_gen.cpp" /* yacc.c:1661  */
    break;

  case 90:
#line 1093 "../SqlParser.ypp" /* yacc.c:1661  */
    {
    (yyval.key_value_list_) = nullptr;
  }
#line 4195 "SqlParser_gen.cpp" /* yacc.c:1661  */
    break;

  case 91:
#line 1096 "../SqlParser.ypp" /* yacc.c:1661  */
    {
    (yyval.key_value_list_) = (yyvsp[-1].key_value_list_);
  }
#line 4203 "SqlParser_gen.cpp" /* yacc.c:1661  */
    break;

  case 92:
#line 1102 "../SqlParser.ypp" /* yacc.c:1661  */
    {
    delete (yyvsp[-7].string_value_);
    delete (yyvsp[-5].string_list_);
    delete (yyvsp[-1].literal_value_list_);
    (yyval.insert_statement_) = nullptr;
    NotSupported(&(yylsp[-6]), yyscanner, "list of column names in INSERT statement");
    YYERROR;
  }
#line 4216 "SqlParser_gen.cpp" /* yacc.c:1661  */
    break;

  case 93:
#line 1110 "../SqlParser.ypp" /* yacc.c:1661  */
    {
    (yyval.insert_statement_) = new quickstep::ParseStatementInsertTuple((yylsp[-4]).first_line, (yylsp[-4]).first_column, (yyvsp[-2].string_value_), (yyvsp[0].literal_value_list_multiple_));
  }
#line 4224 "SqlParser_gen.cpp" /* yacc.c:1661  */
    break;

  case 94:
#line 1113 "../SqlParser.ypp" /* yacc.c:1661  */
    {
    (yyval.insert_statement_) = new quickstep::ParseStatementInsertSelection((yylsp[-3]).first_line, (yylsp[-2]).first_column, (yyvsp[-1].string_value_), (yyvsp[0].select_query_), nullptr);
  }
#line 4232 "SqlParser_gen.cpp" /* yacc.c:1661  */
    break;

  case 95:
#line 1116 "../SqlParser.ypp" /* yacc.c:1661  */
    {
    (yyval.insert_statement_) = new quickstep::ParseStatementInsertSelection((yylsp[-4]).first_line, (yylsp[-3]).first_column, (yyvsp[-1].string_value_), (yyvsp[0].select_query_), (yyvsp[-4].with_list_));
  }
#line 4240 "SqlParser_gen.cpp" /* yacc.c:1661  */
    break;

  case 96:
#line 1122 "../SqlParser.ypp" /* yacc.c:1661  */
    {
    (yyval.copy_statement_) = new quickstep::ParseStatementCopy((yylsp[-4]).first_line, (yylsp[-4]).first_column,
                                           quickstep::ParseStatementCopy::kFrom,
                                           (yyvsp[-3].string_value_), (yyvsp[-1].string_value_), (yyvsp[0].key_value_list_));
  }
#line 4250 "SqlParser_gen.cpp" /* yacc.c:1661  */
    break;

  case 97:
#line 1127 "../SqlParser.ypp" /* yacc.c:1661  */
    {
    (yyval.copy_statement_) = new quickstep::ParseStatementCopy((yylsp[-3]).first_line, (yylsp[-3]).first_column,
                                           quickstep::ParseStatementCopy::kTo,
                                           (yyvsp[-2].string_value_), (yyvsp[-1].string_value_), (yyvsp[0].key_value_list_));
  }
#line 4260 "SqlParser_gen.cpp" /* yacc.c:1661  */
    break;

  case 98:
#line 1132 "../SqlParser.ypp" /* yacc.c:1661  */
    {
    (yyval.copy_statement_) = new quickstep::ParseStatementCopy((yylsp[-3]).first_line, (yylsp[-3]).first_column,
                                           (yyvsp[-2].set_operation_), nullptr, (yyvsp[-1].string_value_), (yyvsp[0].key_value_list_));
  }
#line 4269 "SqlParser_gen.cpp" /* yacc.c:1661  */
    break;

  case 99:
#line 1136 "../SqlParser.ypp" /* yacc.c:1661  */
    {
    (yyval.copy_statement_) = new quickstep::ParseStatementCopy((yylsp[-4]).first_line, (yylsp[-4]).first_column,
                                           (yyvsp[-2].set_operation_), (yyvsp[-4].with_list_), (yyvsp[-1].string_value_), (yyvsp[0].key_value_list_));
  }
#line 4278 "SqlParser_gen.cpp" /* yacc.c:1661  */
    break;

  case 100:
#line 1142 "../SqlParser.ypp" /* yacc.c:1661  */
    {
    (yyval.string_value_) = new quickstep::ParseString((yyvsp[0].string_value_)->line_number(), (yyvsp[0].string_value_)->column_number(), "@" + (yyvsp[0].string_value_)->value());
    delete (yyvsp[0].string_value_);
  }
#line 4287 "SqlParser_gen.cpp" /* yacc.c:1661  */
    break;

  case 101:
#line 1146 "../SqlParser.ypp" /* yacc.c:1661  */
    {
    (yyval.string_value_) = new quickstep::ParseString((yylsp[0]).first_line, (yylsp[0]).first_column, "$stdout");
  }
#line 4295 "SqlParser_gen.cpp" /* yacc.c:1661  */
    break;

  case 102:
#line 1149 "../SqlParser.ypp" /* yacc.c:1661  */
    {
    (yyval.string_value_) = new quickstep::ParseString((yylsp[0]).first_line, (yylsp[0]).first_column, "$stderr");
  }
#line 4303 "SqlParser_gen.cpp" /* yacc.c:1661  */
    break;

  case 103:
#line 1154 "../SqlParser.ypp" /* yacc.c:1661  */
    {
    (yyval.key_value_list_) = nullptr;
  }
#line 4311 "SqlParser_gen.cpp" /* yacc.c:1661  */
    break;

  case 104:
#line 1157 "../SqlParser.ypp" /* yacc.c:1661  */
    {
    (yyval.key_value_list_) = (yyvsp[-1].key_value_list_);
  }
#line 4319 "SqlParser_gen.cpp" /* yacc.c:1661  */
    break;

  case 105:
#line 1162 "../SqlParser.ypp" /* yacc.c:1661  */
    {
    (yyval.update_statement_) = new quickstep::ParseStatementUpdate((yylsp[-4]).first_line, (yylsp[-4]).first_column, (yyvsp[-3].string_value_), (yyvsp[-1].assignment_list_), (yyvsp[0].predicate_));
  }
#line 4327 "SqlParser_gen.cpp" /* yacc.c:1661  */
    break;

  case 106:
#line 1167 "../SqlParser.ypp" /* yacc.c:1661  */
    {
    (yyval.delete_statement_) = new quickstep::ParseStatementDelete((yylsp[-3]).first_line, (yylsp[-3]).first_column, (yyvsp[-1].string_value_), (yyvsp[0].predicate_));
  }
#line 4335 "SqlParser_gen.cpp" /* yacc.c:1661  */
    break;

  case 107:
#line 1172 "../SqlParser.ypp" /* yacc.c:1661  */
    {
    (yyval.assignment_list_) = (yyvsp[-2].assignment_list_);
    (yyval.assignment_list_)->push_back((yyvsp[0].assignment_));
  }
#line 4344 "SqlParser_gen.cpp" /* yacc.c:1661  */
    break;

  case 108:
#line 1176 "../SqlParser.ypp" /* yacc.c:1661  */
    {
    (yyval.assignment_list_) = new quickstep::PtrList<quickstep::ParseAssignment>();
    (yyval.assignment_list_)->push_back((yyvsp[0].assignment_));
  }
#line 4353 "SqlParser_gen.cpp" /* yacc.c:1661  */
    break;

  case 109:
#line 1182 "../SqlParser.ypp" /* yacc.c:1661  */
    {
    (yyval.assignment_) = new quickstep::ParseAssignment((yylsp[-2]).first_line, (yylsp[-2]).first_column, (yyvsp[-2].string_value_), (yyvsp[0].expression_));
  }
#line 4361 "SqlParser_gen.cpp" /* yacc.c:1661  */
    break;

  case 110:
#line 1191 "../SqlParser.ypp" /* yacc.c:1661  */
    {
    (yyval.set_operation_statement_) = new quickstep::ParseStatementSetOperation((yylsp[-1]).first_line, (yylsp[-1]).first_column, (yyvsp[-1].set_operation_), nullptr, (yyvsp[0].opt_priority_clause_));
  }
#line 4369 "SqlParser_gen.cpp" /* yacc.c:1661  */
    break;

  case 111:
#line 1194 "../SqlParser.ypp" /* yacc.c:1661  */
    {
    (yyval.set_operation_statement_) = new quickstep::ParseStatementSetOperation((yylsp[-2]).first_line, (yylsp[-2]).first_column, (yyvsp[-1].set_operation_), (yyvsp[-2].with_list_), (yyvsp[0].opt_priority_clause_));
  }
#line 4377 "SqlParser_gen.cpp" /* yacc.c:1661  */
    break;

  case 112:
#line 1199 "../SqlParser.ypp" /* yacc.c:1661  */
    {
    (yyval.opt_priority_clause_) = nullptr;
  }
#line 4385 "SqlParser_gen.cpp" /* yacc.c:1661  */
    break;

  case 113:
#line 1202 "../SqlParser.ypp" /* yacc.c:1661  */
    {
    if ((yyvsp[0].numeric_literal_value_)->float_like()) {
      delete (yyvsp[0].numeric_literal_value_);
      (yyval.opt_priority_clause_) = nullptr;
      quickstep_yyerror(&(yylsp[0]), yyscanner, nullptr, "PRIORITY value must be an integer");
      YYERROR;
    } else {
      if ((yyvsp[0].numeric_literal_value_)->long_value() <= 0) {
        delete (yyvsp[0].numeric_literal_value_);
        (yyval.opt_priority_clause_) = nullptr;
        quickstep_yyerror(&(yylsp[0]), yyscanner, nullptr, "PRIORITY value must be positive");
        YYERROR;
      } else {
        (yyval.opt_priority_clause_) = new quickstep::ParsePriority((yylsp[-2]).first_line, (yylsp[-2]).first_column, (yyvsp[0].numeric_literal_value_));
      }
    }
  }
#line 4407 "SqlParser_gen.cpp" /* yacc.c:1661  */
    break;

  case 114:
#line 1221 "../SqlParser.ypp" /* yacc.c:1661  */
    {
    (yyval.with_list_) = (yyvsp[0].with_list_);
  }
#line 4415 "SqlParser_gen.cpp" /* yacc.c:1661  */
    break;

  case 115:
#line 1226 "../SqlParser.ypp" /* yacc.c:1661  */
    {
    (yyval.with_list_) = new quickstep::PtrVector<quickstep::ParseSubqueryTableReference>();
    (yyval.with_list_)->push_back((yyvsp[0].with_list_element_));
  }
#line 4424 "SqlParser_gen.cpp" /* yacc.c:1661  */
    break;

  case 116:
#line 1230 "../SqlParser.ypp" /* yacc.c:1661  */
    {
    (yyval.with_list_) = (yyvsp[-2].with_list_);
    (yyval.with_list_)->push_back((yyvsp[0].with_list_element_));
  }
#line 4433 "SqlParser_gen.cpp" /* yacc.c:1661  */
    break;

  case 117:
#line 1236 "../SqlParser.ypp" /* yacc.c:1661  */
    {
    (yyval.with_list_element_) = new quickstep::ParseSubqueryTableReference((yylsp[-2]).first_line, (yylsp[-2]).first_column, (yyvsp[0].subquery_expression_));
    (yyval.with_list_element_)->set_table_reference_signature((yyvsp[-2].table_reference_signature_));
  }
#line 4442 "SqlParser_gen.cpp" /* yacc.c:1661  */
    break;

  case 118:
#line 1242 "../SqlParser.ypp" /* yacc.c:1661  */
    {
    if ((yyvsp[-1].boolean_value_)) {
      (yyval.set_operation_) = new quickstep::ParseSetOperation((yylsp[-3]).first_line, (yylsp[-3]).first_column, quickstep::ParseSetOperation::kUnion);
    } else {
      (yyval.set_operation_) = new quickstep::ParseSetOperation((yylsp[-3]).first_line, (yylsp[-3]).first_column, quickstep::ParseSetOperation::kUnionAll);
    }
    (yyval.set_operation_)->addOperand((yyvsp[-3].set_operation_));
    (yyval.set_operation_)->addOperand((yyvsp[0].set_operation_));
  }
#line 4456 "SqlParser_gen.cpp" /* yacc.c:1661  */
    break;

  case 119:
#line 1251 "../SqlParser.ypp" /* yacc.c:1661  */
    {
    (yyval.set_operation_) = (yyvsp[0].set_operation_);
  }
#line 4464 "SqlParser_gen.cpp" /* yacc.c:1661  */
    break;

  case 120:
#line 1256 "../SqlParser.ypp" /* yacc.c:1661  */
    {
    (yyval.set_operation_) = new quickstep::ParseSetOperation((yylsp[-2]).first_line, (yylsp[-2]).first_column, quickstep::ParseSetOperation::kIntersect);
    quickstep::ParseSetOperation *op = new quickstep::ParseSetOperation(
        (yylsp[0]).first_line, (yylsp[0]).first_column, quickstep::ParseSetOperation::kSelect);
    op->addOperand((yyvsp[0].select_query_));
    (yyval.set_operation_)->addOperand((yyvsp[-2].set_operation_));
    (yyval.set_operation_)->addOperand(op);
  }
#line 4477 "SqlParser_gen.cpp" /* yacc.c:1661  */
    break;

  case 121:
#line 1264 "../SqlParser.ypp" /* yacc.c:1661  */
    {
    (yyval.set_operation_) = new quickstep::ParseSetOperation((yylsp[0]).first_line, (yylsp[0]).first_column, quickstep::ParseSetOperation::kSelect);
    (yyval.set_operation_)->addOperand((yyvsp[0].select_query_));
  }
#line 4486 "SqlParser_gen.cpp" /* yacc.c:1661  */
    break;

  case 122:
#line 1271 "../SqlParser.ypp" /* yacc.c:1661  */
    {
    (yyval.select_query_) = new quickstep::ParseSelect((yylsp[-9]).first_line, (yylsp[-9]).first_column, (yyvsp[-7].selection_), (yyvsp[-6].table_reference_list_), (yyvsp[-5].predicate_), (yyvsp[-4].opt_group_by_clause_), (yyvsp[-3].opt_having_clause_), (yyvsp[-2].opt_order_by_clause_), (yyvsp[-1].opt_limit_clause_), (yyvsp[0].opt_window_clause_));
  }
#line 4494 "SqlParser_gen.cpp" /* yacc.c:1661  */
    break;

  case 123:
#line 1276 "../SqlParser.ypp" /* yacc.c:1661  */
    {
    (yyval.boolean_value_) = true;  // Distinct
  }
#line 4502 "SqlParser_gen.cpp" /* yacc.c:1661  */
    break;

  case 124:
#line 1279 "../SqlParser.ypp" /* yacc.c:1661  */
    {
    (yyval.boolean_value_) = false;  // All
  }
#line 4510 "SqlParser_gen.cpp" /* yacc.c:1661  */
    break;

  case 125:
#line 1282 "../SqlParser.ypp" /* yacc.c:1661  */
    {
    (yyval.boolean_value_) = true;  // Distinct
  }
#line 4518 "SqlParser_gen.cpp" /* yacc.c:1661  */
    break;

  case 126:
#line 1287 "../SqlParser.ypp" /* yacc.c:1661  */
    {
    (yyval.selection_) = new quickstep::ParseSelectionStar((yylsp[0]).first_line, (yylsp[0]).first_column);
  }
#line 4526 "SqlParser_gen.cpp" /* yacc.c:1661  */
    break;

  case 127:
#line 1290 "../SqlParser.ypp" /* yacc.c:1661  */
    {
    (yyval.selection_) = (yyvsp[0].selection_list_);
  }
#line 4534 "SqlParser_gen.cpp" /* yacc.c:1661  */
    break;

  case 128:
#line 1295 "../SqlParser.ypp" /* yacc.c:1661  */
    {
    (yyval.selection_list_) = new quickstep::ParseSelectionList((yylsp[0]).first_line, (yylsp[0]).first_column);
    (yyval.selection_list_)->add((yyvsp[0].selection_item_));
  }
#line 4543 "SqlParser_gen.cpp" /* yacc.c:1661  */
    break;

  case 129:
#line 1299 "../SqlParser.ypp" /* yacc.c:1661  */
    {
    (yyval.selection_list_) = (yyvsp[-2].selection_list_);
    (yyval.selection_list_)->add((yyvsp[0].selection_item_));
  }
#line 4552 "SqlParser_gen.cpp" /* yacc.c:1661  */
    break;

  case 130:
#line 1305 "../SqlParser.ypp" /* yacc.c:1661  */
    {
    (yyval.selection_item_) = new quickstep::ParseSelectionItem((yylsp[-2]).first_line, (yylsp[-2]).first_column, (yyvsp[-2].expression_), (yyvsp[0].string_value_));
  }
#line 4560 "SqlParser_gen.cpp" /* yacc.c:1661  */
    break;

  case 131:
#line 1308 "../SqlParser.ypp" /* yacc.c:1661  */
    {
    (yyval.selection_item_) = new quickstep::ParseSelectionItem((yylsp[-1]).first_line, (yylsp[-1]).first_column, (yyvsp[-1].expression_), (yyvsp[0].string_value_));
  }
#line 4568 "SqlParser_gen.cpp" /* yacc.c:1661  */
    break;

  case 132:
#line 1311 "../SqlParser.ypp" /* yacc.c:1661  */
    {
    (yyval.selection_item_) = new quickstep::ParseSelectionItem((yylsp[0]).first_line, (yylsp[0]).first_column, (yyvsp[0].expression_));
  }
#line 4576 "SqlParser_gen.cpp" /* yacc.c:1661  */
    break;

  case 133:
#line 1316 "../SqlParser.ypp" /* yacc.c:1661  */
    {
    (yyval.table_reference_list_) = (yyvsp[0].table_reference_list_);
  }
#line 4584 "SqlParser_gen.cpp" /* yacc.c:1661  */
    break;

  case 134:
#line 1321 "../SqlParser.ypp" /* yacc.c:1661  */
    {
    (yyval.subquery_expression_) = new quickstep::ParseSubqueryExpression((yylsp[-2]).first_line, (yylsp[-2]).first_column, (yyvsp[-1].set_operation_));
  }
#line 4592 "SqlParser_gen.cpp" /* yacc.c:1661  */
    break;

  case 135:
#line 1326 "../SqlParser.ypp" /* yacc.c:1661  */
    {
    (yyval.opt_sample_clause_) = NULL;
  }
#line 4600 "SqlParser_gen.cpp" /* yacc.c:1661  */
    break;

  case 136:
#line 1329 "../SqlParser.ypp" /* yacc.c:1661  */
    {
    (yyval.opt_sample_clause_) = new quickstep::ParseSample((yylsp[-2]).first_line, (yylsp[-2]).first_column, true, (yyvsp[-1].numeric_literal_value_));
  }
#line 4608 "SqlParser_gen.cpp" /* yacc.c:1661  */
    break;

  case 137:
#line 1332 "../SqlParser.ypp" /* yacc.c:1661  */
    {
    (yyval.opt_sample_clause_) = new quickstep::ParseSample((yylsp[-2]).first_line, (yylsp[-2]).first_column, false, (yyvsp[-1].numeric_literal_value_));
  }
#line 4616 "SqlParser_gen.cpp" /* yacc.c:1661  */
    break;

  case 138:
#line 1337 "../SqlParser.ypp" /* yacc.c:1661  */
    {
    (yyval.join_type_) = quickstep::ParseJoinedTableReference::JoinType::kInnerJoin;
  }
#line 4624 "SqlParser_gen.cpp" /* yacc.c:1661  */
    break;

  case 139:
#line 1340 "../SqlParser.ypp" /* yacc.c:1661  */
    {
    (yyval.join_type_) = quickstep::ParseJoinedTableReference::JoinType::kInnerJoin;
  }
#line 4632 "SqlParser_gen.cpp" /* yacc.c:1661  */
    break;

  case 140:
#line 1343 "../SqlParser.ypp" /* yacc.c:1661  */
    {
    (yyval.join_type_) = quickstep::ParseJoinedTableReference::JoinType::kLeftOuterJoin;
  }
#line 4640 "SqlParser_gen.cpp" /* yacc.c:1661  */
    break;

  case 141:
#line 1346 "../SqlParser.ypp" /* yacc.c:1661  */
    {
    (yyval.join_type_) = quickstep::ParseJoinedTableReference::JoinType::kLeftOuterJoin;
  }
#line 4648 "SqlParser_gen.cpp" /* yacc.c:1661  */
    break;

  case 142:
#line 1349 "../SqlParser.ypp" /* yacc.c:1661  */
    {
    (yyval.join_type_) = quickstep::ParseJoinedTableReference::JoinType::kRightOuterJoin;
  }
#line 4656 "SqlParser_gen.cpp" /* yacc.c:1661  */
    break;

  case 143:
#line 1352 "../SqlParser.ypp" /* yacc.c:1661  */
    {
    (yyval.join_type_) = quickstep::ParseJoinedTableReference::JoinType::kRightOuterJoin;
  }
#line 4664 "SqlParser_gen.cpp" /* yacc.c:1661  */
    break;

  case 144:
#line 1355 "../SqlParser.ypp" /* yacc.c:1661  */
    {
    (yyval.join_type_) = quickstep::ParseJoinedTableReference::JoinType::kFullOuterJoin;
  }
#line 4672 "SqlParser_gen.cpp" /* yacc.c:1661  */
    break;

  case 145:
#line 1358 "../SqlParser.ypp" /* yacc.c:1661  */
    {
    (yyval.join_type_) = quickstep::ParseJoinedTableReference::JoinType::kFullOuterJoin;
  }
#line 4680 "SqlParser_gen.cpp" /* yacc.c:1661  */
    break;

  case 146:
#line 1363 "../SqlParser.ypp" /* yacc.c:1661  */
    {
    (yyval.table_reference_) = new quickstep::ParseJoinedTableReference((yylsp[-3]).first_line, (yylsp[-3]).first_column, (yyvsp[-4].join_type_), (yyvsp[-5].table_reference_), (yyvsp[-2].table_reference_), (yyvsp[0].predicate_));
  }
#line 4688 "SqlParser_gen.cpp" /* yacc.c:1661  */
    break;

  case 147:
#line 1366 "../SqlParser.ypp" /* yacc.c:1661  */
    {
    (yyval.table_reference_) = new quickstep::ParseTransitiveClosureTableReference((yylsp[-4]).first_line, (yylsp[-4]).first_column, (yyvsp[-5].table_reference_), (yyvsp[-2].table_reference_));
    (yyval.table_reference_)->set_table_reference_signature((yyvsp[0].table_reference_signature_));
  }
#line 4697 "SqlParser_gen.cpp" /* yacc.c:1661  */
    break;

  case 148:
#line 1370 "../SqlParser.ypp" /* yacc.c:1661  */
    {
    (yyval.table_reference_) = (yyvsp[0].table_reference_);
  }
#line 4705 "SqlParser_gen.cpp" /* yacc.c:1661  */
    break;

  case 149:
#line 1375 "../SqlParser.ypp" /* yacc.c:1661  */
    {
    (yyval.table_reference_) = new quickstep::ParseSubqueryTableReference((yylsp[-1]).first_line, (yylsp[-1]).first_column, (yyvsp[-1].subquery_expression_));
    (yyval.table_reference_)->set_table_reference_signature((yyvsp[0].table_reference_signature_));
  }
#line 4714 "SqlParser_gen.cpp" /* yacc.c:1661  */
    break;

  case 150:
#line 1379 "../SqlParser.ypp" /* yacc.c:1661  */
    {
    (yyval.table_reference_) = new quickstep::ParseSimpleTableReference((yylsp[-2]).first_line, (yylsp[-2]).first_column, (yyvsp[-2].string_value_), (yyvsp[-1].opt_sample_clause_));
    (yyval.table_reference_)->set_table_reference_signature((yyvsp[0].table_reference_signature_));
  }
#line 4723 "SqlParser_gen.cpp" /* yacc.c:1661  */
    break;

  case 151:
#line 1383 "../SqlParser.ypp" /* yacc.c:1661  */
    {
    (yyval.table_reference_) = new quickstep::ParseSimpleTableReference((yylsp[-1]).first_line, (yylsp[-1]).first_column, (yyvsp[-1].string_value_), (yyvsp[0].opt_sample_clause_));
  }
#line 4731 "SqlParser_gen.cpp" /* yacc.c:1661  */
    break;

  case 152:
#line 1386 "../SqlParser.ypp" /* yacc.c:1661  */
    {
    (yyval.table_reference_) = new quickstep::ParseGeneratorTableReference((yylsp[-1]).first_line, (yylsp[-1]).first_column, (yyvsp[-1].function_call_));
    (yyval.table_reference_)->set_table_reference_signature((yyvsp[0].table_reference_signature_));
  }
#line 4740 "SqlParser_gen.cpp" /* yacc.c:1661  */
    break;

  case 153:
#line 1390 "../SqlParser.ypp" /* yacc.c:1661  */
    {
    (yyval.table_reference_) = new quickstep::ParseGeneratorTableReference((yylsp[0]).first_line, (yylsp[0]).first_column, (yyvsp[0].function_call_));
  }
#line 4748 "SqlParser_gen.cpp" /* yacc.c:1661  */
    break;

  case 154:
#line 1393 "../SqlParser.ypp" /* yacc.c:1661  */
    {
    (yyval.table_reference_) = (yyvsp[-1].table_reference_);
  }
#line 4756 "SqlParser_gen.cpp" /* yacc.c:1661  */
    break;

  case 155:
#line 1398 "../SqlParser.ypp" /* yacc.c:1661  */
    {
    (yyval.table_reference_signature_) = (yyvsp[0].table_reference_signature_);
  }
#line 4764 "SqlParser_gen.cpp" /* yacc.c:1661  */
    break;

  case 156:
#line 1401 "../SqlParser.ypp" /* yacc.c:1661  */
    {
    (yyval.table_reference_signature_) = (yyvsp[0].table_reference_signature_);
  }
#line 4772 "SqlParser_gen.cpp" /* yacc.c:1661  */
    break;

  case 157:
#line 1406 "../SqlParser.ypp" /* yacc.c:1661  */
    {
    (yyval.table_reference_signature_) = new ::quickstep::ParseTableReferenceSignature((yylsp[0]).first_line, (yylsp[0]).first_column, (yyvsp[0].string_value_));
  }
#line 4780 "SqlParser_gen.cpp" /* yacc.c:1661  */
    break;

  case 158:
#line 1409 "../SqlParser.ypp" /* yacc.c:1661  */
    {
    (yyval.table_reference_signature_) = new ::quickstep::ParseTableReferenceSignature((yylsp[-3]).first_line, (yylsp[-3]).first_column, (yyvsp[-3].string_value_), (yyvsp[-1].string_list_));
  }
#line 4788 "SqlParser_gen.cpp" /* yacc.c:1661  */
    break;

  case 159:
#line 1414 "../SqlParser.ypp" /* yacc.c:1661  */
    {
    (yyval.table_reference_list_) = new quickstep::PtrList<quickstep::ParseTableReference>();
    (yyval.table_reference_list_)->push_back((yyvsp[0].table_reference_));
  }
#line 4797 "SqlParser_gen.cpp" /* yacc.c:1661  */
    break;

  case 160:
#line 1418 "../SqlParser.ypp" /* yacc.c:1661  */
    {
    (yyval.table_reference_list_) = (yyvsp[-2].table_reference_list_);
    (yyval.table_reference_list_)->push_back((yyvsp[0].table_reference_));
  }
#line 4806 "SqlParser_gen.cpp" /* yacc.c:1661  */
    break;

  case 161:
#line 1424 "../SqlParser.ypp" /* yacc.c:1661  */
    {
    (yyval.opt_group_by_clause_) = nullptr;
  }
#line 4814 "SqlParser_gen.cpp" /* yacc.c:1661  */
    break;

  case 162:
#line 1427 "../SqlParser.ypp" /* yacc.c:1661  */
    {
    (yyval.opt_group_by_clause_) = new quickstep::ParseGroupBy((yylsp[-2]).first_line, (yylsp[-2]).first_column, (yyvsp[0].expression_list_));
  }
#line 4822 "SqlParser_gen.cpp" /* yacc.c:1661  */
    break;

  case 163:
#line 1432 "../SqlParser.ypp" /* yacc.c:1661  */
    {
    (yyval.opt_having_clause_) = nullptr;
  }
#line 4830 "SqlParser_gen.cpp" /* yacc.c:1661  */
    break;

  case 164:
#line 1435 "../SqlParser.ypp" /* yacc.c:1661  */
    {
    (yyval.opt_having_clause_) = new quickstep::ParseHaving((yylsp[-1]).first_line, (yylsp[-1]).first_column, (yyvsp[0].predicate_));
  }
#line 4838 "SqlParser_gen.cpp" /* yacc.c:1661  */
    break;

  case 165:
#line 1440 "../SqlParser.ypp" /* yacc.c:1661  */
    {
    (yyval.opt_order_by_clause_) = nullptr;
  }
#line 4846 "SqlParser_gen.cpp" /* yacc.c:1661  */
    break;

  case 166:
#line 1443 "../SqlParser.ypp" /* yacc.c:1661  */
    {
    (yyval.opt_order_by_clause_) = new quickstep::ParseOrderBy((yylsp[-2]).first_line, (yylsp[-2]).first_column, (yyvsp[0].order_commalist_));
  }
#line 4854 "SqlParser_gen.cpp" /* yacc.c:1661  */
    break;

  case 167:
#line 1448 "../SqlParser.ypp" /* yacc.c:1661  */
    {
    (yyval.opt_limit_clause_) = nullptr;
  }
#line 4862 "SqlParser_gen.cpp" /* yacc.c:1661  */
    break;

  case 168:
#line 1451 "../SqlParser.ypp" /* yacc.c:1661  */
    {
    if ((yyvsp[0].numeric_literal_value_)->float_like()) {
      delete (yyvsp[0].numeric_literal_value_);
      (yyval.opt_limit_clause_) = nullptr;
      quickstep_yyerror(&(yylsp[0]), yyscanner, nullptr, "LIMIT value must be an integer");
      YYERROR;
    } else {
      if ((yyvsp[0].numeric_literal_value_)->long_value() <= 0) {
        delete (yyvsp[0].numeric_literal_value_);
        (yyval.opt_limit_clause_) = nullptr;
        quickstep_yyerror(&(yylsp[0]), yyscanner, nullptr, "LIMIT value must be positive");
        YYERROR;
      } else {
        (yyval.opt_limit_clause_) = new quickstep::ParseLimit((yylsp[-1]).first_line, (yylsp[-1]).first_column, (yyvsp[0].numeric_literal_value_));
      }
    }
  }
#line 4884 "SqlParser_gen.cpp" /* yacc.c:1661  */
    break;

  case 169:
#line 1470 "../SqlParser.ypp" /* yacc.c:1661  */
    {
    (yyval.opt_window_clause_) = nullptr;
  }
#line 4892 "SqlParser_gen.cpp" /* yacc.c:1661  */
    break;

  case 170:
#line 1473 "../SqlParser.ypp" /* yacc.c:1661  */
    {
    (yyval.opt_window_clause_) = (yyvsp[0].opt_window_clause_);
  }
#line 4900 "SqlParser_gen.cpp" /* yacc.c:1661  */
    break;

  case 171:
#line 1478 "../SqlParser.ypp" /* yacc.c:1661  */
    {
    (yyval.opt_window_clause_) = new quickstep::PtrList<quickstep::ParseWindow>();
    (yyval.opt_window_clause_)->push_back((yyvsp[0].window_definition_));
  }
#line 4909 "SqlParser_gen.cpp" /* yacc.c:1661  */
    break;

  case 172:
#line 1482 "../SqlParser.ypp" /* yacc.c:1661  */
    {
    (yyval.opt_window_clause_) = (yyvsp[-1].opt_window_clause_);
    (yyval.opt_window_clause_)->push_back((yyvsp[0].window_definition_));
  }
#line 4918 "SqlParser_gen.cpp" /* yacc.c:1661  */
    break;

  case 173:
#line 1488 "../SqlParser.ypp" /* yacc.c:1661  */
    {
    (yyval.window_definition_) = (yyvsp[-1].window_definition_);
    (yyval.window_definition_)->setName((yyvsp[-4].string_value_));
  }
#line 4927 "SqlParser_gen.cpp" /* yacc.c:1661  */
    break;

  case 174:
#line 1494 "../SqlParser.ypp" /* yacc.c:1661  */
    {
    (yyval.window_definition_) = new quickstep::ParseWindow((yylsp[-2]).first_line, (yylsp[-2]).first_column, (yyvsp[-2].window_partition_by_list_), (yyvsp[-1].window_order_by_list_), (yyvsp[0].window_frame_info_));
  }
#line 4935 "SqlParser_gen.cpp" /* yacc.c:1661  */
    break;

  case 175:
#line 1499 "../SqlParser.ypp" /* yacc.c:1661  */
    {
    (yyval.window_partition_by_list_) = nullptr;
  }
#line 4943 "SqlParser_gen.cpp" /* yacc.c:1661  */
    break;

  case 176:
#line 1502 "../SqlParser.ypp" /* yacc.c:1661  */
    {
    (yyval.window_partition_by_list_) = (yyvsp[0].expression_list_);
  }
#line 4951 "SqlParser_gen.cpp" /* yacc.c:1661  */
    break;

  case 177:
#line 1507 "../SqlParser.ypp" /* yacc.c:1661  */
    {
    (yyval.window_order_by_list_) = nullptr;
  }
#line 4959 "SqlParser_gen.cpp" /* yacc.c:1661  */
    break;

  case 178:
#line 1510 "../SqlParser.ypp" /* yacc.c:1661  */
    {
    (yyval.window_order_by_list_) = (yyvsp[0].order_commalist_);
  }
#line 4967 "SqlParser_gen.cpp" /* yacc.c:1661  */
    break;

  case 179:
#line 1515 "../SqlParser.ypp" /* yacc.c:1661  */
    {
    (yyval.window_frame_info_) = nullptr;
  }
#line 4975 "SqlParser_gen.cpp" /* yacc.c:1661  */
    break;

  case 180:
#line 1518 "../SqlParser.ypp" /* yacc.c:1661  */
    {
    (yyval.window_frame_info_) = new quickstep::ParseFrameInfo((yylsp[-4]).first_line, (yylsp[-4]).first_column, (yyvsp[-4].boolean_value_), (yyvsp[-2].numeric_literal_value_)->long_value(), (yyvsp[0].numeric_literal_value_)->long_value());
  }
#line 4983 "SqlParser_gen.cpp" /* yacc.c:1661  */
    break;

  case 181:
#line 1523 "../SqlParser.ypp" /* yacc.c:1661  */
    {
    (yyval.boolean_value_) = true;
  }
#line 4991 "SqlParser_gen.cpp" /* yacc.c:1661  */
    break;

  case 182:
#line 1526 "../SqlParser.ypp" /* yacc.c:1661  */
    {
    (yyval.boolean_value_) = false;
  }
#line 4999 "SqlParser_gen.cpp" /* yacc.c:1661  */
    break;

  case 184:
#line 1532 "../SqlParser.ypp" /* yacc.c:1661  */
    {
    (yyval.numeric_literal_value_) = new quickstep::NumericParseLiteralValue((yylsp[-1]).first_line, (yylsp[-1]).first_column, "-1");
  }
#line 5007 "SqlParser_gen.cpp" /* yacc.c:1661  */
    break;

  case 185:
#line 1535 "../SqlParser.ypp" /* yacc.c:1661  */
    {
    (yyval.numeric_literal_value_) = new quickstep::NumericParseLiteralValue((yylsp[-1]).first_line, (yylsp[-1]).first_column, "0");
  }
#line 5015 "SqlParser_gen.cpp" /* yacc.c:1661  */
    break;

  case 187:
#line 1541 "../SqlParser.ypp" /* yacc.c:1661  */
    {
    (yyval.numeric_literal_value_) = new quickstep::NumericParseLiteralValue((yylsp[-1]).first_line, (yylsp[-1]).first_column, "-1");
  }
#line 5023 "SqlParser_gen.cpp" /* yacc.c:1661  */
    break;

  case 188:
#line 1544 "../SqlParser.ypp" /* yacc.c:1661  */
    {
    (yyval.numeric_literal_value_) = new quickstep::NumericParseLiteralValue((yylsp[-1]).first_line, (yylsp[-1]).first_column, "0");
  }
#line 5031 "SqlParser_gen.cpp" /* yacc.c:1661  */
    break;

  case 189:
#line 1549 "../SqlParser.ypp" /* yacc.c:1661  */
    {
    (yyval.order_commalist_) = new quickstep::PtrList<quickstep::ParseOrderByItem>();
    (yyval.order_commalist_)->push_back((yyvsp[0].order_item_));
  }
#line 5040 "SqlParser_gen.cpp" /* yacc.c:1661  */
    break;

  case 190:
#line 1553 "../SqlParser.ypp" /* yacc.c:1661  */
    {
    (yyval.order_commalist_) = (yyvsp[-2].order_commalist_);
    (yyval.order_commalist_)->push_back((yyvsp[0].order_item_));
  }
#line 5049 "SqlParser_gen.cpp" /* yacc.c:1661  */
    break;

  case 191:
#line 1559 "../SqlParser.ypp" /* yacc.c:1661  */
    {
    (yyval.order_item_) = new quickstep::ParseOrderByItem((yylsp[-2]).first_line, (yylsp[-2]).first_column, (yyvsp[-2].expression_), (yyvsp[-1].order_direction_), (yyvsp[0].order_direction_));
    delete (yyvsp[-1].order_direction_);
    delete (yyvsp[0].order_direction_);
  }
#line 5059 "SqlParser_gen.cpp" /* yacc.c:1661  */
    break;

  case 192:
#line 1566 "../SqlParser.ypp" /* yacc.c:1661  */
    {
    (yyval.order_direction_) = nullptr;
  }
#line 5067 "SqlParser_gen.cpp" /* yacc.c:1661  */
    break;

  case 193:
#line 1569 "../SqlParser.ypp" /* yacc.c:1661  */
    {
    (yyval.order_direction_) = new bool(true);
  }
#line 5075 "SqlParser_gen.cpp" /* yacc.c:1661  */
    break;

  case 194:
#line 1572 "../SqlParser.ypp" /* yacc.c:1661  */
    {
    (yyval.order_direction_) = new bool(false);
  }
#line 5083 "SqlParser_gen.cpp" /* yacc.c:1661  */
    break;

  case 195:
#line 1577 "../SqlParser.ypp" /* yacc.c:1661  */
    {
    (yyval.order_direction_) = nullptr;
  }
#line 5091 "SqlParser_gen.cpp" /* yacc.c:1661  */
    break;

  case 196:
#line 1580 "../SqlParser.ypp" /* yacc.c:1661  */
    {
    (yyval.order_direction_) = new bool(true);
  }
#line 5099 "SqlParser_gen.cpp" /* yacc.c:1661  */
    break;

  case 197:
#line 1583 "../SqlParser.ypp" /* yacc.c:1661  */
    {
    (yyval.order_direction_) = new bool(false);
  }
#line 5107 "SqlParser_gen.cpp" /* yacc.c:1661  */
    break;

  case 198:
#line 1589 "../SqlParser.ypp" /* yacc.c:1661  */
    {
    (yyval.predicate_) = nullptr;
  }
#line 5115 "SqlParser_gen.cpp" /* yacc.c:1661  */
    break;

  case 199:
#line 1592 "../SqlParser.ypp" /* yacc.c:1661  */
    {
    (yyval.predicate_) = (yyvsp[0].predicate_);
  }
#line 5123 "SqlParser_gen.cpp" /* yacc.c:1661  */
    break;

  case 200:
#line 1597 "../SqlParser.ypp" /* yacc.c:1661  */
    {
    (yyval.predicate_) = (yyvsp[0].predicate_);
  }
#line 5131 "SqlParser_gen.cpp" /* yacc.c:1661  */
    break;

  case 201:
#line 1602 "../SqlParser.ypp" /* yacc.c:1661  */
    {
    if ((yyvsp[-2].predicate_)->getParsePredicateType() == quickstep::ParsePredicate::kDisjunction) {
      (yyval.predicate_) = (yyvsp[-2].predicate_);
    } else {
      (yyval.predicate_) = new quickstep::ParsePredicateDisjunction((yylsp[-2]).first_line, (yylsp[-2]).first_column);
      static_cast<quickstep::ParsePredicateDisjunction *>((yyval.predicate_))->addPredicate((yyvsp[-2].predicate_));
    }
    static_cast<quickstep::ParsePredicateDisjunction *>((yyval.predicate_))->addPredicate((yyvsp[0].predicate_));
  }
#line 5145 "SqlParser_gen.cpp" /* yacc.c:1661  */
    break;

  case 202:
#line 1611 "../SqlParser.ypp" /* yacc.c:1661  */
    {
    (yyval.predicate_) = (yyvsp[0].predicate_);
  }
#line 5153 "SqlParser_gen.cpp" /* yacc.c:1661  */
    break;

  case 203:
#line 1616 "../SqlParser.ypp" /* yacc.c:1661  */
    {
    if ((yyvsp[-2].predicate_)->getParsePredicateType() == quickstep::ParsePredicate::kConjunction) {
      (yyval.predicate_) = (yyvsp[-2].predicate_);
    } else {
      (yyval.predicate_) = new quickstep::ParsePredicateConjunction((yylsp[-2]).first_line, (yylsp[-2]).first_column);
      static_cast<quickstep::ParsePredicateConjunction *>((yyval.predicate_))->addPredicate((yyvsp[-2].predicate_));
    }
    static_cast<quickstep::ParsePredicateConjunction *>((yyval.predicate_))->addPredicate((yyvsp[0].predicate_));
  }
#line 5167 "SqlParser_gen.cpp" /* yacc.c:1661  */
    break;

  case 204:
#line 1625 "../SqlParser.ypp" /* yacc.c:1661  */
    {
    (yyval.predicate_) = (yyvsp[0].predicate_);
  }
#line 5175 "SqlParser_gen.cpp" /* yacc.c:1661  */
    break;

  case 205:
#line 1630 "../SqlParser.ypp" /* yacc.c:1661  */
    {
    (yyval.predicate_) = new quickstep::ParsePredicateNegation((yylsp[-1]).first_line, (yylsp[-1]).first_column, (yyvsp[0].predicate_));
  }
#line 5183 "SqlParser_gen.cpp" /* yacc.c:1661  */
    break;

  case 206:
#line 1633 "../SqlParser.ypp" /* yacc.c:1661  */
    {
    (yyval.predicate_) = (yyvsp[0].predicate_);
  }
#line 5191 "SqlParser_gen.cpp" /* yacc.c:1661  */
    break;

  case 207:
#line 1638 "../SqlParser.ypp" /* yacc.c:1661  */
    {
    (yyval.predicate_) = new quickstep::ParsePredicateBetween((yylsp[-3]).first_line, (yylsp[-3]).first_column, (yyvsp[-4].expression_), (yyvsp[-2].expression_), (yyvsp[0].expression_));
  }
#line 5199 "SqlParser_gen.cpp" /* yacc.c:1661  */
    break;

  case 208:
#line 1641 "../SqlParser.ypp" /* yacc.c:1661  */
    {
    (yyval.predicate_) = new quickstep::ParsePredicateNegation(
        (yylsp[-4]).first_line, (yylsp[-4]).first_column,
        new quickstep::ParsePredicateBetween((yylsp[-3]).first_line, (yylsp[-3]).first_column, (yyvsp[-5].expression_), (yyvsp[-2].expression_), (yyvsp[0].expression_)));
  }
#line 5209 "SqlParser_gen.cpp" /* yacc.c:1661  */
    break;

  case 209:
#line 1646 "../SqlParser.ypp" /* yacc.c:1661  */
    {
    delete (yyvsp[-3].attribute_);
    (yyval.predicate_) = nullptr;
    NotSupported(&(yylsp[-2]), yyscanner, "NULL comparison predicates");
    YYERROR;
  }
#line 5220 "SqlParser_gen.cpp" /* yacc.c:1661  */
    break;

  case 210:
#line 1652 "../SqlParser.ypp" /* yacc.c:1661  */
    {
    delete (yyvsp[-2].attribute_);
    (yyval.predicate_) = nullptr;
    NotSupported(&(yylsp[-1]), yyscanner, "NULL comparison predicates");
    YYERROR;
  }
#line 5231 "SqlParser_gen.cpp" /* yacc.c:1661  */
    break;

  case 211:
#line 1658 "../SqlParser.ypp" /* yacc.c:1661  */
    {
    (yyval.predicate_) = new quickstep::ParsePredicateComparison((yylsp[-1]).first_line, (yylsp[-1]).first_column, *(yyvsp[-1].comparison_), (yyvsp[-2].expression_), (yyvsp[0].expression_));
  }
#line 5239 "SqlParser_gen.cpp" /* yacc.c:1661  */
    break;

  case 212:
#line 1661 "../SqlParser.ypp" /* yacc.c:1661  */
    {
    (yyval.predicate_) = (yyvsp[-1].predicate_);
  }
#line 5247 "SqlParser_gen.cpp" /* yacc.c:1661  */
    break;

  case 213:
#line 1664 "../SqlParser.ypp" /* yacc.c:1661  */
    {
    (yyval.predicate_) = new quickstep::ParsePredicateExists((yylsp[-1]).first_line, (yylsp[-1]).first_column, (yyvsp[0].subquery_expression_));
  }
#line 5255 "SqlParser_gen.cpp" /* yacc.c:1661  */
    break;

  case 214:
#line 1667 "../SqlParser.ypp" /* yacc.c:1661  */
    {
    (yyval.predicate_) = new quickstep::ParsePredicateInTableQuery((yylsp[-1]).first_line, (yylsp[-1]).first_column, (yyvsp[-2].expression_), (yyvsp[0].subquery_expression_));
  }
#line 5263 "SqlParser_gen.cpp" /* yacc.c:1661  */
    break;

  case 215:
#line 1670 "../SqlParser.ypp" /* yacc.c:1661  */
    {
    (yyval.predicate_) = new quickstep::ParsePredicateInValueList((yylsp[-3]).first_line, (yylsp[-3]).first_column, (yyvsp[-4].expression_), (yyvsp[-1].expression_list_));
  }
#line 5271 "SqlParser_gen.cpp" /* yacc.c:1661  */
    break;

  case 216:
#line 1673 "../SqlParser.ypp" /* yacc.c:1661  */
    {
    (yyval.predicate_) = new quickstep::ParsePredicateNegation(
        (yylsp[-2]).first_line,
        (yylsp[-2]).first_column,
        new quickstep::ParsePredicateInTableQuery((yylsp[-1]).first_line, (yylsp[-1]).first_column, (yyvsp[-3].expression_), (yyvsp[0].subquery_expression_)));
  }
#line 5282 "SqlParser_gen.cpp" /* yacc.c:1661  */
    break;

  case 217:
#line 1679 "../SqlParser.ypp" /* yacc.c:1661  */
    {
    (yyval.predicate_) = new quickstep::ParsePredicateNegation(
        (yylsp[-4]).first_line,
        (yylsp[-4]).first_column,
        new quickstep::ParsePredicateInValueList((yylsp[-3]).first_line, (yylsp[-3]).first_column, (yyvsp[-5].expression_), (yyvsp[-1].expression_list_)));
  }
#line 5293 "SqlParser_gen.cpp" /* yacc.c:1661  */
    break;

  case 218:
#line 1688 "../SqlParser.ypp" /* yacc.c:1661  */
    {
    (yyval.expression_) = new quickstep::ParseBinaryExpression((yylsp[-1]).first_line, (yylsp[-1]).first_column, *(yyvsp[-1].binary_operation_), (yyvsp[-2].expression_), (yyvsp[0].expression_));
  }
#line 5301 "SqlParser_gen.cpp" /* yacc.c:1661  */
    break;

  case 219:
#line 1691 "../SqlParser.ypp" /* yacc.c:1661  */
    {
    (yyval.expression_) = (yyvsp[0].expression_);
  }
#line 5309 "SqlParser_gen.cpp" /* yacc.c:1661  */
    break;

  case 220:
#line 1696 "../SqlParser.ypp" /* yacc.c:1661  */
    {
    (yyval.expression_) = new quickstep::ParseBinaryExpression((yylsp[-1]).first_line, (yylsp[-1]).first_column, *(yyvsp[-1].binary_operation_), (yyvsp[-2].expression_), (yyvsp[0].expression_));
  }
#line 5317 "SqlParser_gen.cpp" /* yacc.c:1661  */
    break;

  case 221:
#line 1699 "../SqlParser.ypp" /* yacc.c:1661  */
    {
    (yyval.expression_) = (yyvsp[0].expression_);
  }
#line 5325 "SqlParser_gen.cpp" /* yacc.c:1661  */
    break;

  case 222:
#line 1704 "../SqlParser.ypp" /* yacc.c:1661  */
    {
    (yyval.expression_) = new quickstep::ParseUnaryExpression((yylsp[-1]).first_line, (yylsp[-1]).first_column, *(yyvsp[-1].unary_operation_), (yyvsp[0].expression_));
  }
#line 5333 "SqlParser_gen.cpp" /* yacc.c:1661  */
    break;

  case 223:
#line 1707 "../SqlParser.ypp" /* yacc.c:1661  */
    {
    (yyval.expression_) = (yyvsp[0].expression_);
  }
#line 5341 "SqlParser_gen.cpp" /* yacc.c:1661  */
    break;

  case 224:
#line 1712 "../SqlParser.ypp" /* yacc.c:1661  */
    {
    (yyval.expression_) = (yyvsp[0].attribute_);
  }
#line 5349 "SqlParser_gen.cpp" /* yacc.c:1661  */
    break;

  case 225:
#line 1715 "../SqlParser.ypp" /* yacc.c:1661  */
    {
    (yyval.expression_) = new quickstep::ParseScalarLiteral((yyvsp[0].literal_value_));
  }
#line 5357 "SqlParser_gen.cpp" /* yacc.c:1661  */
    break;

  case 226:
#line 1718 "../SqlParser.ypp" /* yacc.c:1661  */
    {
    (yyval.expression_) = (yyvsp[0].function_call_);
  }
#line 5365 "SqlParser_gen.cpp" /* yacc.c:1661  */
    break;

  case 227:
#line 1721 "../SqlParser.ypp" /* yacc.c:1661  */
    {
    (yyvsp[-2].function_call_)->setWindowName((yyvsp[0].string_value_));
    (yyval.expression_) = (yyvsp[-2].function_call_);
  }
#line 5374 "SqlParser_gen.cpp" /* yacc.c:1661  */
    break;

  case 228:
#line 1725 "../SqlParser.ypp" /* yacc.c:1661  */
    {
    (yyvsp[-4].function_call_)->setWindow((yyvsp[-1].window_definition_));
    (yyval.expression_) = (yyvsp[-4].function_call_);
  }
#line 5383 "SqlParser_gen.cpp" /* yacc.c:1661  */
    break;

  case 229:
#line 1729 "../SqlParser.ypp" /* yacc.c:1661  */
    {
    (yyval.expression_) = (yyvsp[0].expression_);
  }
#line 5391 "SqlParser_gen.cpp" /* yacc.c:1661  */
    break;

  case 230:
#line 1732 "../SqlParser.ypp" /* yacc.c:1661  */
    {
    (yyval.expression_) = (yyvsp[0].expression_);
  }
#line 5399 "SqlParser_gen.cpp" /* yacc.c:1661  */
    break;

  case 231:
#line 1735 "../SqlParser.ypp" /* yacc.c:1661  */
    {
    (yyval.expression_) = (yyvsp[0].expression_);
  }
#line 5407 "SqlParser_gen.cpp" /* yacc.c:1661  */
    break;

  case 232:
#line 1738 "../SqlParser.ypp" /* yacc.c:1661  */
    {
    (yyval.expression_) = (yyvsp[-1].expression_);
  }
#line 5415 "SqlParser_gen.cpp" /* yacc.c:1661  */
    break;

  case 233:
#line 1741 "../SqlParser.ypp" /* yacc.c:1661  */
    {
    (yyval.expression_) = (yyvsp[0].subquery_expression_);
  }
#line 5423 "SqlParser_gen.cpp" /* yacc.c:1661  */
    break;

  case 234:
#line 1746 "../SqlParser.ypp" /* yacc.c:1661  */
    {
    (yyval.function_call_) = new quickstep::ParseFunctionCall(
        (yylsp[-2]).first_line, (yylsp[-2]).first_column, false, (yyvsp[-2].string_value_), new quickstep::PtrList<quickstep::ParseExpression>());
  }
#line 5432 "SqlParser_gen.cpp" /* yacc.c:1661  */
    break;

  case 235:
#line 1750 "../SqlParser.ypp" /* yacc.c:1661  */
    {
    (yyval.function_call_) = new quickstep::ParseFunctionCall(
        (yylsp[-3]).first_line, (yylsp[-3]).first_column, (yyvsp[-3].string_value_), new quickstep::ParseStar((yylsp[-1]).first_line, (yylsp[-1]).first_column));
  }
#line 5441 "SqlParser_gen.cpp" /* yacc.c:1661  */
    break;

  case 236:
#line 1754 "../SqlParser.ypp" /* yacc.c:1661  */
    {
    (yyval.function_call_) = new quickstep::ParseFunctionCall((yylsp[-3]).first_line, (yylsp[-3]).first_column, false, (yyvsp[-3].string_value_), (yyvsp[-1].expression_list_));
  }
#line 5449 "SqlParser_gen.cpp" /* yacc.c:1661  */
    break;

  case 237:
#line 1757 "../SqlParser.ypp" /* yacc.c:1661  */
    {
    (yyval.function_call_) = new quickstep::ParseFunctionCall((yylsp[-4]).first_line, (yylsp[-4]).first_column, true, (yyvsp[-4].string_value_), (yyvsp[-1].expression_list_));
  }
#line 5457 "SqlParser_gen.cpp" /* yacc.c:1661  */
    break;

  case 238:
#line 1762 "../SqlParser.ypp" /* yacc.c:1661  */
    {
    (yyval.expression_) = new quickstep::ParseExtractFunction((yylsp[-5]).first_line, (yylsp[-5]).first_column, (yyvsp[-3].string_value_), (yyvsp[-1].expression_));
  }
#line 5465 "SqlParser_gen.cpp" /* yacc.c:1661  */
    break;

  case 239:
#line 1767 "../SqlParser.ypp" /* yacc.c:1661  */
    {
    (yyval.expression_) = new quickstep::ParseSubstringFunction(
        (yylsp[-5]).first_line, (yylsp[-5]).first_column, (yyvsp[-3].expression_), (yyvsp[-1].numeric_literal_value_)->long_value());
  }
#line 5474 "SqlParser_gen.cpp" /* yacc.c:1661  */
    break;

  case 240:
#line 1771 "../SqlParser.ypp" /* yacc.c:1661  */
    {
    (yyval.expression_) = new quickstep::ParseSubstringFunction(
        (yylsp[-7]).first_line, (yylsp[-7]).first_column, (yyvsp[-5].expression_), (yyvsp[-3].numeric_literal_value_)->long_value(), (yyvsp[-1].numeric_literal_value_)->long_value());
  }
#line 5483 "SqlParser_gen.cpp" /* yacc.c:1661  */
    break;

  case 241:
#line 1777 "../SqlParser.ypp" /* yacc.c:1661  */
    {
    (yyval.expression_) = new quickstep::ParseSimpleCaseExpression((yylsp[-4]).first_line, (yylsp[-4]).first_column, (yyvsp[-3].expression_), (yyvsp[-2].simple_when_clause_list_), (yyvsp[-1].expression_));
  }
#line 5491 "SqlParser_gen.cpp" /* yacc.c:1661  */
    break;

  case 242:
#line 1780 "../SqlParser.ypp" /* yacc.c:1661  */
    {
    (yyval.expression_) = new quickstep::ParseSearchedCaseExpression((yylsp[-3]).first_line, (yylsp[-3]).first_column, (yyvsp[-2].searched_when_clause_list_), (yyvsp[-1].expression_));
  }
#line 5499 "SqlParser_gen.cpp" /* yacc.c:1661  */
    break;

  case 243:
#line 1785 "../SqlParser.ypp" /* yacc.c:1661  */
    {
    (yyval.simple_when_clause_list_) = new quickstep::PtrVector<quickstep::ParseSimpleWhenClause>;
    (yyval.simple_when_clause_list_)->push_back((yyvsp[0].simple_when_clause_));
  }
#line 5508 "SqlParser_gen.cpp" /* yacc.c:1661  */
    break;

  case 244:
#line 1789 "../SqlParser.ypp" /* yacc.c:1661  */
    {
    (yyval.simple_when_clause_list_) = (yyvsp[-1].simple_when_clause_list_);
    (yyval.simple_when_clause_list_)->push_back((yyvsp[0].simple_when_clause_));
  }
#line 5517 "SqlParser_gen.cpp" /* yacc.c:1661  */
    break;

  case 245:
#line 1795 "../SqlParser.ypp" /* yacc.c:1661  */
    {
    (yyval.simple_when_clause_) = new quickstep::ParseSimpleWhenClause((yylsp[-3]).first_line, (yylsp[-3]).first_column, (yyvsp[-2].expression_), (yyvsp[0].expression_));
  }
#line 5525 "SqlParser_gen.cpp" /* yacc.c:1661  */
    break;

  case 246:
#line 1800 "../SqlParser.ypp" /* yacc.c:1661  */
    {
    (yyval.searched_when_clause_list_) = new quickstep::PtrVector<quickstep::ParseSearchedWhenClause>;
    (yyval.searched_when_clause_list_)->push_back((yyvsp[0].searched_when_clause_));
  }
#line 5534 "SqlParser_gen.cpp" /* yacc.c:1661  */
    break;

  case 247:
#line 1804 "../SqlParser.ypp" /* yacc.c:1661  */
    {
    (yyval.searched_when_clause_list_) = (yyvsp[-1].searched_when_clause_list_);
    (yyval.searched_when_clause_list_)->push_back((yyvsp[0].searched_when_clause_));
  }
#line 5543 "SqlParser_gen.cpp" /* yacc.c:1661  */
    break;

  case 248:
#line 1810 "../SqlParser.ypp" /* yacc.c:1661  */
    {
    (yyval.searched_when_clause_) = new quickstep::ParseSearchedWhenClause((yylsp[-3]).first_line, (yylsp[-3]).first_column, (yyvsp[-2].predicate_), (yyvsp[0].expression_));
  }
#line 5551 "SqlParser_gen.cpp" /* yacc.c:1661  */
    break;

  case 249:
#line 1815 "../SqlParser.ypp" /* yacc.c:1661  */
    {
    (yyval.expression_) = NULL;
  }
#line 5559 "SqlParser_gen.cpp" /* yacc.c:1661  */
    break;

  case 250:
#line 1818 "../SqlParser.ypp" /* yacc.c:1661  */
    {
    (yyval.expression_) = (yyvsp[0].expression_);
  }
#line 5567 "SqlParser_gen.cpp" /* yacc.c:1661  */
    break;

  case 251:
#line 1823 "../SqlParser.ypp" /* yacc.c:1661  */
    {
    (yyval.expression_list_) = new quickstep::PtrList<quickstep::ParseExpression>();
    (yyval.expression_list_)->push_back((yyvsp[0].expression_));
  }
#line 5576 "SqlParser_gen.cpp" /* yacc.c:1661  */
    break;

  case 252:
#line 1827 "../SqlParser.ypp" /* yacc.c:1661  */
    {
    (yyval.expression_list_) = (yyvsp[-2].expression_list_);
    (yyval.expression_list_)->push_back((yyvsp[0].expression_));
  }
#line 5585 "SqlParser_gen.cpp" /* yacc.c:1661  */
    break;

  case 253:
#line 1833 "../SqlParser.ypp" /* yacc.c:1661  */
    {
    (yyval.literal_value_) = new quickstep::NullParseLiteralValue((yylsp[0]).first_line, (yylsp[0]).first_column);
  }
#line 5593 "SqlParser_gen.cpp" /* yacc.c:1661  */
    break;

  case 254:
#line 1836 "../SqlParser.ypp" /* yacc.c:1661  */
    {
    (yyval.literal_value_) = (yyvsp[0].numeric_literal_value_);
  }
#line 5601 "SqlParser_gen.cpp" /* yacc.c:1661  */
    break;

  case 255:
#line 1839 "../SqlParser.ypp" /* yacc.c:1661  */
    {
    (yyval.literal_value_) = (yyvsp[0].numeric_literal_value_);
  }
#line 5609 "SqlParser_gen.cpp" /* yacc.c:1661  */
    break;

  case 256:
#line 1842 "../SqlParser.ypp" /* yacc.c:1661  */
    {
    /**
     * NOTE(chasseur): This case exhibits a shift/reduce conflict with the
     * minus character as a 'unary_operation' followed by a numeric literal.
     * Because Bison prefers to shift rather than reduce, this case has
     * precedence (i.e. the parser will prefer to interpret the ambiguous
     * pattern as a negative number literal rather than a unary minus operation
     * applied to a non-negative number literal).
     **/
    (yyvsp[0].numeric_literal_value_)->prependMinus();
    (yyval.literal_value_) = (yyvsp[0].numeric_literal_value_);
  }
#line 5626 "SqlParser_gen.cpp" /* yacc.c:1661  */
    break;

  case 257:
#line 1854 "../SqlParser.ypp" /* yacc.c:1661  */
    {
    (yyval.literal_value_) = new quickstep::StringParseLiteralValue((yyvsp[0].string_value_),
                                                nullptr);  // No explicit type.
  }
#line 5635 "SqlParser_gen.cpp" /* yacc.c:1661  */
    break;

  case 258:
#line 1858 "../SqlParser.ypp" /* yacc.c:1661  */
    {
    /**
     * NOTE(chasseur): This case exhibits a shift/reduce conflict with the
     * plain TOKEN_INTERVAL case in 'data_type' reduced and used in the case
     * below. Because Bison prefers to shift rather than reduce, this case has
     * precedence (i.e. the special
     * StringParseLiteralValue::ParseAmbiguousInterval() method will be used to
     * parse the string as either one of the interval types, rather than an
     * error being emitted because of an ambiguous type).
     **/
    quickstep::StringParseLiteralValue *parse_value;
    if (quickstep::StringParseLiteralValue::ParseAmbiguousInterval((yyvsp[0].string_value_), &parse_value)) {
      (yyval.literal_value_) = parse_value;
    } else {
      (yyval.literal_value_) = nullptr;
      quickstep_yyerror(&(yylsp[0]), yyscanner, nullptr, "Failed to parse literal as specified type");
      YYERROR;
    }
  }
#line 5659 "SqlParser_gen.cpp" /* yacc.c:1661  */
    break;

  case 259:
#line 1877 "../SqlParser.ypp" /* yacc.c:1661  */
    {
    quickstep::StringParseLiteralValue *parse_value;
    const std::string &datetime_type_value = (yyvsp[0].string_value_)->value();
    if (quickstep::StringParseLiteralValue::ParseAmbiguousInterval(
        &((yyvsp[-1].string_value_)->append((" " + datetime_type_value).c_str(), datetime_type_value.length() + 1)),
        &parse_value)) {
      (yyval.literal_value_) = parse_value;
    } else {
      (yyval.literal_value_) = nullptr;
      quickstep_yyerror(&(yylsp[0]), yyscanner, nullptr, "Failed to parse literal as specified type");
      YYERROR;
    }
  }
#line 5677 "SqlParser_gen.cpp" /* yacc.c:1661  */
    break;

  case 260:
#line 1890 "../SqlParser.ypp" /* yacc.c:1661  */
    {
    quickstep::StringParseLiteralValue *parse_value
        = new quickstep::StringParseLiteralValue((yyvsp[0].string_value_), &((yyvsp[-1].data_type_)->getType()));
    delete (yyvsp[-1].data_type_);
    if (!parse_value->tryExplicitTypeParse()) {
      delete parse_value;
      (yyval.literal_value_) = nullptr;
      quickstep_yyerror(&(yylsp[0]), yyscanner, nullptr, "Failed to parse literal as specified type");
      YYERROR;
    } else {
      (yyval.literal_value_) = parse_value;
    }
  }
#line 5695 "SqlParser_gen.cpp" /* yacc.c:1661  */
    break;

  case 261:
#line 1905 "../SqlParser.ypp" /* yacc.c:1661  */
    {
     (yyval.string_value_) = new quickstep::ParseString((yylsp[0]).first_line, (yylsp[0]).first_column, std::string("YEAR"));
  }
#line 5703 "SqlParser_gen.cpp" /* yacc.c:1661  */
    break;

  case 262:
#line 1908 "../SqlParser.ypp" /* yacc.c:1661  */
    {
     (yyval.string_value_) = new quickstep::ParseString((yylsp[0]).first_line, (yylsp[0]).first_column, std::string("MONTH"));
  }
#line 5711 "SqlParser_gen.cpp" /* yacc.c:1661  */
    break;

  case 263:
#line 1911 "../SqlParser.ypp" /* yacc.c:1661  */
    {
     (yyval.string_value_) = new quickstep::ParseString((yylsp[0]).first_line, (yylsp[0]).first_column, std::string("DAY"));
  }
#line 5719 "SqlParser_gen.cpp" /* yacc.c:1661  */
    break;

  case 264:
#line 1914 "../SqlParser.ypp" /* yacc.c:1661  */
    {
     (yyval.string_value_) = new quickstep::ParseString((yylsp[0]).first_line, (yylsp[0]).first_column, std::string("HOUR"));
  }
#line 5727 "SqlParser_gen.cpp" /* yacc.c:1661  */
    break;

  case 265:
#line 1917 "../SqlParser.ypp" /* yacc.c:1661  */
    {
     (yyval.string_value_) = new quickstep::ParseString((yylsp[0]).first_line, (yylsp[0]).first_column, std::string("MINUTE"));
  }
#line 5735 "SqlParser_gen.cpp" /* yacc.c:1661  */
    break;

  case 266:
#line 1920 "../SqlParser.ypp" /* yacc.c:1661  */
    {
     (yyval.string_value_) = new quickstep::ParseString((yylsp[0]).first_line, (yylsp[0]).first_column, std::string("SECOND"));
  }
#line 5743 "SqlParser_gen.cpp" /* yacc.c:1661  */
    break;

  case 267:
#line 1925 "../SqlParser.ypp" /* yacc.c:1661  */
    {
    (yyval.literal_value_list_) = new quickstep::PtrList<quickstep::ParseScalarLiteral>();
    (yyval.literal_value_list_)->push_back(new quickstep::ParseScalarLiteral((yyvsp[0].literal_value_)));
  }
#line 5752 "SqlParser_gen.cpp" /* yacc.c:1661  */
    break;

  case 268:
#line 1929 "../SqlParser.ypp" /* yacc.c:1661  */
    {
    (yyval.literal_value_list_) = (yyvsp[-2].literal_value_list_);
    (yyval.literal_value_list_)->push_back(new quickstep::ParseScalarLiteral((yyvsp[0].literal_value_)));
  }
#line 5761 "SqlParser_gen.cpp" /* yacc.c:1661  */
    break;

  case 269:
#line 1935 "../SqlParser.ypp" /* yacc.c:1661  */
    {
    (yyval.literal_value_list_multiple_) = new quickstep::PtrList<quickstep::PtrList<quickstep::ParseScalarLiteral>>();
    (yyval.literal_value_list_multiple_)->push_back((yyvsp[-1].literal_value_list_));
  }
#line 5770 "SqlParser_gen.cpp" /* yacc.c:1661  */
    break;

  case 270:
#line 1939 "../SqlParser.ypp" /* yacc.c:1661  */
    {
    (yyval.literal_value_list_multiple_) = (yyvsp[-4].literal_value_list_multiple_);
    (yyval.literal_value_list_multiple_)->push_back((yyvsp[-1].literal_value_list_));
  }
#line 5779 "SqlParser_gen.cpp" /* yacc.c:1661  */
    break;

  case 271:
#line 1945 "../SqlParser.ypp" /* yacc.c:1661  */
    {
    (yyval.attribute_) = new quickstep::ParseAttribute((yylsp[0]).first_line, (yylsp[0]).first_column, (yyvsp[0].string_value_));
  }
#line 5787 "SqlParser_gen.cpp" /* yacc.c:1661  */
    break;

  case 272:
#line 1948 "../SqlParser.ypp" /* yacc.c:1661  */
    {
    (yyval.attribute_) = new quickstep::ParseAttribute((yylsp[-2]).first_line, (yylsp[-2]).first_column, (yyvsp[0].string_value_), (yyvsp[-2].string_value_));
  }
#line 5795 "SqlParser_gen.cpp" /* yacc.c:1661  */
    break;

  case 273:
#line 1953 "../SqlParser.ypp" /* yacc.c:1661  */
    {
    (yyval.attribute_list_) = new quickstep::PtrList<quickstep::ParseAttribute>();
    (yyval.attribute_list_)->push_back((yyvsp[0].attribute_));
  }
#line 5804 "SqlParser_gen.cpp" /* yacc.c:1661  */
    break;

  case 274:
#line 1957 "../SqlParser.ypp" /* yacc.c:1661  */
    {
    (yyval.attribute_list_) = (yyvsp[-2].attribute_list_);
    (yyval.attribute_list_)->push_back((yyvsp[0].attribute_));
  }
#line 5813 "SqlParser_gen.cpp" /* yacc.c:1661  */
    break;

  case 275:
#line 1964 "../SqlParser.ypp" /* yacc.c:1661  */
    {
    (yyval.comparison_) = &quickstep::ComparisonFactory::GetComparison(quickstep::ComparisonID::kEqual);
  }
#line 5821 "SqlParser_gen.cpp" /* yacc.c:1661  */
    break;

  case 276:
#line 1967 "../SqlParser.ypp" /* yacc.c:1661  */
    {
    (yyval.comparison_) = &quickstep::ComparisonFactory::GetComparison(quickstep::ComparisonID::kNotEqual);
  }
#line 5829 "SqlParser_gen.cpp" /* yacc.c:1661  */
    break;

  case 277:
#line 1970 "../SqlParser.ypp" /* yacc.c:1661  */
    {
    (yyval.comparison_) = &quickstep::ComparisonFactory::GetComparison(quickstep::ComparisonID::kLess);
  }
#line 5837 "SqlParser_gen.cpp" /* yacc.c:1661  */
    break;

  case 278:
#line 1973 "../SqlParser.ypp" /* yacc.c:1661  */
    {
    (yyval.comparison_) = &quickstep::ComparisonFactory::GetComparison(quickstep::ComparisonID::kLessOrEqual);
  }
#line 5845 "SqlParser_gen.cpp" /* yacc.c:1661  */
    break;

  case 279:
#line 1976 "../SqlParser.ypp" /* yacc.c:1661  */
    {
    (yyval.comparison_) = &quickstep::ComparisonFactory::GetComparison(quickstep::ComparisonID::kGreater);
  }
#line 5853 "SqlParser_gen.cpp" /* yacc.c:1661  */
    break;

  case 280:
#line 1979 "../SqlParser.ypp" /* yacc.c:1661  */
    {
    (yyval.comparison_) = &quickstep::ComparisonFactory::GetComparison(quickstep::ComparisonID::kGreaterOrEqual);
  }
#line 5861 "SqlParser_gen.cpp" /* yacc.c:1661  */
    break;

  case 281:
#line 1982 "../SqlParser.ypp" /* yacc.c:1661  */
    {
    (yyval.comparison_) =  &quickstep::ComparisonFactory::GetComparison(quickstep::ComparisonID::kLike);
  }
#line 5869 "SqlParser_gen.cpp" /* yacc.c:1661  */
    break;

  case 282:
#line 1985 "../SqlParser.ypp" /* yacc.c:1661  */
    {
    (yyval.comparison_) =  &quickstep::ComparisonFactory::GetComparison(quickstep::ComparisonID::kNotLike);
  }
#line 5877 "SqlParser_gen.cpp" /* yacc.c:1661  */
    break;

  case 283:
#line 1988 "../SqlParser.ypp" /* yacc.c:1661  */
    {
    (yyval.comparison_) =  &quickstep::ComparisonFactory::GetComparison(quickstep::ComparisonID::kRegexMatch);
  }
#line 5885 "SqlParser_gen.cpp" /* yacc.c:1661  */
    break;

  case 284:
#line 1991 "../SqlParser.ypp" /* yacc.c:1661  */
    {
    (yyval.comparison_) =  &quickstep::ComparisonFactory::GetComparison(quickstep::ComparisonID::kNotRegexMatch);
  }
#line 5893 "SqlParser_gen.cpp" /* yacc.c:1661  */
    break;

  case 285:
#line 1996 "../SqlParser.ypp" /* yacc.c:1661  */
    {
    /**
     * NOTE(chasseur): This case exhibits a shift/reduce conflict with the
     * '-' TOKEN_UNSIGNED_NUMVAL case in 'literal_value'. Because Bison prefers
     * to shift rather than reduce, the case in 'literal_value' has precedence
     * over this one.
     **/
    (yyval.unary_operation_) = &quickstep::UnaryOperationFactory::GetUnaryOperation(quickstep::UnaryOperationID::kNegate);
  }
#line 5907 "SqlParser_gen.cpp" /* yacc.c:1661  */
    break;

  case 286:
#line 2007 "../SqlParser.ypp" /* yacc.c:1661  */
    {
    (yyval.binary_operation_) = &quickstep::BinaryOperationFactory::GetBinaryOperation(quickstep::BinaryOperationID::kAdd);
  }
#line 5915 "SqlParser_gen.cpp" /* yacc.c:1661  */
    break;

  case 287:
#line 2010 "../SqlParser.ypp" /* yacc.c:1661  */
    {
    (yyval.binary_operation_) = &quickstep::BinaryOperationFactory::GetBinaryOperation(quickstep::BinaryOperationID::kSubtract);
  }
#line 5923 "SqlParser_gen.cpp" /* yacc.c:1661  */
    break;

  case 288:
#line 2015 "../SqlParser.ypp" /* yacc.c:1661  */
    {
    (yyval.binary_operation_) = &quickstep::BinaryOperationFactory::GetBinaryOperation(quickstep::BinaryOperationID::kModulo);
  }
#line 5931 "SqlParser_gen.cpp" /* yacc.c:1661  */
    break;

  case 289:
#line 2018 "../SqlParser.ypp" /* yacc.c:1661  */
    {
    (yyval.binary_operation_) = &quickstep::BinaryOperationFactory::GetBinaryOperation(quickstep::BinaryOperationID::kMultiply);
  }
#line 5939 "SqlParser_gen.cpp" /* yacc.c:1661  */
    break;

  case 290:
#line 2021 "../SqlParser.ypp" /* yacc.c:1661  */
    {
    (yyval.binary_operation_) = &quickstep::BinaryOperationFactory::GetBinaryOperation(quickstep::BinaryOperationID::kDivide);
  }
#line 5947 "SqlParser_gen.cpp" /* yacc.c:1661  */
    break;

  case 291:
#line 2027 "../SqlParser.ypp" /* yacc.c:1661  */
    {
    (yyval.string_list_) = new quickstep::PtrList<quickstep::ParseString>();
    (yyval.string_list_)->push_back((yyvsp[0].string_value_));
  }
#line 5956 "SqlParser_gen.cpp" /* yacc.c:1661  */
    break;

  case 292:
#line 2031 "../SqlParser.ypp" /* yacc.c:1661  */
    {
    (yyval.string_list_) = (yyvsp[-2].string_list_);
    (yyval.string_list_)->push_back((yyvsp[0].string_value_));
  }
#line 5965 "SqlParser_gen.cpp" /* yacc.c:1661  */
    break;

  case 293:
#line 2037 "../SqlParser.ypp" /* yacc.c:1661  */
    {
    (yyval.string_value_) = (yyvsp[0].string_value_);
  }
#line 5973 "SqlParser_gen.cpp" /* yacc.c:1661  */
    break;

  case 294:
#line 2040 "../SqlParser.ypp" /* yacc.c:1661  */
    {
    if ((yyvsp[0].string_value_)->value().empty()) {
      quickstep_yyerror(&(yylsp[0]), yyscanner, nullptr, "Zero-length identifier");
    }
    (yyval.string_value_) = (yyvsp[0].string_value_);
  }
#line 5984 "SqlParser_gen.cpp" /* yacc.c:1661  */
    break;

  case 295:
#line 2048 "../SqlParser.ypp" /* yacc.c:1661  */
    {
    (yyval.boolean_value_) = true;
  }
#line 5992 "SqlParser_gen.cpp" /* yacc.c:1661  */
    break;

  case 296:
#line 2051 "../SqlParser.ypp" /* yacc.c:1661  */
    {
    (yyval.boolean_value_) = true;
  }
#line 6000 "SqlParser_gen.cpp" /* yacc.c:1661  */
    break;

  case 297:
#line 2054 "../SqlParser.ypp" /* yacc.c:1661  */
    {
    (yyval.boolean_value_) = false;
  }
#line 6008 "SqlParser_gen.cpp" /* yacc.c:1661  */
    break;

  case 298:
#line 2057 "../SqlParser.ypp" /* yacc.c:1661  */
    {
    (yyval.boolean_value_) = false;
  }
#line 6016 "SqlParser_gen.cpp" /* yacc.c:1661  */
    break;

  case 299:
#line 2063 "../SqlParser.ypp" /* yacc.c:1661  */
    {
    (yyval.command_) = new quickstep::ParseCommand((yylsp[-1]).first_line, (yylsp[-1]).first_column, (yyvsp[-1].string_value_), (yyvsp[0].command_argument_list_));
  }
#line 6024 "SqlParser_gen.cpp" /* yacc.c:1661  */
    break;

  case 300:
#line 2068 "../SqlParser.ypp" /* yacc.c:1661  */
    {
    quickstep::PtrVector<quickstep::ParseString> *argument_list = (yyvsp[-1].command_argument_list_);
    argument_list->push_back((yyvsp[0].string_value_));
    (yyval.command_argument_list_) = argument_list;
  }
#line 6034 "SqlParser_gen.cpp" /* yacc.c:1661  */
    break;

  case 301:
#line 2073 "../SqlParser.ypp" /* yacc.c:1661  */
    { /* Epsilon, an empy match. */
    (yyval.command_argument_list_) = new quickstep::PtrVector<quickstep::ParseString>();
  }
#line 6042 "SqlParser_gen.cpp" /* yacc.c:1661  */
    break;


#line 6046 "SqlParser_gen.cpp" /* yacc.c:1661  */
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
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);

  *++yyvsp = yyval;
  *++yylsp = yyloc;

  /* Now 'shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

  goto yynewstate;


/*--------------------------------------.
| yyerrlab -- here on detecting error.  |
`--------------------------------------*/
yyerrlab:
  /* Make sure we have latest lookahead translation.  See comments at
     user semantic actions for why this is necessary.  */
  yytoken = yychar == YYEMPTY ? YYEMPTY : YYTRANSLATE (yychar);

  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (&yylloc, yyscanner, parsedStatement, YY_("syntax error"));
#else
# define YYSYNTAX_ERROR yysyntax_error (&yymsg_alloc, &yymsg, \
                                        yyssp, yytoken)
      {
        char const *yymsgp = YY_("syntax error");
        int yysyntax_error_status;
        yysyntax_error_status = YYSYNTAX_ERROR;
        if (yysyntax_error_status == 0)
          yymsgp = yymsg;
        else if (yysyntax_error_status == 1)
          {
            if (yymsg != yymsgbuf)
              YYSTACK_FREE (yymsg);
            yymsg = (char *) YYSTACK_ALLOC (yymsg_alloc);
            if (!yymsg)
              {
                yymsg = yymsgbuf;
                yymsg_alloc = sizeof yymsgbuf;
                yysyntax_error_status = 2;
              }
            else
              {
                yysyntax_error_status = YYSYNTAX_ERROR;
                yymsgp = yymsg;
              }
          }
        yyerror (&yylloc, yyscanner, parsedStatement, yymsgp);
        if (yysyntax_error_status == 2)
          goto yyexhaustedlab;
      }
# undef YYSYNTAX_ERROR
#endif
    }

  yyerror_range[1] = yylloc;

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
                      yytoken, &yylval, &yylloc, yyscanner, parsedStatement);
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

  /* Pacify compilers like GCC when the user code never invokes
     YYERROR and the label yyerrorlab therefore never appears in user
     code.  */
  if (/*CONSTCOND*/ 0)
     goto yyerrorlab;

  yyerror_range[1] = yylsp[1-yylen];
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

  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
        {
          yyn += YYTERROR;
          if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYTERROR)
            {
              yyn = yytable[yyn];
              if (0 < yyn)
                break;
            }
        }

      /* Pop the current state because it cannot handle the error token.  */
      if (yyssp == yyss)
        YYABORT;

      yyerror_range[1] = *yylsp;
      yydestruct ("Error: popping",
                  yystos[yystate], yyvsp, yylsp, yyscanner, parsedStatement);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

  yyerror_range[2] = yylloc;
  /* Using YYLLOC is tempting, but would change the location of
     the lookahead.  YYLOC is available though.  */
  YYLLOC_DEFAULT (yyloc, yyerror_range, 2);
  *++yylsp = yyloc;

  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", yystos[yyn], yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturn;

/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturn;

#if !defined yyoverflow || YYERROR_VERBOSE
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (&yylloc, yyscanner, parsedStatement, YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif

yyreturn:
  if (yychar != YYEMPTY)
    {
      /* Make sure we have latest lookahead translation.  See comments at
         user semantic actions for why this is necessary.  */
      yytoken = YYTRANSLATE (yychar);
      yydestruct ("Cleanup: discarding lookahead",
                  yytoken, &yylval, &yylloc, yyscanner, parsedStatement);
    }
  /* Do not reclaim the symbols of the rule whose action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
                  yystos[*yyssp], yyvsp, yylsp, yyscanner, parsedStatement);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif
#if YYERROR_VERBOSE
  if (yymsg != yymsgbuf)
    YYSTACK_FREE (yymsg);
#endif
  return yyresult;
}
#line 2077 "../SqlParser.ypp" /* yacc.c:1906  */


void NotSupported(const YYLTYPE *location, yyscan_t yyscanner, const std::string &feature) {
  std::string msg;
  msg.append(feature);
  msg.append(" is not supported yet");

  quickstep_yyerror(location, yyscanner, nullptr, msg.c_str());
}

int quickstep_yyget_line_number(const YYLTYPE *yyloc) {
  return yyloc->first_line;
}

int quickstep_yyget_column_number(const YYLTYPE *yyloc) {
  return yyloc->first_column;
}
