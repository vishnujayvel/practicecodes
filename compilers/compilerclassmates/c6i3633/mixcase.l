lower [a-z]
upper [A-Z]
mixed [A-Za-z]
num [0-9]
space [ \t\n]
%{
	int ucount=0,lcount=0,count=0;
%}

%%

({lower})+({upper})+({lower}|{upper})*  {ECHO;printf(" ");count++;}
({upper})+({lower})+({lower}|{upper})*  {count++;ECHO;printf(" ");}
. ;
%%
int yywrap()
{
	return 1;
}
main()
{
	yylex();
	printf("The count is %d",count);
}
