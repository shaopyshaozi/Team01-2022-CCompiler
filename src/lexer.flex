%option noyywrap

%{
// most of the lexer comes from this website: https://www.lysator.liu.se/c/ANSI-C-grammar-l.html#check-type
extern "C" int fileno(FILE *stream);

#include "parser.tab.hpp" // copied from LAB2
%}


D			[0-9]
L			[a-zA-Z_]
H			[a-fA-F0-9]
E			[Ee][+-]?{D}+
FS			(f|F|l|L)
IS			(u|U|l|L)*


%%

"auto"          { return(AUTO); }
"break"         { return(BREAK); }
"case"          { return(CASE); }
"char"          { return(CHAR); }
"const"         { return(CONST); }
"continue"      { return(CONTINUE); }
"default"       { return(DEFAULT); }
"do"            { return(DO); }
"double"        { printf("Token Type: DOUBLE VALUE:[%s]", yytext); return(DOUBLE); }
"else"          { return(ELSE); }
"enum"          { return(ENUM); }
"extern"        { return(EXTERN); }
"float"         { printf("Token Type: FLOAT VALUE:[%s]", yytext); return(FLOAT); }
"for"           { return(FOR); }
"goto"          {  }
"if"            { return(IF); }
"int"			      { printf("Token Type: INT VALUE:[%s]", yytext); return(INT); }
"long"			    {  }
"register"		  { return(REGISTER); }
"return"		    { printf("Token Type: RETURN VALUE:[%s]", yytext); return(RETURN);}
"short"			    {  }
"signed"		    { return(SIGNED); }
"sizeof"		    { return(SIZEOF); }
"static"		    { return(STATIC); }
"struct"		    { return(STRUCT); }
"switch"		    { return(SWITCH); }
"typedef"		    { return(TYPEDEF); }
"union"			    { return(UNION); }
"unsigned"		  { return(UNSIGNED); }
"void"			    { return(VOID); }
"volatile"		  { return(VOLATILE); }
"while"			    { printf("Token Type: WHILE VALUE:[%s]", yytext);return(WHILE); }


{L}({L}|{D})*		{ printf("Token Type: INDENTIFIER VALUE:[%s]", yytext); yylval.string = new std::string(yytext);  return IDENTIFIER; }

{D}+{IS}?       { printf("Token Type: INT_CONSTANT VALUE:[%s]", yytext);yylval.number=(int)strtol(yytext, NULL, 0); return INT_CONST; }
0[xX]{H}+{IS}?  { yylval.number=(int)strtol(yytext, NULL, 0); return INT_CONST; }
0{D}+{IS}?      { yylval.number=(int)strtol(yytext, NULL, 0); return INT_CONST; }

{D}+{E}{FS}?           { yylval.numberFloat=strtod(yytext, NULL); return FLOAT_CONST; }
{D}*"."{D}+({E})?{FS}? { yylval.numberFloat=strtod(yytext, NULL); return FLOAT_CONST; }
{D}+"."{D}*({E})?{FS}? { yylval.numberFloat=strtod(yytext, NULL); return FLOAT_CONST; }

L?'(\\.|[^\\'])+'      { return(CHAR_LITERAL); }
L?\"(\\.|[^\\"])*\"	   { return(STRING_LITERAL); }

"..."           { }
">>="           { return(RIGHT_ASSIGN); }
"<<="           { return(LEFT_ASSIGN); }
"+="            { return(ADD_ASSIGN); }
"-="            { return(SUB_ASSIGN); }
"*="            { return(MUL_ASSIGN); }
"/="            { return(DIV_ASSIGN); }
"%="            { return(MOD_ASSIGN); }
"&="            { return(AND_ASSIGN); }
"^="            { return(XOR_ASSIGN); }
"|="            { return(OR_ASSIGN); }
">>"            { return(RIGHT_OP); }
"<<"            { return(LEFT_OP); }
"++"            { return(INC_OP); }
"--"            { return(DEC_OP); }
"->"            { return(PTR_OP); }
"&&"            { return(AND_OP); }
"||"            { return(OR_OP); }
"<="            { return(LE_OP); }
">="            { return(GE_OP); }
"=="            { return(EQ_OP); }
"!="            { return(NE_OP); }



";"             { return(';'); }
("{"|"<%")      { return('{'); }
("}"|"%>")      { return('}'); }
","             { return(','); }
":"             { return(':'); }
"="             { return('='); }
"("             { return('('); }
")"             { return(')'); }
("["|"<:")      { return('['); }
("]"|":>")      { return(']'); }
"."             { return('.'); }
"&"             { return('&'); }
"!"             { return('!'); }
"~"             { return('~'); }
"-"             { return('-'); }
"+"             { printf("Token Type: WHILE VALUE:[%s]", yytext); return('+'); }
"*"             { return('*'); }
"/"             { return('/'); }
"%"             { return('%'); }
"<"             { return('<'); }
">"             { return('>'); }
"^"             { return('^'); }
"|"             { return('|'); }
"?"             { return('?'); }


[ \t\v\n\f]		{ }
.			{ /* ignore bad characters */ }

%%

void yyerror (char const *s)
{
  fprintf(stderr, "Lexing error: %s\n", s);
  exit(1);
}
