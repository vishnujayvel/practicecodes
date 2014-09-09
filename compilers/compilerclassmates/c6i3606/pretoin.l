%{
	char op, s[10], inf[10];
	int top=-1, i=0;
	void push(char);
	char pop();
%}
%%
[+\-\*\/] {
	push(yytext[0]);
	}
[a-zA-Z] {
	inf[i++]=yytext[0];
	op=pop();
	if(op!='#') inf[i++]=op;
	}
[ \t\n] {
	inf[i]='\0';
	}
%%
main()
{
	push('#');
	yylex();
	printf("%s\n", inf);
}
void push(char e)
{
	s[++top]=e;
}
char pop()
{
	return (s[top--]);
}
