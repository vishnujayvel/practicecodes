%token WHILE OPBR CLBR SPL SC EQ MUL BOOL RELOP INC DEC ID DIGIT OCB CCB SP
%{
	void yyerror(char *);
	int yylex(void);
%}
%%
program: WHILE OPBR E CLBR { printf(" Correct input!");}
E: ID RELOP ID
|ID RELOP DIGIT
|SPL
|ID
|BOOL
|E MUL E
|;

%%
void yyerror(char *s) 
{
	printf("%s\n",s);
}
int yywrap(void)
{
	return 1;
}
int main()
{
	yyparse();
	return 1;
}
