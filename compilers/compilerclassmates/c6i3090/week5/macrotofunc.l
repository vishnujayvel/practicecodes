%{
	char parameter[5];
	char functionname[20];
	int i,j,k;
%}
%%

#define.*\( 	{
			i=0;
			j=0;
			while(yytext[i]!=' ')
			{
				i++;
			}
			while(yytext[i]!='(')
			{
				functionname[j]=yytext[i];
				i++;
				j++;
			}
			printf("int %s(",functionname);
		}


[a-z]\)		{	
			i=0;
			while(yytext[i]!=')')
			{
				parameter[i]=yytext[i];
				i++;
			}
			printf("int %s)\n{\n return ",parameter);
		}
.		ECHO;	
\n		{
			printf("\n}");
		}

















%%


