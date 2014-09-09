%{
	int i,j,k;
	int while_in=0, bool_in=0, init_in=0, incr_in=0;
	char stack[50];
%}
%%
for\(	{ while_in=1; }
[a-z]=[0-9]\;	{ if(while_in==1)
		  {
			i=0;
			while(yytext[i]!=';')
			{
				printf("%c", yytext[i]);
				i++;
			}
			printf(";\nwhile(");
			init_in=1;
		  }
		}
[a-z][<|>][0-9]\;	{ if(while_in==1 && init_in==1)
			  {
				i=0;
				while(yytext[i]!=';')
				{
					printf("%c",yytext[i]);
					i++;
				}
				printf(")");
				bool_in = 1;
			  }
			}
[a-z]=[a-z]\+[0-9]\)	{ if(while_in==1 && init_in==1 && bool_in==1)
			  {
				i=0;
				while(yytext[i]!=')')
				{
					stack[i]=yytext[i];
					i++;
				}
			  }
			}
.*\}	{ i=0;
	  while(yytext[i]!='}')
	  {
		printf("%c",yytext[i]);
		i++;
	  }
	  printf("	%s;\n}",stack);
	}
%%
main()
{
	yylex();
}
