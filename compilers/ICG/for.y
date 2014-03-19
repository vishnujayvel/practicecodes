%{

#include<stdio.h>

#include<ctype.h>

#include<string.h>

%}



%token<var> NAME PLUS EQUAL MULT DIVI SUBT NOT GOTO IF DIGIT

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

|

'\n'input

|/*empty*/

;

line:NAME EQUAL exp {printf("MOV %s,AX\n",$1);}

     |GOTO NAME    {printf("JMP %s\n",$2);}

     |IF NAME GOTO NAME    {printf("CMP %s,1\nJZ %s\n",$2,$4);}

     |NAME EQUAL DIGIT {printf("MOV BX,%s\n",$3);}

;

exp:NAME PLUS NAME {printf("MOV AX,%s \nADD AX,%s\n",$1,$3);}

|NAME SUBT NAME {printf("MOV AX,%s \nSUB AX,%s\n",$1,$3);}

|NAME MULT NAME {printf("MOV AX,%s \nMUL AX,%s\n",$1,$3);}

|NAME DIVI NAME {printf("MOV AX,%s \nDIV AX,%s\n",$1,$3);}

|NAME PLUS DIGIT {printf("MOV AX,%s \nADD AX,%s\n",$1,$3);}

|NAME SUBT DIGIT {printf("MOV AX,%s \nSUB AX,%s\n",$1,$3);}

|NAME MULT DIGIT {printf("MOV AX,%s \nMUL AX,%s\n",$1,$3);}

|NAME DIVI DIGIT {printf("MOV AX,%s \nDIV AX,%s\n",$1,$3);}

|NAME {strcpy($$,$1);}

|NOT NAME       {printf("MOV AX,NOT %s\n",$2);}

;

%%



extern yylineno;



yyerror()

{

        printf("\nerror %d",yylineno);

}
