%{
int a=0,d=0;
char oper[10];
%}
cond [a-zA-Z]*[<>=]*[0-9]*
%%
(&&)	{a=1;}
{cond}	{
	if(a==1){
		d=1;
		strcpy(oper,yytext);
		}
	else
	printf("%s",yytext);
	}
(\{)	{
		if(d==1)
		{
			printf("if(%s){",oper);
		}
	}

(\))	{a=0;ECHO;}
(\|\|)	{printf("or");}
(\})	{printf("}");}

%%

int main()
{
yylex();
return 1;
}
