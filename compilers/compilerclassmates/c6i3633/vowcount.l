vowel [aeiouAEIOU]
const [^ \t\naeiouAEIOU]
space [ \n\t]
%{
	int count=0;
%}

%%
({const})*{vowel}({const})*{vowel}({const}|{vowel})*{space}  {ECHO;printf(" ");count++;}
. ;
%%

int yywrap( )
{
	return 1;
}
main()
{
	yylex();
	printf("there are %d  words having atleast 2 vowels ",count);
} 

