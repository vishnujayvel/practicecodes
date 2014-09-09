%{
	char name[50];
	char ret[50];
	int i=0;
	int j=0;
%}

%%

.*\)	{
		printf("#define ");
		while(yytext[i]!=' ')
                {
                        i++;
                }

		while(yytext[i]!='(')
		{
			printf("%c",yytext[i]);
			i++;
		}
		i=0;
		while(yytext[i]!=' ')
		{
			i++;
		}
		printf("(%c) ",yytext[i+1]);
	}
return.*\;	{
			i=0;
			while(yytext[i]!=' ')
			{
				i++;
			}
			while(yytext[i]!=';')
			{
				printf("%c",yytext[i]);
				i++;
			}
		}
\}	{
	//	printf("\n");
	}
\{	{}
%%
int main()
{
	yylex();
}
			
		
