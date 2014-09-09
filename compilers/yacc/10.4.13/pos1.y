%{
#include<stdio.h>
#include<assert.h>
 int Pop();
 int Top();
 void Push(int val);
%}

%token T_Int

%%
S : S E    {printf(" %d\n", Top());}
  |
  ;

E : E E '+' {Push(Pop()+Pop());}
  | E E '-' {int op2=Pop();Push(Pop()-op2);}
  | E E '*' {Push(Pop() * Pop());}
  | E E '/' {int op2=Pop();Push(Pop()/op2);}
  | T_Int   {Push(yylval);}
  ;
%%
#include "lex.yy.c"
 int stack[100],count=0;

 int Pop()
 {
  assert(count>0);
  return stack[--count];
 }

 int Top()
 {
  assert(count>0);
  return stack[count-1];
 }

 void Push(int val)
 {
  assert(count<sizeof(stack)/sizeof(int));
  stack[count++]=val;
 }

int main()
 {
  return yyparse();
 }

