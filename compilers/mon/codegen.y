%{
	#include<stdio.h>
	#include<ctype.h>
	#include<string.h>
%}

%token<var> NAME PLUS SUBT MULT DIVI EQUAL
%type<var> exp
%union
{
char var[10];
}
%right EQUAL
%left PLUS SUBT
%left MULT DIVI

%%

input:line'\n'input
     |'\n'input
     |
     ;
line:NAME EQUAL exp { printf("MOV %s,AX\n",$1);}
    ;
exp:NAME PLUS NAME { printf("MOV AX,%s\nADD AX,%s\n",$1,$3 ); } 
    |NAME SUBT NAME { printf("MOV AX,%s\nSUB AX,%s\n",$1,$3 ); }
    |NAME MULT NAME { printf("MOV AX,%s\nMUL AX,%s\n",$1,$3); }
    |NAME DIVI NAME { printf("MOV AX,%s\nDIV AX,%s\n",$1,$3); }
    |NAME  {strcpy($$,$1); }
    ;
%%
extern yylineno;
yyerror(){
	printf("\n error %d\n",yylineno);
}
yywrap(){
return 1;
}
main(){
yyparse();
return 0;
}

   
