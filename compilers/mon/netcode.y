%{
#include<stdio.h>
#include<ctype.h>
#include<string.h>
FILE *fout;
%}

%token<var> NAME PLUS EQUAL MULT DIVI SUBT 
%type<var> exp 
%union
{
char var[10];
}
%right EQUAL
%left PLUS SUNT
%left MULT DIVI


%%	
	
input:line'\n'input
     |'\n'input
     |/*empty*/
     ;
line:NAME EQUAL exp {fprintf(fout,"MOV %s,AX\n",$1);}
    ;
exp:NAME PLUS NAME {fprintf(fout,"MOV AX,%s \n ADD AX,%s\n",$1,$3);}
    |NAME SUBT NAME {fprintf(fout,"MOV AX,%s \n SUB AX,%s\n",$1,$3);}
    |NAME MULT NAME {fprintf(fout,"MOV AX,%s \n MUL AX,%s\n",$1,$3);}
    |NAME DIVI NAME {fprintf(fout,"MOV AX,%s \n DIV AX,%s\n",$1,$3);}
    |NAME  	 {strcpy($$,$1);}
    ;
%%

extern yylineno;

yyerror()
{
	printf("\neroor %d",yylineno);	
}
yywrap()
{
return 1;
}
extern FILE *yyin;
main()

{

FILE *fin;
fin=fopen("input.txt","r");
fout=fopen("out.txt","w");

yyin=fin;

yyparse();
fcloseall();	
return 0;
}
