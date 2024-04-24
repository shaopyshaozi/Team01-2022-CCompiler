%code requires{

  #include "ast.hpp"
  #include <cassert>
  #include <string>
  #include <string.h>
  #include <vector>

  extern Base *g_root; // A way of getting the AST out
  extern FILE *yyin;

  //! This is to fix problems when generating C++
  // We are declaring the functions provided by Flex, so
  // that Bison generated code can call them.
  int yylex(void);
  void yyerror(const char *);
}

// Represents the value associated with any kind of
// AST node.
%union{
  BasePtr Base;
  //ListPtr List;
  int number;
  double numberFloat;
  std::string *string;
  yytokentype token;
}



%token INT_CONST FLOAT_CONST STRING_LITERAL

%token IDENTIFIER CHAR_LITERAL SIZEOF
%token PTR_OP INC_OP DEC_OP LEFT_OP RIGHT_OP LE_OP GE_OP EQ_OP NE_OP
%token AND_OP OR_OP MUL_ASSIGN DIV_ASSIGN MOD_ASSIGN ADD_ASSIGN
%token SUB_ASSIGN LEFT_ASSIGN RIGHT_ASSIGN AND_ASSIGN
%token XOR_ASSIGN OR_ASSIGN

%token TYPEDEF EXTERN STATIC AUTO REGISTER
%token CHAR INT SIGNED UNSIGNED FLOAT DOUBLE CONST VOLATILE VOID
%token STRUCT UNION ENUM

%token CASE DEFAULT IF ELSE SWITCH WHILE DO FOR CONTINUE BREAK RETURN



%type <Base> initializer multiplicative_expression expression_statement
%type <Base> struct_declaration direct_abstract_declarator primary_expression
%type <Base> exclusive_or_expression parameter_declaration
%type <Base> selection_statement labeled_statement conditional_expression
%type <Base> constant_expression logical_or_expression
%type <Base> pointer additive_expression declarator
%type <Base> jump_statement relational_expression
%type <Base> assignment_expression and_expression iteration_statement
%type <Base> type_specifier expression abstract_declarator
%type <Base> shift_expression enum_specifier
%type <Base> logical_and_expression enumerator cast_expression
%type <Base> function_definition declaration init_declarator
%type <Base> inclusive_or_expression external_declaration struct_declarator
%type <Base> type_name declaration_specifiers direct_declarator statement
%type <Base> compound_statement unary_expression postfix_expression equality_expression
%type <Base> parameter_type_list init_declarator_list

%type <Base> translation_unit struct_declaration_list argument_expression_list
%type <Base> specifier_qualifier_list struct_declarator_list
%type <Base> enumerator_list parameter_list
%type <Base> identifier_list initializer_list declaration_list statement_list

%type <number> INT_CONST CHAR_LITERAL STRING_LITERAL
%type <numberFloat> FLOAT_CONST
%type <string> IDENTIFIER


%start ROOT

%%
/* Extracts AST */
ROOT : translation_unit { g_root = $1; }

translation_unit
    : external_declaration 	{$$ = $1;}  // going to use
    | translation_unit external_declaration {$$ = new TranslationUnit($1,$2);}
    ;

external_declaration
	: function_definition {$$ = $1;}  // going to use
	| declaration {$$ = $1;}
	;

function_definition
    : declaration_specifiers declarator declaration_list compound_statement {std::cerr << "Not used ???" << std::endl;}
    | declaration_specifiers declarator compound_statement {$$ = new FunctionDefinition($1, $2, $3);}  // going to use
    | declarator declaration_list compound_statement {std::cerr << "Not used ???" << std::endl;}
    | declarator compound_statement {std::cerr << "Not used ???" << std::endl;}
    ;

declaration_specifiers
    : storage_class_specifier {std::cerr << "Not used ???" << std::endl;}
    | storage_class_specifier declaration_specifiers {std::cerr << "Not used ???" << std::endl;}
    | type_specifier {$$ = $1;} // going to use
    | type_specifier declaration_specifiers {std::cerr << "Not used ???" << std::endl;}
    | type_qualifier {std::cerr << "Not used ???" << std::endl;}
    | type_qualifier declaration_specifiers {std::cerr << "Not used ???" << std::endl;}
    ;

type_specifier
	: VOID {$$ = new Type("void");}
	| CHAR {$$ = new Type("char");}
	//| SHORT {}
	| INT {$$ = new Type("int");}	// going to use
	//| LONG {}
	| FLOAT {$$ = new Type("float");}
	| DOUBLE {$$ = new Type("double");}
	| SIGNED  {}
	| UNSIGNED {$$ = new Type("unsigned");}
	| struct_or_union_specifier {std::cerr << "Not Implemented !!!" << std::endl;}
	| enum_specifier {$$ = $1;}
	//| TYPE_NAME {}
	;

declarator
	: pointer direct_declarator {$$ = new PointerDeclarator($2);}
	| direct_declarator	{$$ = $1;}	// going to use
	;


direct_declarator
    : IDENTIFIER {$$ = new FunctionName(*$1);} // going to use function name
    | '(' declarator ')' {std::cerr << "Not Implemented !!!" << std::endl;}
    | direct_declarator '[' constant_expression ']' {std::cerr << "Not Implemented !!!" << std::endl;}
    | direct_declarator '[' ']' {std::cerr << "Not Implemented !!!" << std::endl;}
    | direct_declarator '(' parameter_type_list ')' {$$ = new FunctionDeclaratorPara($1, $3);} // use
    | direct_declarator '(' identifier_list ')' {std::cerr << "Not Implemented !!!" << std::endl;}
    | direct_declarator '(' ')' {$$ = $1;} // going to use no parameters
    ;

compound_statement
    : '{' '}' {$$ = new Empty();}
    | '{' statement_list '}' {$$ = $2;} // going to use
    | '{' declaration_list '}' {$$ = $2;}
    | '{' declaration_list statement_list '}' {$$ = new CompoundStatement($2,$3);}  //a new type here/about to use
    ;

statement_list
    : statement {$$ = $1;}  // going to use
    | statement_list statement {$$ = new StatementList($1,$2);} // about to use
    ;

statement
	: labeled_statement {$$ = $1;}
	| compound_statement {$$ = $1;}
	| expression_statement {$$ = $1;}
	| selection_statement {$$ = $1;}
	| iteration_statement {$$ = $1;}
	| jump_statement {$$ = $1;}	// going to use
	;

jump_statement
    : CONTINUE ';' {$$ = new Continue();}
    | BREAK ';' {$$ = new Break();}
    | RETURN ';' {$$ = new Return();}
    | RETURN expression ';' { $$ = new ReturnExpr($2); } // going to use
    ;

expression
    : assignment_expression { $$ = $1;} // going to use
    | expression ',' assignment_expression {std::cerr << "Not Used ???" << std::endl;}
    ;

assignment_expression
	: conditional_expression {$$ = $1;}	// going to use
	| unary_expression '=' assignment_expression {$$ = new BinaryAssign($1,$3);}// about to use/new class
    | unary_expression MUL_ASSIGN assignment_expression {$$ = new BinaryAssign($1, new BinaryMultiplication($1, $3));}
    | unary_expression DIV_ASSIGN assignment_expression {$$ = new BinaryAssign($1, new BinaryDivision($1, $3));}
    | unary_expression MOD_ASSIGN assignment_expression {$$ = new BinaryAssign($1, new BinaryModulus($1, $3));}
    | unary_expression ADD_ASSIGN assignment_expression {$$ = new BinaryAssign($1, new BinaryAddition($1, $3));} // needed
    | unary_expression SUB_ASSIGN assignment_expression {$$ = new BinaryAssign($1, new BinarySubtraction($1, $3));}
    | unary_expression LEFT_ASSIGN assignment_expression {$$ = new BinaryAssign($1, new BinaryLeftShift($1, $3));}
    | unary_expression RIGHT_ASSIGN assignment_expression {$$ = new BinaryAssign($1, new BinaryRightShift($1, $3));}
    | unary_expression AND_ASSIGN assignment_expression {$$ = new BinaryAssign($1, new BinaryAND($1, $3));}
    | unary_expression XOR_ASSIGN assignment_expression {$$ = new BinaryAssign($1, new BinaryXOR($1, $3));}
    | unary_expression OR_ASSIGN assignment_expression {$$ = new BinaryAssign($1, new BinaryOR($1, $3));}
	;


conditional_expression
    : logical_or_expression {$$ = $1; } // going to use
    | logical_or_expression '?' expression ':' conditional_expression {std::cerr << "Not Implemented !!!" << std::endl;}
    ;

logical_or_expression
    : logical_and_expression {$$ = $1; } // going to use
    | logical_or_expression OR_OP logical_and_expression {$$ = new BinaryLogicOR($1, $3);}
    ;

logical_and_expression
    : inclusive_or_expression { $$ = $1;} // going to use
    | logical_and_expression AND_OP inclusive_or_expression {$$ = new BinaryLogicAND($1, $3);}
    ;

inclusive_or_expression
    : exclusive_or_expression { $$ = $1;} // going to use
    | inclusive_or_expression '|' exclusive_or_expression {$$ = new BinaryOR($1, $3);}
    ;

exclusive_or_expression
    : and_expression {$$ = $1; } // going to use
    | exclusive_or_expression '^' and_expression {$$ = new BinaryXOR($1, $3);}
    ;

and_expression
    : equality_expression {$$ = $1; } // going to use
    | and_expression '&' equality_expression {$$ = new BinaryAND($1, $3);}
    ;

equality_expression
    : relational_expression {$$ = $1; } // going to use
    | equality_expression EQ_OP relational_expression {$$ = new BinaryEqual($1, $3);}
    | equality_expression NE_OP relational_expression { $$ = new BinaryNotEqual($1, $3);}
    ;

relational_expression
    : shift_expression { $$ = $1;} // going to use
    | relational_expression '<' shift_expression {$$ = new BinaryLessThan($1, $3);}
    | relational_expression '>' shift_expression {$$ = new BinaryGreaterThan($1, $3);}
    | relational_expression LE_OP shift_expression {$$ = new BinaryLessThanEqual($1, $3);}
    | relational_expression GE_OP shift_expression {$$ = new BinaryGreaterThanEqual($1, $3);}
    ;

shift_expression
    : additive_expression {$$ = $1; } // going to use
    | shift_expression LEFT_OP additive_expression {$$ = new BinaryLeftShift($1, $3);}
    | shift_expression RIGHT_OP additive_expression {$$ = new BinaryRightShift($1, $3);}
    ;

additive_expression
    : multiplicative_expression {$$ = $1; } // going to use
    | additive_expression '+' multiplicative_expression {$$ = new BinaryAddition($1, $3);}
    | additive_expression '-' multiplicative_expression {$$ = new BinarySubtraction($1, $3);}
    ;

multiplicative_expression
	: cast_expression		{ $$ = $1;}	// going to use
	| multiplicative_expression '*' cast_expression {$$ = new BinaryMultiplication($1, $3);}
	| multiplicative_expression '/' cast_expression {$$ = new BinaryDivision($1, $3);}
	| multiplicative_expression '%' cast_expression {$$ = new BinaryModulus($1, $3);}
	;

cast_expression
	: unary_expression	{ $$ = $1; }		// going to use
	| '(' type_name ')' cast_expression {std::cerr << "Not Used ???" << std::endl;}
	;

unary_expression
	: postfix_expression	{$$ = $1; }	// going to use
	| INC_OP unary_expression {$$ = new UnaryInc($2);}
	| DEC_OP unary_expression {$$ = new UnaryDec($2);}
	| '&' unary_expression {$$ = new UnaryAddress($2);}
	| '*' unary_expression {$$ = new UnaryPointer($2);}
  	| '+' unary_expression {$$ = $2;}
	| '-' unary_expression {$$ = new UnarySub($2); } // new class minus opeartor
	| '~' unary_expression {std::cerr << "Not Implemented !!!" << std::endl;}
	| '!' unary_expression {std::cerr << "Not Implemented !!!" << std::endl;}
	| SIZEOF unary_expression {$$ = new Sizeof($2);}
	| SIZEOF '(' type_name ')' {$$ = new Sizeof($3);}
	;

postfix_expression
	: primary_expression	{ $$ = $1; }	// going to use
	| postfix_expression '[' expression ']' {std::cerr << "Not Implemented !!!" << std::endl;}
	| postfix_expression '(' ')' {$$ = new FunctionCallNoPara($1);}
	| postfix_expression '(' argument_expression_list ')' {$$ = new FunctionCall($1,$3);}  // function call
	| postfix_expression '.' IDENTIFIER {std::cerr << "Not Implemented !!!" << std::endl;}
	| postfix_expression PTR_OP IDENTIFIER {std::cerr << "Not Implemented !!!" << std::endl;}
	| postfix_expression INC_OP {$$ = new UnaryInc($1);}  // not sure if we can use the same class
	| postfix_expression DEC_OP {$$ = new UnaryDec($1);}  // needed
	;

argument_expression_list
	: assignment_expression {$$ = new ArgumentExprListOne($1);}  // going to use
	| argument_expression_list ',' assignment_expression {$$ = new ArgumentExprList($1,$3);} // going to use
	;

primary_expression
	: IDENTIFIER {$$ = new Identifier(*$1);  }
	| INT_CONST	 { $$ = new Integer($1); }			// going to use
	| FLOAT_CONST { $$ = new Float($1);}
	| STRING_LITERAL {$$ = new Integer($1);}
	| CHAR_LITERAL {$$ = new Integer($1);}
	| '(' expression ')' {$$ = $2;}
	;


selection_statement
	: IF '(' expression ')' statement {$$ = new If($3,$5);} // NEW
	| IF '(' expression ')' statement ELSE statement {$$ = new IfElse($3,$5,$7);} // NEW
	| SWITCH '(' expression ')' statement {std::cerr << "Not Implemented !!!" << std::endl;}
	;

iteration_statement
	: WHILE '(' expression ')' statement {$$ = new While($3,$5);} // NEW
	| DO statement WHILE '(' expression ')' ';' {std::cerr << "Not Implemented !!!" << std::endl;}
	| FOR '(' expression_statement expression_statement ')' statement {std::cerr << "Not Implemented !!!" << std::endl;}
	| FOR '(' expression_statement expression_statement expression ')' statement {$$ = new For($3,$4,$5,$7);} // NEW
	;


constant_expression
	: conditional_expression {$$ = $1;}
	;

declaration
	: declaration_specifiers ';' {$$ = $1;}
	| declaration_specifiers init_declarator_list ';' {$$ = new Declaration($1,$2);}  // about to use/new class
	;

init_declarator_list
	: init_declarator {$$ = $1;} 	// about to use
	| init_declarator_list ',' init_declarator {std::cerr << "Not Used ???" << std::endl;}
	;

init_declarator
	: declarator {$$ = $1;}  	// about to use
	| declarator '=' initializer {$$ = new InitDeclarator($1,$3);}  // usage
	;

storage_class_specifier
	: TYPEDEF {std::cerr << "Not Used ???" << std::endl;}
	| EXTERN {std::cerr << "Not Used ???" << std::endl;}
	| STATIC {std::cerr << "Not Used ???" << std::endl;}
	| AUTO {std::cerr << "Not Used ???" << std::endl;}
	| REGISTER {std::cerr << "Not Used ???" << std::endl;}
	;

struct_or_union_specifier
	: struct_or_union IDENTIFIER '{' struct_declaration_list '}' {std::cerr << "Not Implemented !!!" << std::endl;}
	| struct_or_union '{' struct_declaration_list '}' {std::cerr << "Not Implemented !!!" << std::endl;}
	| struct_or_union IDENTIFIER {std::cerr << "Not Implemented !!!" << std::endl;}
	;

struct_or_union
	: STRUCT {std::cerr << "Not Implemented !!!" << std::endl;}
	| UNION {std::cerr << "Not Implemented !!!" << std::endl;}
	;

struct_declaration_list
	: struct_declaration {$$ = $1;}
	| struct_declaration_list struct_declaration {std::cerr << "Not Implemented !!!" << std::endl;}
	;

struct_declaration
	: specifier_qualifier_list struct_declarator_list ';' {std::cerr << "Not Implemented !!!" << std::endl;}
	;

specifier_qualifier_list
	: type_specifier specifier_qualifier_list {std::cerr << "Not Implemented !!!" << std::endl;}
	| type_specifier {std::cerr << "Not Implemented !!!" << std::endl;}
	| type_qualifier specifier_qualifier_list {std::cerr << "Not Implemented !!!" << std::endl;}
	| type_qualifier {std::cerr << "Not Implemented !!!" << std::endl;}
	;

struct_declarator_list
	: struct_declarator {$$ = $1;}
	| struct_declarator_list ',' struct_declarator {std::cerr << "Not Implemented !!!" << std::endl;}
	;

struct_declarator
	: declarator {$$ = $1;}
	| ':' constant_expression {std::cerr << "Not Implemented !!!" << std::endl;}
	| declarator ':' constant_expression {std::cerr << "Not Implemented !!!" << std::endl;}
	;

enum_specifier
	: ENUM '{' enumerator_list '}' {std::cerr << "Not Implemented !!!" << std::endl;}
	| ENUM IDENTIFIER '{' enumerator_list '}' {std::cerr << "Not Implemented !!!" << std::endl;}
	| ENUM IDENTIFIER {std::cerr << "Not Implemented !!!" << std::endl;}
	;

enumerator_list
	: enumerator {$$ = $1;}
	| enumerator_list ',' enumerator {std::cerr << "Not Implemented !!!" << std::endl;}
	;

enumerator
	: IDENTIFIER {std::cerr << "Not Implemented !!!" << std::endl;}
	| IDENTIFIER '=' constant_expression {std::cerr << "Not Implemented !!!" << std::endl;}
	;

type_qualifier
	: CONST {std::cerr << "Not Implemented !!!" << std::endl;}
	| VOLATILE {std::cerr << "Not Implemented !!!" << std::endl;}
	;

pointer
	: '*' {std::cerr << "Not Implemented !!!" << std::endl;}
	| '*' type_qualifier_list {std::cerr << "Not Implemented !!!" << std::endl;}
	| '*' pointer {std::cerr << "Not Implemented !!!" << std::endl;}
	| '*' type_qualifier_list pointer {std::cerr << "Not Implemented !!!" << std::endl;}
	;

type_qualifier_list
	: type_qualifier {std::cerr << "Not Implemented !!!" << std::endl;}
	| type_qualifier_list type_qualifier {std::cerr << "Not Implemented !!!" << std::endl;}
	;

parameter_type_list
	: parameter_list {$$ = $1;} // use
	//| parameter_list ',' ELLIPSIS {}
	;

parameter_list
	: parameter_declaration {$$ = $1;} // use
	| parameter_list ',' parameter_declaration {$$ = new ParameterList($1, $3);} // new type
	;

parameter_declaration
	: declaration_specifiers declarator {$$ = new ParameterDeclaration($1, $2);} // use
	| declaration_specifiers abstract_declarator {std::cerr << "Not Implemented !!!" << std::endl;}
	| declaration_specifiers {std::cerr << "Not Used ???" << std::endl;}
	;

identifier_list
	: IDENTIFIER {std::cerr << "Not Implemented !!!" << std::endl;}
	| identifier_list ',' IDENTIFIER {std::cerr << "Not Implemented !!!" << std::endl;}
	;


type_name
	: specifier_qualifier_list {$$ = $1;}
	| specifier_qualifier_list abstract_declarator {std::cerr << "Not Implemented !!!" << std::endl;}
	;

abstract_declarator
	: pointer {$$ = $1;}
	| direct_abstract_declarator {std::cerr << "Not Implemented !!!" << std::endl;}
	| pointer direct_abstract_declarator {std::cerr << "Not Implemented !!!" << std::endl;}
	;

direct_abstract_declarator
	: '(' abstract_declarator ')' {$$ = $2;}
	| '[' ']' {std::cerr << "Not Implemented !!!" << std::endl;}
	| '[' constant_expression ']' {std::cerr << "Not Implemented !!!" << std::endl;}
	| direct_abstract_declarator '[' ']' {std::cerr << "Not Implemented !!!" << std::endl;}
	| direct_abstract_declarator '[' constant_expression ']' {std::cerr << "Not Implemented !!!" << std::endl;}
	| '(' ')' {std::cerr << "Not Implemented !!!" << std::endl;}
	| '(' parameter_type_list ')' {std::cerr << "Not Implemented !!!" << std::endl;}
	| direct_abstract_declarator '(' ')' {std::cerr << "Not Implemented !!!" << std::endl;}
	| direct_abstract_declarator '(' parameter_type_list ')' {std::cerr << "Not Implemented !!!" << std::endl;}
	;

initializer
	: assignment_expression {$$ = $1;}
	| '{' initializer_list '}' {std::cerr << "Not Implemented !!!" << std::endl;}
	| '{' initializer_list ',' '}' {std::cerr << "Not Implemented !!!" << std::endl;}
	;

initializer_list
	: initializer {$$ = $1;}
	| initializer_list ',' initializer {std::cerr << "Not Implemented !!!" << std::endl;}
	;



labeled_statement
	: IDENTIFIER ':' statement {std::cerr << "Not Implemented !!!" << std::endl;}
	| CASE constant_expression ':' statement {std::cerr << "Not Implemented !!!" << std::endl;}
	| DEFAULT ':' statement {std::cerr << "Not Implemented !!!" << std::endl;}
	;



declaration_list
	: declaration {$$ = $1;} 	// about to use
	| declaration_list declaration {$$ = new DeclarationList($1,$2);}
	;



expression_statement
	: ';' {std::cerr << "Not Implemented !!!" << std::endl;}
	| expression ';' {$$ = $1;}
	;







%%

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
