%{
char s[100];
int top=0;
void push(char);
%}
%%
[a-zA-Z] { printf("%c%c",yytext[0],s[--top]);}
[+\-\*\/] { push(yytext[0]);
}
%%
void push(char c)
{
        s[top++]=c;
}
main()
{
yylex();
return ;
}
