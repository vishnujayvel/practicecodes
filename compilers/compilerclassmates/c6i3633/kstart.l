%{
	int count=0;
%}
alpha  [a-z|A-Z]
start1 ^k
start2 ^K
num [0-9]
space [ \n\t]

%%
{start1}({alpha}|{num})*  {ECHO;count++;}
{start2}({alpha}|{num})*  {ECHO;count++;}
{space}(k|K)({alpha}|{num})*  {ECHO;count++;}
. ;
%%

int yywrap()
{
	return 1;
}
main()
{
	yylex();
	p
intf("\nNumber of words beginning with k are %d",count);
}
