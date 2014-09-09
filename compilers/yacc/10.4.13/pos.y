
%{
    #include<stdio.h>
    #include<assert.h>
    void push(int val);
%}

%token ID

%%

S     : E  {printf("= %d\n",top());}
      ;
E     : E E '+' {push(pop()+pop());}
     | E E '-' {int temp=pop();push(pop()-temp);}
     | E E '*' {push(pop()*pop());}
     | E E '/' {int temp=pop();push(pop()/temp);}
     | ID    {push(yylval);}
     ;

%%
#include"lex.yy.c"

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
int main()
{
    yyparse();
    return 0;
}

Output:

nn@linuxmint ~ $ lex pos.l
nn@linuxmint ~ $ yacc pos.y
nn@linuxmint ~ $ gcc y.tab.c -ll -ly
nn@linuxmint ~ $ ./a.out
5 5 -
= 0
nn@linuxmint ~ $ 
