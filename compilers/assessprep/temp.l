%{
char stack[100];
int ptr=0;
void push(char ch);
%}
op "+"|"-"|"*"|"/"
%%
[a-zA-Z] { printf("%c %c ",yytext[0],stack[--ptr]);  }
{op} { push(yytext[0]); }
%%
void push(char ch){
stack[ptr++]=ch;
}
int yywrap(){
return 1;
}
int main()
{
yylex();
return 0;
}
