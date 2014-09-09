%token SWITCH CASE ID DIGIT OPENPAR CLOSEPAR OPENBR CLOSEBR COLON DEFAULT BREAK SEMI QUOTES
%{
void yyerror(char *);
%}
%%
program: SWITCH OPENPAR E1 CLOSEPAR OPENBR C E1 COLON BREAK SEMI DEFAULT COLON BREAK SEMI CLOSEBR { printf("syntax correct"); }
|;
E1: ID
|DIGIT
|;
C:
C
|CASE
|DIGIT
;
%%
void yyerror(char *s)
{
printf("error");
}
int main()
{
yyparse();
return;
}
