%{
	int c=0, v=0;
%}
%%
[aeiouAEIOU] { v++; yymore(); }
[^aeiouAEIOU \n\t] { yymore(); }
[ \n\t]  { if(v>=2) { c++; printf("%s",yytext); }
	  		v=0;
		     }
%%
main()
{
	yylex();
	printf("No. of words with atleast 2 vowels = %d\n",c);
}
