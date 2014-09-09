%{
	int i=0, j=0;
	int flag = 0;
	char str[50];
%}
%%
(int)  {
		if(i==0)
		{
			printf("#define");
			i++;
		}
		else
		{
			printf("");
		}
		}
(return)	;
[\t] {
		printf("");
	}
[a-zA-Z]* {
		
			ECHO;
}
[(]	{
		printf("(");
	}

[\,]	{
		printf(",");
	}
[)] {
	printf(")");
	flag = 1;
	}
[{] 	;
[}]	;
[\;] {
	;
	}


%%
int main()
{
	yylex();
}

