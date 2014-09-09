%{
	char s[50], post[50];
	int tos=-1, i=0;
	void push(char);
	char pop();
	int pre(char);
%}
%%
[(] { push(yytext[0]); }
[a-zA-Z] { post[i++]=yytext[0]; }
[)] { 
	while(s[tos]!='(')
		post[i++]=pop();
        pop();
    }
[+] {    
	while( pre(s[tos]) > pre(yytext[0]) )
		post[i++]=pop();
	push(yytext[0]);
    }
[-]	{
        while( pre(s[tos]) > pre(yytext[0]) )
                post[i++]=pop();
        push(yytext[0]);
        }
[*] {
        while( pre(s[tos]) > pre(yytext[0]) )
                post[i++]=pop();
        push(yytext[0]);
        }
[/] {
        while( pre(s[tos]) > pre(yytext[0]) )
                post[i++]=pop();
        push(yytext[0]);
        }
[ \t\n] {
	while(s[tos]!='#')
		post[i++]=pop();
	post[i]='\0';
	}
%%
main()
{
	push('#');
	yylex();
	printf("%s\n", post);
}
void push(char e)
{
	s[++tos]=e;
}
char pop()
{
	return(s[tos--]);
}
int pre(char e)
{
	switch(e)
	{
		case '#': return 0;
		case '(': return 1;
		case '+': 
		case '-': return 2;
		case '*': 
		case '/': return 3;
	}
}
