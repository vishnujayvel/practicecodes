%token SWITCH OPBR CLBR OCB CCB SC ID CASE BREAK DIGIT SP PRINTF NL TAB DEFAULT LT GT
%right '='
%left '<' '>' LE GE EQ NE
%left '+''-'
%left'*''/'
%right UMINUS
%left '!'
%{
	void yyerror(char *);
	int yylex(void);
%}
%%
S:ST	{	printf("Correct");	}
ST: SWITCH OPBR ID CLBR OCB CON CCB	
CON:	C
|	C	D
;
C:	C	C 
|CASE SP DIGIT ':' E SC
|BREAK SC
|;
D:	DEFAULT	':' E SC BREAK ';'
;	
E:	ID'='E
|E'+'E
|E'-'E
|E'*'E
|E'/'E
|E'<'E
|E'>'E
|E LE E
|E GE E
|E EQ E
|E NE E
|ID
|DIGIT
;
;
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
