%{
#include<stdio.h>
#include<assert.h>
void push(int val);
%}
%token ID
%%
s:E {printf("=%d\n",top());}
 ;
E:E E'+'	{push(pop()+pop());}
 |E E'-'	{int temp=pop();push(pop()-temp);}
 |E E'*' {push(pop()*pop());}
 |E E'/' {int temp=pop();push(pop()/temp);}
 |ID    {push(yylval);}
 ;
%%
int st[100];
int i=0;
void push(int val)
{
assert(i<100);
st[i++]=val;
}
int pop()
{
assert(i>0);
return st[--i];
}
int top()
{
assert(i>0);
return st[i-1];
}
int yyerror()
{
return 0;
}
int main()
{
yyparse();
return 0;
}
