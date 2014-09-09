%{
	int i=0;
%}

%%

(if)  ECHO;
[(]  {
	printf("(");
	}
[\t] {
	printf(")");
	}

[a-zA-Z]* {
		ECHO;
	}
"<"|"<="|">="|">" { ECHO;
		}
[)] {
	ECHO;
	}
(\|\|)	{
		printf("){\n else if(");
	}
(else) 	{
		printf("}\n %s\n", yytext);
	}
%%
int main()
{
	yylex();
}
