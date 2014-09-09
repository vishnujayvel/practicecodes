%token ID NUM
%right '='
%left '+''-'
%left '*''%'
%left UMINUS
%%

S: ID{push();}'='{push();}E{codegen_assign();}
 ;
E:E'+'{push();}T{codegen();}
 |E'-'{push();}T{codegen();}
 |T
 ;
T:T'*'{push();}F{codegen();}
 |T'/'{push();}F{codegen();}
 |F
 ;
F:'('E')'
 |'-'{push();}F{codegen_umin();}%prec UMINUS
 | ID{push();}
 | NUM{push();}
 ;
%%
#include "lex.yy.c"
#include<ctype.h>
#include<string.h>
char st[100][25];
int top=0,ptr=0;
int tint=0;
int tintar[200];
main()
{
printf("\nEnter the expression:");
yyparse();
}
push()
{
strcpy(st[++top],yytext);
ptr++;
}
codegen()
{
printf("t%d=%s",tint,st[top-2]);
printnum(2);
printf("%s %s",st[top-1],st[top]);
printnum(0);
printf("\n");
top-=2;ptr-=2;
strcpy(st[top],"t");
tintar[ptr]=tint;
tint++;
}
codegen_umin()
{
printf("t%d=-%s\n",tint,st[top]);
printnum(0);
top--;
ptr--;
strcpy(st[top],"t");
tintar[ptr]=tint;
tint++;
}
codegen_assign()
{
printf("%s=",st[top-2]);
printnum(2);
printf("%s",st[top]);
printnum(0);
printf("\n");
top=-2;
ptr=-2;
}
printnum(int n)
{
if(strcmp(st[top-n],"t")==0)
{
printf("%d",tintar[ptr-n]);
}
}
int yywrap()
{
return 1;
}
int yyerror()
{
printf("\nInvalid expression");
return 1;
}

