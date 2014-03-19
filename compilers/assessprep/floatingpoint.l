%{
%}
digit [0-9]
digits [0-9]+
%%
({digits})(.)?({digits})?({digits})? { ECHO; } 
. {}
%%
int main()
{
//(E(+|-)?({digits}))? { ECHO; }

	yylex();
}


