alpha [ a-z A-Z]
num [0-9]
special ['!@#$%^&*()_+|<>:"?/[]{}\]
single "//"
multio "/*"
multic "*/"
space [\t]
nl [\n]

%%

{multio} ( {alpha} * {num} * {special} * {space} * {nl}*)*
	{multic}
{single} ({alpha}*{Pnum}*{special}*{space}*) {nl};
.	ECHO;
%%

int yywrap()
{
return 1;
}
int main()
{
yylex();
return 0;
}

