%{
int k=0,top=-1;
char s[50],dump;
char postfx[50];
void push(char c);
char pop();
void print();
int prec(char c);
%}

%%
 
[a-z] { postfx[k++]=yytext[0]; }
['('] { push(yytext[0]); }
[')'] { while(s[top]!='(') { postfx[k++]=pop(); }
[-+\*/] { while((top>=0) && prec(s[top])>=prec(yytext[0]) ) {postfx[k++]=pop();} push(yytext[0]); }
%%
void push(char c)`
{
	if(top<0)
	s[++top]='#';
	s[top++]=c;
}
char pop()
{
	return s[top--];
}
int prec(char c)
{
	switch(c)
	{
		case '(': return 1;  
		case '#': return 0;
		case '+': case '-':return 2;
		case '*': case '/': return 3;
	default: return 0;
	}
}
void print()
{
	int i=0;
	while(top >= 0)
	{
		postfx[k++]=pop();
	}
	for(i=0;i<=k;i++)
	printf("%c",postfx[i]);
}
		
int main()
{
	yylex();
	return 0;
}		
