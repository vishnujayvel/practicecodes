%{
	char stack[100];
	int tos=0;
	void push(char ch);
%}
%%
[a-zA-Z] {	printf("%c %c",yytext[0],stack[--tos]);}
[+\-\*\/\(\)] {	push(yytext[0]);}
%%
void push(char ch)
{	
	stack[tos++]=ch;
}
int yywrap()
{
	return 1;
}
int main()
{
	yylex();
	return 0;
}


