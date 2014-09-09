%token WHILE OPNPAR CLOSEPAR RELOP OPENBRACE CLOSEBRAC SPL ID DIGIT ADDRESS BOOL EQ
%{
void yyerror(char *s);
%}
%%
program:WHILE OPNPAR E1 CLOSEPAR { printf("syntax correct");}
|WHILE OPNPAR E1 ADDRESS E1 CLOSEPAR { printf("syntax correct");}
|WHILE OPNPAR SPL CLOSEPAR { printf("syntax correct");}
|WHILE OPNPAR BOOL CLOSEPAR { printf("synatx correct");}
|WHILE OPNPAR ID CLOSEPAR {printf("syntax correct");}
|;
E1:ID RELOP ID
|ID RELOP DIGIT
|ID EQ DIGIT
|ID EQ ID
|;
%%
void yyerror(char *s)
{
printf("error");
}
int main()
{
yyparse();
}
