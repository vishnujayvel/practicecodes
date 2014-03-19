%{

        #include<stdio.h>

        #include<string.h>

        #include "y.tab.h"

%}

%%

"not"   {return NOT;}

"goto"  {return GOTO;}

"if"    {return IF;}

[0-9]+          {strcpy(yylval.var,yytext);return DIGIT;}

[a-zA-Z][A-Za-z0-9]* {strcpy(yylval.var,yytext);return NAME;}

[+] {strcpy(yylval.var,yytext);return PLUS;}

[=] {strcpy(yylval.var,yytext);return EQUAL;}

[-] {strcpy(yylval.var,yytext);return SUBT;}

[*] {strcpy(yylval.var,yytext);return MULT;}

[/] {strcpy(yylval.var,yytext);return DIVI;}



[A-Za-z]+[0-9]*":"      {printf("%s",yytext);}

[\n\t]          {return yytext[0];}

%%
