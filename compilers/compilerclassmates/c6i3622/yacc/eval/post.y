%{

//#include"lex.yy.c"
 #include<stdio.h>
 #include<assert.h>
void yyerror(char *);

int i=0,st[100];
int pop();
void push(int);
%}
%token ID
%%

S :E { printf("=%d\n",top()); }
E: E E '+' { push(pop()+pop()); }
| E E '-' { int temp=pop(); push(pop()-temp); }
| E E '*' { push(pop()*pop()); }
| E E '/' { int temp=pop(); push(pop()/temp) ; }

%%
/*#include"lex.yy.c"
int st[100];
int i=0;*/
void push(int val)
{
assert(i<100);
st[++i]=val;
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
int main()
{
yyparse();
return 0;
}
void yyerror(char *s)
{
printf("%s\n",s);
}
