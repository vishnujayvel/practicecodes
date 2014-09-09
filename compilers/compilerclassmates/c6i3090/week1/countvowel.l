%{
	int c=0,v=0;
%}
%%
[aeiouAEIOU]  { v++; yymore();  }
[\n \t] { if(v>=1) printf("%s",yytext);  if(v >=2) {  c++; } v=0; } 
[^aeiouAEIOU] { yymore();
// if(v==0)  printf(""); 
 }
%%
main()
{
	yylex();
	printf("\n Number of words with atleast 2 vowels = %d",c);
}

