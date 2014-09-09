%{
	#include<stdio.h>
	void push(int);
	int pop();
	int temp;
	int stack[50];
	int top=-1;
%}

%token NUM
%token OTHER

%%

start:
	E	{printf("Value: %d\n",pop()); }
	;
E:
	  E E '+' { push(pop()+pop()); }
	| E E '*' { push(pop()*pop()); }
	| E E '-' { temp=pop(); push(pop()-temp); }
	| E E '/' { temp=pop(); push(pop()/temp); }
	| NUM	  { push(yylval); }
	| OTHER	  { yyerror(); }
	;
%%

int yyerror()
{
	printf("Invalid!\n");
	return 0;
}

void push(int e)
{
	stack[++top]=e;
}

int pop()
{
	return stack[top--];
}

main()
{
	yyparse();
}
