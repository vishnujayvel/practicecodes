%token ID NUM
%right '='
%left '+' '-'
%left '*' '/'
%left UMINUS
%%
S: ID{push();}'='{push();} E{codegen_assign(); }
;
E:E'+'{push();}T{codegen(); }
|E'-'{push();}T{codegen(); }
|T
;
T:T'*'{push();}F{codegen();}
|T'/'{push();}F{codegen();}
|F
;
F:'('E')'
|'-'{push();}F{codegen_umin();}
|ID{push();}
|NUM{push();}
;
%%
#include "lex.yy.c"
#include<ctype.h>
#include<string.h>
char st[100][25];
int top=0,ptr=0;
int init=0;
int tintar[200];
int yyerror()
{
printf("error");
return -1;
}
main()
{
        printf("enter the expression");
        yyparse();
}
push()
{
        strcpy(st[++top],yytext);
        ptr++;
        }
codegen()
{
        printf("t%d=%s",init,st[top-2]);
        printnum(2);
        printf("%s %s",st[top-1],st[top]);
        printnum(0);
        printf("\n");
        top-=2;
        ptr-=2;
        strcpy(st[top],"t");
        tintar[ptr]=init;
        init++;
}
codegen_umin()
{
        printf("t%d=-%s\n",init,st[top]);
        printnum(0);
        top--;ptr--;
        strcpy(st[top],"t");
        tintar[ptr]=init;
        init++;
}
codegen_assign()
{
        printf("%s=",st[top-2]);
        printnum(2);
        printf("%s",st[top]);
        printnum(0);
        printf("\n");
        top-=2;ptr-=2;
}
printnum(int n)
{
        if(strcmp(st[top-n],"t")==0)
        {
                printf("%d",tintar[ptr-n]);
        }
}

