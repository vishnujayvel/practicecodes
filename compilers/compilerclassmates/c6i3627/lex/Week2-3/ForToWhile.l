loop	"for"
delim	";"
obrace	"{"
cbrace	"}"
obracket "("
cbracket ")"
char 	[a-zA-Z]
num 	[0-9]
space	[\t ]
nl 	[\n]
cond	"<"|">"|"<="|">="|"!="|"="
iter	"++"|"--"
blankloop "for(;;)"
%{
	char temp[100],init[10],cond[10],inc[10];
	int i=0,j=0,k=0,l=0;
%}
%%
{loop}{space}*{obracket}({space}*{char}*{num}*)+{space}*={space}*{num}+{space}*{delim}{space}*({char}*{num}*)*{space}*{cond}{space}*{num}+{space}*{delim}{space}*({char}*{num}*)*{iter}{space}*{cbracket} {
				strcpy(temp,yytext);
				while(temp[i]!='(')
					i++;
				i++;
				while(temp[i]!=';')
				{
				init[j]=temp[i];
				i++;j++;
				}
				i++;
				while(temp[i]!=';')
				{
				cond[k]=temp[i];
				i++;k++;
				}
				i++;
				while(temp[i]!='}'&& i<(strlen(temp)))
				{
				inc[l]=temp[i];
				i++;l++;
				}
				inc[strlen(inc)-1]=';';
				printf("\n%s;\nwhile(%s)",init,cond);
				}
{cbrace}	{printf("%s\n}",inc);
		bzero(temp,100);
		bzero(init,10);
		bzero(cond,10);
		bzero(inc,10);}
{blankloop}	{printf("while(1)");}
.	ECHO;
%%
int yywrap()
{
return 1;
}
int main()
{
printf("\n\n");
yylex();
printf("\n\n");
return 0;
}
