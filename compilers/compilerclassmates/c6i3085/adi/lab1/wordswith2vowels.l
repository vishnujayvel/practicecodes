%{
	int c=0,v=0;
%}
%%
[aeiouAEIOU] {	v++;yymore();
	     }
[\n\t] { if(v>=2) 
	{
		printf("%s",yytext);
		c++;
	} 
	v=0;
	}
[^aeiouAEIOU] yymore();
%%
main()
{
	yylex();
	printf("No: of words with vowels>2 = %d ",c);
}
