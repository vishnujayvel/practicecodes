%token ID NUM FOR OB EQ CB DEL LOGIC INCR OPER OSB CSB RELOP OTHER
%%
start:FOR{push();} OB{push();} init{code_gen();} DEL{push();} cond{code_gen();} DEL{push();} incre{code_gen();} CB{push();} OCB{push();} body{code_gen();} CCB{push();}
init:ID{push();} EQ{push();} NUM{push();}
    ;
cond:ID{push();} RELOP{push();} NUM{push();}
    | OB{push();} cond{code_gen();} CB{push();} LOGIC{push();} OB{push();} cond{code_gen();} CB{push();}
    ;
incre:ID{push();} incr{push();}
     | ID{push();} EQ{push();} ID{push();} OPER{push();} NUM{push();}
     | ID{push();} OPER{push();} EQ{push();} NUM{push();}
     ;
body: OTHER{code_gen();}
    | body{code_gen();} OTHER{code_gen();}
    ;
%%
#include "lex.yy.c"
#include<ctype.h>
#include<string.h>
char st[100][25];
int top=0,ptr=0,count=0;
int countarr[200];
main()
{
yyparse();
}
push()
{
strcpy(st[++top],yytext);
ptr++;
}
int yywrap()
{
return 1;
}
int yyerror()
{
printf("\nInvalid for expression");
return 1;
}

