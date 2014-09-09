%{
char c;
%}
delim [ \t\n]
ws {delim}+
digit [0-9]
letter [a-zA-Z]
id {letter}({letter}|{digit})*
num {digit}+(\.{digit}+)?(E[+\-]?{digit}+)?
keywords1 "if"|"else"|"for"|"while"|"do"|"case"|"break"|"default"
keywords2 "struct"|"int"|"char"|"float"|"double"|"long"|"enum"|"void"
keywords3 "typedef"|"const"|"continue"|"satic"|"sizeof"
arith "+"|"-"|"*"|"/"|"%"
relational "<"|"<="|">"|">="|"!="|"=="
logical "&&"|"||"|"!"
assign "="|"+="|"-"|"*="|"/="|"%="|"<<="|">>="|"&="
%%
{ws} ;
"%" { c=input();
        if(c!='%')
                printf("FORMAT_SPECIFIER%%%c\n",c);
        else
                printf("PERCENT,%\n");
        }
{keywords1}" "|{keywords2}" "|{keywords3}" " printf("keyword,%s\n",yytext);
{id} printf("ID,%s\n",yytext);
{num} printf("NUM,%s\n",yytext);
{arith} printf("ARITH,%s\n",yytext);
{relational} printf("RELOP,%s\n",yytext);
{logical} printf("LOGICAL,%s\n",yytext);
"?:" printf("TERNARY,?:\n");
{assign} printf("ASSIGN_op,%s\n",yytext);
"++"|"--" printf("UNARY_INC,%s\n",yytext);
"{" printf("openbraces,{\n");
"}" printf("closing,}\n");
\( printf("openparan,(\n");
\) printf("closeparan,)\n");
#include printf("preprocessor,#include\n");
"\\" { c=input();
        printf("escape_seq,\\%c",yytext);
        c=input();
        }
\<(.*).h\>  printf("Header%s\n",yytext);
& printf("&\n");
; printf("semicolon,;\n");
, printf("comma,,\n");
\. printf("DOT,.\n");
\" printf("quotes,\"\n");
. printf("undef\n");
%%
main()
{
yylex();
return 0;
}

