%{
	char stack[100];
        int tos=0;                
	int tos;
	void push(char);
	void pop();
	char top();
	int priority(char);
%}
%%
[a-zA-Z]? {	printf("%c",yytext[0]);	}
[+\-\*\/\(\)] {	
		char op=yytext[0];
		if(tos==0||op=='(')
			push(op);
		else if(op==')')
		{
			while(top()!='(')
			{
				printf("%c",top());
				pop();
			}
			pop();
		}
		else if(priority(op)>=priority(top()))
		{
			push(op);
		}
		else if(priority(op)<=priority(top()))
		{
			while(priority(op)<=priority(top()))
			{
				printf("%c",top());
				pop();
			}
			push(op);
		}
	}
[\n] {
	int i;
	for(i=tos-1;i>=0;i--)
	if(stack[i]!='('&&stack[i]!=')')
	{
		printf("%c",stack[i]);
	}
	tos=0;
     }
%%
int main()
{
	yyin;
	yylex();
}
void pop()
{
	tos--;
}
char top()
{
	return stack[tos-1];
}
void push(char c)
{
	stack[tos]=c;
	tos++;
}
int priority(char c)
{
	switch(c)
	{
		case '(': return 0;
		case ')': return 0;
		case '+': return 1;
		case '-': return 1;
		case '*': return 2;
		case '/': return 2;
	}
}
		
