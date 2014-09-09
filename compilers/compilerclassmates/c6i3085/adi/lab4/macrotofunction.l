%{
	char funcname[50];
	char parameter[10];
	int i=0,j=0;
%}

%%
#define.*\(	{
			i=0;
			j=0;
			while(yytext[i]!=' ')
			{
				i++;
			}
			while(yytext[i]!='(')
			{
				funcname[j]=yytext[i];
				j++;
				i++;
			}
			printf("int %s(",funcname);
		}
[a-z]\)		{	i=0;
			while(yytext[i]!=')')
			{
				parameter[i]=yytext[i];
				i++;
			}
			printf("int %s)\n{\n\treturn ",parameter);
		}
[\n\t]	{	printf(";\n}\n");
	}
.	{ECHO;
	}
%%
int main()
{
	yylex();
}

		

