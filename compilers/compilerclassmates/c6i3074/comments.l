%{
	int c=0;
%}
%%
\/\/.*; ECHO;
\/\*(.*\n)*.*\*\/; ECHO;
^[A-Za-z]* () 
%%
int main()
{
	yylex();
}
