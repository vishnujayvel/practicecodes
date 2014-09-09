%{
int lc=-1;
char op[10];
%}
%%
[a-zA-Z] {
		printf("%c",yytext[0]);
		if(lc>=0)
			printf("%c",op[lc--]);
	}
['+'\-'*''/'] {
		op[++lc]=yytext[0];
		}
[ \n\t] {
	printf("\n");
	}
%%
int main()
{
yylex();
return 0;
}
