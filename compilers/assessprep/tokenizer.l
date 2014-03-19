%{

	char id_list[10][100],keyword_list[10][100];

	int f=0;

	int i=0,i1=0,i2=0;

%}

ID	[_a-zA-Z]+([a-zA-Z0-9])*

%%

int|float	{

				strcpy(keyword_list[i2++],yytext);

		}



({ID})		{

			printf("%d id %s\n",f,yytext);

			if(!f)

				strcpy(id_list[i1++],yytext);

		}

(({ID})\(.*)	{

			printf("function %s\n",yytext);	

		}

[ ]		{

			f=0;

		}

.		{

			f=1;

		}

[\n]		{

			f=0;

		}

%%

int yywrap()

{

	return 1;

}

int main()

{

	yylex();

	for(i=0;i<i1;i++)

		printf("id : %s\n",id_list[i]);

	for(i=0;i<i2;i++)

		printf("keyword %s\n",keyword_list[i]);

}
