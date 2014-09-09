%{
	int c=0;
	int v=0;
%}

%%
[aeiouAEIOU]+ { v++;printf("%s",yytext); }
[\n\t] { if(v>=2)  {c++;} v=0;}
%%
int main()
{
	yylex();
	printf("\nNo. of words with 2 vowels=%d",c);
}

