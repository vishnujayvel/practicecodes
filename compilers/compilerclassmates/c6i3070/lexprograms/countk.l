%{
int kcount=0;
%}
%%
(k|K)[a-z]*[0-9]*	 {kcount++;
		  	printf("\n%s",yytext);
		 	 }
^[a-j][a-z]*[0-9]*	;
^[l-z][a-z]*[0-9]*	;
%%
main()
{
	yylex();
	printf("\n No. of words starting with k=%d",kcount);
}
