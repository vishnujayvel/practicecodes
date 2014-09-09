%{
	int i=0;
%}
%%
(\#define) { printf("int"); }
[\t]     { printf(" ");}


[a-zA-z]* { ECHO;
		}
[{] {
		printf("{ return ");}
[}] {
		printf("}");
	}
[\(] {
	printf("(int");
       }

[\,] {
		printf(",int");
	}

%%
main()
{
	yylex();
}
