%{
	int count=0;
%}

%%
^[kK] {   count++;ECHO;}
[ ]([kK])([a-z]|[A-Z]|[0-9])* { count++;ECHO;}
^[^kK]([a-z]|[A-Z]|[0-9])* { printf(" ");}
(^|[ ])([^kK])([a-z]|[A-Z]|[0-9])* {printf(" ");}
%%
main()
{
	yylex();
	printf("No. of words starting with k=%d",count);
}
