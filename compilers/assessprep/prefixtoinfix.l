%{
  char stack[100];
  int t=0;
  void push(char);
  void pop();
  char top();
%}
op "*"|"/"|"-"|"+"
%%
[A-Za-z] { printf("%c %c ",yytext[0],stack[--t]);  }
{op} { push(yytext[0]); }
%%
void push(char c){
    stack[t++]=c;
 }
int yywrap(){
   return 1;
}
int main(){
   yylex();
}

