%{
char s[50],k=0,top=-1,inf[50];
void push(char x);
char pop();
void print();
%}

%%
[a-z]	{inf[k++]=yytext[0];inf[k++]=pop();}
[-+*/]	{push(yytext[0]);}
\n	{print();}
%%

void push(char x)
{
s[++top]=x;
}

char pop()
{
return s[top--];
}

void print()
{
while(top>=0)
	inf[k++]=s[top--];
int i;
for(i=0;i<=k;i++)
	printf("%c",inf[i]);
}

int main()
{
yylex();
return 1;
}
