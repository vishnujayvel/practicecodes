%{
%}
%%
"void" {
	printf("# MACRO ");
	flag=1;
       }
. {
	if(flag==1)
	{  
	  strcpy(mname,yytext);
	}
  }
%%
main()
{
yylex();
}
