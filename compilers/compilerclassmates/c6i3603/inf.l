%{
	char s[10],inf[10];
	int top=-1,i=0;
	void push(char);
	char pop();
	char op;
%}
%%
[+\-\*\/] { push(yytext[0]); }
[a-z]A-Z0-9] { inf[i++]=yytext[0];
		op=pop();
		if(op!='#')
			inf[i++]=op;
		}
[ \n] { inf[i]='\0';}
%%
main()
{
	push('#');
	yylex();
	printf("%s\n",inf);
}
void push(char e)
{
	s[++top]=e;
}
char pop()
{
	return (s[top--]);
} 
