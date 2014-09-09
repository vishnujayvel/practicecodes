%{
char var[10],opr[10];
int tos1=-1,tos2=-1;
%}
%%
[a-zA-Z] {
		var[++tos1]=yytext[0];	
	 }
"+"|"-"|"*"|"/" {
			opr[++tos2]=yytext[0];
		}
%%
main()
{
int i;
yylex();
for(i=0;i<=tos1;i++)
{
printf("%c ",var[i]);
}
for(i=tos2;i>=0;i--)
{
printf("%c ",opr[i]);
}
}
