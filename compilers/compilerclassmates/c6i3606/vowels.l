%{
	int c=0, v=0;
%}
%%
[aeiouAEIOU] {v++; yymore();}
[a-zA-z] {yymore();}
[' '\n\t'.'] { if(v>=2) 
	    { 
		c++; 
		printf("%s", yytext); 
	    } 
	    v=0; }
%%
main()
{
	yylex();
	printf("\nNo. of words with more than 2 vowels = %d", c);
}
