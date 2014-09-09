%{
	#include<stdio.h>
	void push(int);
	int pop();
	int temp;
	int stack[50];
	int top=-1;
%}

%token NUM OTHER

%%
start : 
	E { printf("values : %d\n",pop()); }
	;
E:
       	E E '+' { push(pop()+pop()); }
	| E E '*' { push(pop()*pop()); }
	| E E '/' { push(pop()/pop()); }
	| E E '-' { int temp=pop(); push(pop()-temp); }
 	| NUM { push(yylval); }
	| OTHER { yyerror(); }
	;
%%

int yyerror(){
	printf("Invalid");
}
void push( int e){
	stack[++top]=e;
}
int pop(){
 return stack[top--];
}
int yywrap(){
	return 1;
}
main(){
 yyparse();
}

