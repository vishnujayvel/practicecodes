%{
	char buf[10];
	char p;
	int i=0;
	int j=0;
%}
%%
(\#define)	{printf("void func()\n{\nint ");}
[A-Za-z]	{
		ECHO;
		}
[ ]		{i=i+1;}
([0-9])*	{
		if(i==2)
		{
		printf("=");
		ECHO;
		printf(";\n}");
		}
		}
%%
main()
{
yylex();
}

