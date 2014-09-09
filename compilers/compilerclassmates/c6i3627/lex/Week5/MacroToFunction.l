alpha	[A-Za-z]
digit	[0-9]
spec	[+-=\*><?:;()]
nl	"\n"
id	{alpha}({alpha}*{digit}*)*
datat	"int"|"char"
bracket	"("|")"
hash	"#"
define	"define"
space	[\t ]
spaces	{space}*
dec	{datat}{spaces}*{id}
comma	","
rest	({alpha}*{digit}*{spec}*{spaces})*
argfun	{id}{spaces}{bracket}({spaces}*{dec}*{comma}*)*{bracket}
macro	{hash}{spaces}{define}{spaces}{argfun}{rest}{nl}
%{
char temp[50];
int i;
%}
%%
{macro}	{bzero(temp,50);
	 i=0;
	strcpy(temp,yytext);
	while(temp[i]!='#')
		i++;
	i++;
	while(temp[i]!='d')
		i++;
	while(temp[i]!=' ')
		i++;
	while(temp[i]==' ')
		i++;
	printf("void ");
	while(temp[i]!=')')
	{
		printf("%c",temp[i]);
		i++;
	}
	printf(")\n{\n");
	i++;
	while(temp[i]==' ')
		i++;
	while(i<(strlen(temp)-1))
	{
		if(temp[i]==' ')
		 printf(";\n");
		else printf("%c",temp[i]);
		i++;
	}
	printf(";\n}\n");
	}
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
