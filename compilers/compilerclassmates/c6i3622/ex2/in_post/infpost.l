%{
 #include<stdio.h>
 char op[50],stack[50];
 int top=-1,k=-1;
 char c1,c2;
 int p1,p2;

 int pri(char);
 void func(char);
 void calc();
%}


%%

[a-z] { op[++k]=yytext[0]; }
[-+*/()] { func(yytext[0]);}
\n return 0;

%%

main()
{
 yylex();
 while(top>=0)
 {
 op[++k]=stack[top];
  top--;
 }
 printf("%s\n",op);
 return 0;
}
void func(char c)
{
 top++;
 stack[top]=c;

 if(top>=1)
   calc();
}

void calc()
{
 int t=top;
  c1=stack[t]; 
 t--;
  c2=stack[t];
 printf("%c %c\n",c1,c2);

 if(c1!='(' && c2!='('&& c1!=')')
{
  p1=pri(c1);
  p2=pri(c2);
  if(p2>=p1)
  {
//  printf("Take out\n");
    t=top; --t;
     char cc=stack[top];
     op[++k]=stack[t];
    stack[t]=cc;
    top--;
  
if(top>=1){printf("Call\n"); calc();}
   }
}
else if (c1==')')
{
  top--;

  while(stack[top]!='(')
   {
 	op[++k]=stack[top];
 	top--;
  }
top--;
}
  
}

int pri(char c)
{
 int p;
 switch(c)
 {
   case '%':
   case '*':
   case '/': p=2; break;
   case '+':
   case '-': p=1; break;

 }
return p;
}
