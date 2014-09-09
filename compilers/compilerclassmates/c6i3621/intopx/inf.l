%{
char s[50],dump;
char postfx[50];
int top=-1,k=0;
void push(char c);
char pop();
int prec(char ch);
void print();
%}
%%
[a-z] { postfx[k++]=yytext[0]; }
['('] { push(yytext[0]); }
[')'] { while(s[top]!='(') postfx[k++]=pop(); dump=pop(); }
[-+\*/] { while(top>=0 && prec(s[top])>=prec(yytext[0])) { postfx[k++]=pop();}
	push(yytext[0]); }
[\t\n] {print(); }
%%
void print()
{
	int i=0;
	while(top>=0)
	{
		postfx[k++]=pop();
	}
	for(i=0;i<=k;i++)
	printf("%c",postfx[i]);
}
void push(char c)
{
	if(top<0)
	s[++top]='#';
	s[top++]=c;
}
char pop()
{
	int temp=top;
	top--;
	return s[temp];
}
int prec(char ch)
{
	switch(ch)
	{
		case '(':return 1;
		case '#':return 0;
		case '+': case '-' : return 2;
		case '*': case '/': return 3;
		default: return 0;
	}
}
int main()
{
	yylex();
	return 1;
}

