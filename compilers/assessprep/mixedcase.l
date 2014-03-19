%{
  int c=0;
%}
space [ \t\n]
%%
{space}*[A-Z]+[a-z]([A-Z]|[a-z])* { c++; ECHO; }
{space}*[a-z]+[A-Z]([A-Z]|[a-z])* { c++; ECHO; }
. {;}
%%
int main(){
   yylex();
   printf("count = %d",c);
}

