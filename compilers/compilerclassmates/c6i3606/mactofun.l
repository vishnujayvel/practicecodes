%{
	int macro=0, param=0, sp=0;
%}
%%
#define[' '] {
	macro=1;
	printf("(void *)");
	}
['('','] {
	if(param==0)
	{
		if(macro && yytext[0]=='(') printf("((void *)");
		else if(macro && yytext[0]==',') printf(", (void *)");
	}
	else printf("%c", yytext[0]);
	}
['/'][\n] { printf("\n"); } 
[' '] {
	if(macro) 
	{
		printf(" ");
		sp=1;
		param=1;
	}
	else printf(" ");
	}
([a-zA-Z0-9])+['+''-''*''/''=']([a-zA-Z0-9])+[';'](['/'])? {
	if(yytext[yyleng-1]==';') printf("return %s", yytext);
	else printf("%s", yytext);
	}
[')'] {
	printf(")");
	if(macro && param==0) param=1;
	}
%%







