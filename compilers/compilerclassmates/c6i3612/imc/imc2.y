%{
int yylex(void);
void yyerror(char *);
struct exp{
 char op1,op2,oper;
 int prec,pos;
}e[10];
int c=0;
#include<stdio.h>
%}

%token VARIABLE
%token INTEGER
%token OPERATOR

%%

program:
expr '\n' {printf("Verified");}

expr:
term OPERATOR expr      {e[c].op1=$1;e[c].op2=$3;e[c++].oper=$2;}
|term   {//printf("%c",$1);
        }

term:
VARIABLE
|INTEGER
%%


void yyerror(char *s) {
fprintf(stderr, "%s\n", s);
}

int main()
{
int i=0,p=0,j,a[10];
yyparse();
for(i=0;i<c;i++)
{
        if(e[i].oper=='/'||e[i].oper=='*')
                e[i].p=1;
        else
                e[i].p=0;
        e[i].pos=i;
}
printf("\n");
for(i=0;i<c;i++)
{
for(j=i;j<c;j++){
        if(e[i].p<e[j].p)
        {

                struct exp temp=e[i];
                e[i]=e[j];
                e[j]=temp;
        }


}

}

for(i=0;i<c;i++){
        if(i==0)
        printf(" t%d=%c%c%c \n",i,e[i].op1,e[i].oper,e[i].op2);
        else{
        if(e[i].pos<i)
        printf(" t%d=t%d%c%c \n",i,i-1,e[i].oper,e[i].op2);
        else
        printf(" t%d=%c%ct%d \n",i,e[i].op1,e[i].oper,i-1);
        }
}
}

