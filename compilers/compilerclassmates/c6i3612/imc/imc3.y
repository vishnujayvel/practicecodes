%{
int yylex(void);e
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
expr '\n' {}

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
int i=0,prec=0,j,a[10];
=0;i<c;i++)
{
for(j=i;j<c;j++){
        if(e[i].prec<=e[j].prec)
        {
                struct exp temp=e[i];
                e[i]=e[j];
                e[j]=temp;
        }
}

}

for(i=0;i<c;i++)
        if(i==0)
        printf(" t%d=%c%c%c \n",i,e[i].op1,e[i].oper,e[i].op2);
        else
        printf(" t%d=%c%ct%d \n",i,e[i].op2,e[i].oper,i-1);
}
(yparse();
for(i=0;i<c;i++)
{
        if(e[i].oper=='/'||e[i].oper=='*')
                e[i].prec=1;
        else
                e[i].prec=0;
        e[i].pos=i;
}
printf("\n");
for(i=0;i<c;i++)
{
for(j=i;j<c;j++){
        if(e[i].prec<e[j].prec)
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

