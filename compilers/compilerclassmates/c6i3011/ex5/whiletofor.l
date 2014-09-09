%{
	int bool_in=0,i;
%}
%%
while\(1\)	{ bool_in=1;
		  printf("for(; ;)");
		}
while\(		{ printf("for(;");
		  bool_in=1;
		}
[)]		{ if(bool_in==1)
			printf(";)");
		  else
			printf("%c",yytext[0]);
		}
%%
main()
{
	yylex();
}
