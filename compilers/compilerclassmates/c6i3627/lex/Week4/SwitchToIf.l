sw	"switch"
space	[ \t]
nl	[\n]
bracket	"("|")"
obrace	"{"
cbrace	"}"
cs	"case"
num	[0-9]
alpha	[a-zA-Z]
delim	":"
br	"break;"
def	"default"
%{
char temp[30], var[10],cond[10];
int i,j,count=0;
%}
%%
{sw}{space}*{bracket}{space}*({alpha}*{num}*)*{space}*{bracket}	{bzero(temp,30);
								 bzero(var,10);
								 strcpy(temp,yytext);
								 i=0;
								 j=0;
								 while (temp[i]!='(')
									i++;
								 i++;
								 while (temp[i]==' ')
								 	i++;
								 while (temp[i]!=')')
								 {
									var[j]=temp[i];
									j++;
									i++;
								 }
								}
{obrace}	;
{cs}{space}*{num}*{space}*{delim}	{if(count!=0)
					 	printf("else ");
					 printf("if ( %s==",var);
					 bzero(temp,30);
					 bzero(cond,10);
					 strcpy(temp,yytext);
					 i=0;
					 j=0;
					 while(temp[i]<48 || temp[i]>57)
					 	i++;
					 while(temp[i]>=48 && temp[i] <=57)
					 {
						cond[j]=temp[i];
						j++;
						i++;
					 }
					 printf("%s)\n{\n",cond);
					 count++;
					 }
{br}	{printf("}");}
{def}{space}*{delim}	{printf("else\n{\n");}
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
								
