
%{
	#include<string.h>
	char data[10][10],key[10][10],operator[100][10],operand[100][10];
	int d=0,k=0,op=0,opd=0;
%}

datatype 	int|float|double|struct|void
keyword  	if|else|for|while|do|switch|main|case|break|printf
operator 	[-+*/%<>=|!&`^)(] 
identifier	[a-zA-Z]+[0-9]*[_]*

%%

{datatype}	{ 	strcpy(data[d],yytext);
			d++;
		}

{keyword}	{
			strcpy(key[k],yytext);
			k++;
		}
{operator}	{	
			strcpy(operator[op],yytext);
			op++;
		}

{identifier}	{
			strcpy(operand[opd],yytext);
			opd++;
		}
{identifier}(\(\))	{	printf("Function = %s\n",yytext);

			}
.	|
\n	;
%%
int main()
{
	yylex();
	printf("\nDatatype:\n");
	int i=0;
	for(i=0;i<d;i++)
	{
		printf("%s\n",data[i]);
	}
	printf("\nkeywords:\n");
        for(i=0;i<k;i++)
        {
                printf("%s\n",key[i]);
        }
	 printf("\nOperators:\n");
        for(i=0;i<op;i++)
        {
                printf("%s\n",operator[i]);
        }
	 printf("\nIdentifiers:\n");
        for(i=0;i<opd;i++)
        {
                printf("%s\n",operand[i]);
        }
}
