%{
#include<stdio.h>
int c=0;
%}

%%

\/\/.* { c++;}
\/\*(.*\n)*.*\*\/ ; {c++; }
. { fwrite(yytext,yyleng,1,yyout); }
%%

main()
{
yyin=fopen("myprog.c","r");
yyout=fopen("output.c","w");
yylex();
printf("number of comment lines !! is %d",c);
}

int yywrap()
{
return 1;
}
