%{
int count=0, vowels=0,pos=0;
char arr[100];
void change(char ch[]);
%}
%% 
[aeiouAEIOU] {vowels++; change(yytext);  }
[a-zA-Z] {change(yytext);}
[ \n\t] {if(vowels>=2) { count++; printf("\n%s",arr); } vowels=0; pos=0; }
%%
main()
{
yylex();
printf("\n no of words with 2 or more vowels-%d",count);
}
void change(char ch[])
{
arr[pos]=ch[0];
pos++;
}
