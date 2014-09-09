%{
	char arr[10],post[10];
	int top=-1,i=0;
	void push(char);
	char pop();
	int pre(char);
%}
%%
[(]	{push(yytext[0]);}
[a-zA-Z]	{post[i++]=yytext[0];}
[)]	{while(arr[top]!='(')
		post[i++]=pop();
	pop();
	}
[+\-\*\/]	{while(pre(arr[top])>pre(yytext[0]))
			post[i++]=pop();
		push(yytext[0]);
		}
[ \n]	{while(arr[top]!='#')
		post[i++]=pop();
	post[i]='\0';
	}
%%
main()
{
	push('#');
	yylex();
	printf("%s\n",post);
}
void push(char e)
{
	arr[++top]=e;
}
char pop()
{
	return (arr[top--]);
}
int pre(char e)
{
	switch(e)
	{
	case '#':return 0;
	case '(':return 1;
	case '+':
	case '-':return 2;
	case '*':
	case '/':return 3;
	}
}	
