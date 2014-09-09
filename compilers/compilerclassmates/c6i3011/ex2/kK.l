%{
	int c=0, t;
%}
%%
^[kK]  { c++; ECHO;}
[ \t][kK]([a-zA-Z0-9])* { c++; ECHO; }
.  |
\n ;
%%
main()
{
	yylex();
	printf("\nNo. of words beginning in k or K = %d\n",c);
}
