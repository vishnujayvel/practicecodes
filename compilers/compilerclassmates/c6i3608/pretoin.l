%{
char var[10],opr[10];
int tos1=-1,tos2=-1;
%}
%%
[a-zA-z] {
	 	var[++tos1]=yytext[0];
	 }
"+"|"-"|"*"|"/" {
		opr[++tos2]=yytext[0]; 
	}
%%
main()
{
int i,j;
yylex();
for(i=0,j=tos2;i<=tos2;i++,j--)
{
printf("%c %c ",var[i],opr[j]);
}
printf("%c",var[tos1]);
}
