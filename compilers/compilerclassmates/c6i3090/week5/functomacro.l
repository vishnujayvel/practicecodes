%{
int count=0;
char content[30];
int i=0,j=0,k=0;
char parameter[20];
char functionname[30];
%}
%%

return.*	{
			i=0;
			j=0;
			while(yytext[i]!=' ')
			{
				i++;
			}
			while(yytext[i]!=';')
			{
				content[j]=yytext[i];
				j++;
				i++;

			}
			printf("%s",content);
		}
\{		{}
\}		{}
.*\)		{
			i=0;
			j=0;
			printf("#define ");
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
			while(yytext[i]!=' ')
			{
				i++;
			}
			j=0;
			while(yytext[i]!=')')
			{
				parameter[j]=yytext[i];
				i++;
				j++;
			}
			printf("%s(%s) ",functionname,parameter);
		}

%%
