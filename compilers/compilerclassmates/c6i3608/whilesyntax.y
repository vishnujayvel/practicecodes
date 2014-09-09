%token WHIL OP OB CB ID VAR INC DEC
%{
%}
%%
program: WHIL OB E CB { printf("Correct");}
E:
	ID
	| VAR OP ID
	| VAR OP VAR
	;
%%
void yyerror(char *s);
{
	printf("%s\n",s);
}
int main()
{
	yyparse();
	return 0;
}
