%{
int lower=0,upper=0,count=0,pos=0;
void pri(char ch[]);
char arr[100];
%}
%%
[a-z] {lower++; pri(yytext);}
[A-Z] {upper++; pri(yytext);}
[ \n\t] { if(lower>0 && upper>0) {count++; printf("\n=%s",arr);} lower=0; upper=0;pos=0; }
%%
main()
{
yylex();
printf(" number of words in the mixed case-%d",count);
}
void pri(char ch[])
{
arr[pos]=ch[0];
pos++;
}

