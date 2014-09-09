%token IF ELSE ELSEIF OB CB OP ID DIGIT
%{
%}
%%

program: IF OB E1 CB E2 {printf("correct\n");}

E1: ID OP ID
  | ID OP DIGIT
  ;

E2: ELSEIF OB E1 CB E2
  | ELSE
  ;
%%
void yyerror(char *s)
{
	printf("%s\n",s);
}
int main()
{
	yyparse();
	return 0;
}
