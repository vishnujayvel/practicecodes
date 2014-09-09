%{
int count=0;
%}
%%
[aeiou]  { count++; yymore();  printf("\n%s",yytext);  }
[a-z] {  }
[  \n] {   if(count==0) { printf("No vowels=%s",yytext); } count=0; }
[1-9] { yyless(4); printf("\n%s",yytext); }
. ; 
%%
int main()
{
yylex();
return 1;
}
