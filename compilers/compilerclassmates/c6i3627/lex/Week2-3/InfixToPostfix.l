alpha [a-zA-Z0-9]
op "("|")"|"+"|"-"|"/"|"*"
end [\t\n ]
%{
int front=-1,i;
char stack[100];
%}
%%
{alpha} ECHO;
{op} { if (front==-1)
	{
	front++;
	stack[front]=yytext[0];
	}
	
	else
	{
	if((yytext[0]=='+' || yytext[0]=='-' && stack[front]!='('))
	{
	while(front!=-1 &&stack[front]!='(')
	{
	printf("%c",stack[front]);
	front--;
	}
	front++;
	stack[front]=yytext[0];
	}

	else if((yytext[0]=='+' || yytext[0] == '-' && stack[front]=='('))
	{
	front++;
	stack[front]=yytext[0];
	}
	
	else if (yytext[0]==')')
	{
	while(stack[front]!='(')
	{
	printf("%c",stack[front]);
	front--;
	}
	front--;
	}

	else if (yytext[0]=='(')
	{
	front++;
	stack[front]=yytext[0];
	}

	else if(yytext[0]=='*' || yytext[0]=='/' && stack[front]!='(')
	{
	while(stack[front]=='*' || stack[front]=='/')
	{
	printf("%c",stack[front]);
	front --;
	}
	front++;
	stack[front]=yytext[0];
	}

	else if(yytext[0]=='*' || yytext[0]=='/' && stack[front]=='(')
	{
	front++;
	stack[front]=yytext[0];
	}
	}
	}

{end}	{while(front!=-1)
	{
	if(stack[front]!='(')
	{
	printf("%c",stack[front]);
	}
	front--;
	}
	}

.	{printf("\n");}
%%
int yywrap()
{
return 1;
}

int main()
{
printf("\n\n");
yylex();
printf("\n\n");
return 0;
}
