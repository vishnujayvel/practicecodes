%{
	int i=0;
%}
%%
(\#define) {	printf("void func(int a){"); }
[\t] 	;
[a-zA-z]  {
		ECHO;
		printf("=");
	}
[\t]	;

[0-9]  {  ECHO;
	}
[\n] { printf("}"); }
%%
main()
{
	yylex();
}
