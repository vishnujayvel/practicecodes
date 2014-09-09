%{
int flag=0;
%}
%%
"&&" {
	  printf(")\nif(");
	  flag=1;
     }
")" {
	  flag=0;
	  printf(")");
    }
. {
	if(flag==1)
	{
	    printf("%s",yytext);
	    
	}
	else
	    printf("%s",yytext);
  }
%%
main()
{
yylex();
}
