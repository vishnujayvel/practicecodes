%token VARIABLE
%{
void yyerror(char *);
char     
%}
%%
program:
program statement '\n'
|
;
statement:
expr{printf("%s",$1);}
|VARIABLE { };
expr:
VARIABLE { $$=$1;}
|;
%%
void yyerror(char *s)
{
printf("err");
}
int main(void)
{
yyparse();
return 0;
}
