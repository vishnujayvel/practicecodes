%{
char s[50],post[50];
int k=0,top=-1;
char dump;
void push(char x);
char pop();
int prec(char x);
void print();
%}

%%
[a-z]		{post[k++]=yytext[0];}		
[-+*/]		{while(top>0 && prec(s[top])>=prec(yytext[0]))
			post[k++]=pop();
		push(yytext[0]);
		
		}
[\(]		{push('(');}
[\)]		{	while( top>=0 && s[top]!='('){
				post[k++]=pop();
				
				}
			dump=pop();
		}
\n		{print();}

%%

void print()
{
while(top>=0)
	post[k++]=pop();
int i;
for(i=0;i<=k;i++)
	printf("%c",post[i]);
}

void push(char x)
{
	
s[++top]=x;
}
char pop()
{

return s[top--];
}
int prec(char x)
{
switch(x)
{
case '#':return 0;
case '(':return 1;
case '+':
case '-':return 2;
case '*':
case '/':return 3;
}
}

int main()
{
yylex();
return 1;
}
