%{
 char c;
%}

delim [ \t\n]
ws {delim}+
letter [A-Za-z]
digit [0-9]
id {letter}({letter}|{digit})*
num {digit}+(\.{digit}+)?(E[+\-]?{digit}+)?

k1 if|else|for|while|do|case|break|default
k2 typedef|const|continue|sizeof

arith "-"|"+"|"*"|"/"|"%"
rel "<"|"<="|">"|">="|"!="|"=="
logical "&&"|"||"|"!"
assign "="|"+="|"-="|"*="|"/="|"%="

%%

{ws} ;
% { c=input();
	if(c=='%')
	 printf("FRMT_SP,%%%c\n",c);
	else printf("PERCENT,%\n");
  }

"main" printf("main,-\n");
"printf" printf("printf,-\n");
"scanf" printf("scanf,-\n");

{k1}" "|{k2}" " printf("%s,-\n",yytext);
{id} printf("ID,%s\n",yytext); 
{num}  printf("NUM,%s\n",yytext);
{arith}  printf("ARITH,%s\n",yytext);
{rel}  printf("RELOP,%s\n",yytext);
{logical}  printf("LOGICAL,%s\n",yytext);
"?:"  printf("TERNARY_OP,%s\n",yytext);
{assign}  printf("ASSIGN_OP,%s\n",yytext);
"++"|"--"  printf("UNARY,%s\n",yytext);

#include printf("PREPROCESSOR,#include\n");
\\	 {
 c=input();
 printf("ESCAPE_SEQ,\\%c",c);
 }
\<(.*).h> printf("HEADER,%s\n",yytext);
&  printf("AMPERSAND,&\n");
"{" printf("LEFT-BRACE,{\n");
 
"}" printf("RIGHT_BRACE,}\n");
\( printf("LEFT-PAREN,(\n");
\) printf("RIGHT-PAREN,)\n");
\[ printf("LEFT-SQBT,[\n");
\] printf("RIGHT-SQBT\n");
; printf("SEMICOLON,;\n");
, printf("COMMA,,\n");
\. printf("DOT,.\n");
"$" printf("DOLLAR,$\n");
\" printf("QUOTES,\"\n");
' printf("APOS,'\n");
. printf("undef\n\n");
%%

main()
{
yylex();
return 0;
}
