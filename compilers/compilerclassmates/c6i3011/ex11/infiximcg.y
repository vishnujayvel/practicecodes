%token ID NUM
%right '='
%left '+''-'
%left '*''%'
%nonassoc UMINUS
%{
	#include "lex.yy.c"
	#include<ctype.h>
        #include<stdio.h>
        #include<string.h>
        char stack[50][20];
        int top=0,p=0, temp=0;
        int temp_arr[20];
	void push();
	void generate();
	void generate_minus();
	void assignment();
	void printstack(int n);
%}

%%

start:  ID {push();} '=' {push();} E {assignment();}
 	;
E:
	  E '+' {push();} T {generate();}
 	| E '-' {push();} T {generate();}
 	| T
 	;
T:
	  T '*' {push();} F {generate();}
 	| T '/' {push();} F {generate();}
 	| F
 	;
F:
	 '('E')'
 	| '-' {push();} F {generate_minus();}
 	| ID {push();}
 	| NUM {push();}
 	;
%%

int main()
{
	printf("Enter infix expression: ");
	yyparse();
	return 0;
}
void push()
{
	strcpy(stack[++top],yytext);
	p++;
}

void generate()
{
	printf("t%d = %s", temp, stack[top-2]);
	printstack(2);
	printf("%s %s",stack[top-1],stack[top]);
	printstack(0);
	printf("\n");
	top-=2;
	p-=2;
	strcpy(stack[top],"t");
	temp_arr[p]=temp;
	temp++;
}

void generate_minus()
{
	printf("t %d =- %s\n", temp, stack[top]);
	printstack(0);
	top--;
	p--;
	strcpy(stack[top],"t");
	temp_arr[p]=temp;
	temp++;
}

void assignment()
{
	printf("%s = ",stack[top-2]);
	printstack(2);
	printf("%s",stack[top]);
	printstack(0);
	printf("\n");
	top=-2;
	p=-2;
}

void printstack(int n)
{
	if(strcmp(stack[top-n],"t")==0)
	{
		printf("%d",temp_arr[p-n]);
	}
}

int yywrap()
{
	return 1;
}

int yyerror()
{
	printf("Incorrect!\n");
	return 1;
}

