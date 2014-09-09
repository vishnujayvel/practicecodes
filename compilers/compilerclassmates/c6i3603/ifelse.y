%token IF ELSE OPENPAR CLOSEPAR RELOP SPL BOOL ID DIGIT ADDRESS OPNBR CLOSEBR
%{
void error(char *);
%}
%%
program: IF OPENPAR E1 CLOSEPAR OPNBR CLOSEBR ELSE OPNBR CLOSEBR { printf("syntax correct"); }
|IF OPENPAR E1 ADDRESS E1 CLOSEPAR OPNBR CLOSEBR ELSE OPNBR CLOSEBR { printf("sysntax correct"); }
|IF OPENPAR SPL CLOSEPAR OPNBR CLOSEBR ELSE OPNBR CLOSEBR { printf("synatx correct"); }
|IF OPENPAR E1 CLOSEPAR ELSE { printf("synatx correct"); }
|IF OPENPAR BOOL CLOSEPAR ELSE { printf("synatx correct"); }
|;
E1:ID RELOP ID
|ID RELOP DIGIT
|;
%%
void yyerror(char *s)
{
printf("error");
}
int main()
{
yyparse();
return ;
}
