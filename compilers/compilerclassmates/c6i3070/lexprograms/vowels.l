%{
int count=0,vowel=0;
%}
%%
[aeiouAEIOU]	{vowel++;yymore();}
[ \n\t]	{if(vowel>=2){count++;printf("\n%s",yytext);}vowel=0;}
[^aeiouAEIOU] {yymore();}
%%
main()
{
yylex();
printf("\n No. of words with atleast 2 vowels=%d",count);
}
