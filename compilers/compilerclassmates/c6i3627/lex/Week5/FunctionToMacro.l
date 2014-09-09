alpha	[A-Za-z]
digit	[0-9]
spec	[+-=;:/.,]
space	[\t ]
nl	"\n"
spaces	{space}*
num	{digit}+
rest	({alpha}*{digit}*{space}*{spec}*{nl}*)*
type	"int"|"char"|"void"|"short"|"long"|"int *"|"char *"
id	{alpha}({alpha}*{digit}*)*
bracket	"("|")"
brace	"{"|"}"
def	{type}{spaces}{id}
comma	","
arg	({def}*{comma}*{spaces})*
fun	{type}{spaces}{id}{spaces}{bracket}{arg}{bracket}({nl}*{spaces})*{brace}{rest}{brace}
%{
	char temp[50];
	int i;
%}
%%
{fun}	{bzero(temp,50);i=0;
	 printf("#define ");
	 strcpy(temp,yytext);
	 while(temp[i]==' ')
		i++;
	 while(temp[i]!=' ')
		i++;
	 i++;
	 while(temp[i]!=')')
	 {
		printf("%c",temp[i]);
		i++;
	 }
	 printf(") ");
	 while(temp[i]!='{')
		i++;
	 i++;
	 while(i<(strlen(temp)))
	 {
		if(temp[i]==';' || temp[i]=='\n')
			printf(" ");
		else if(temp[i]=='}')
			printf("\n");
		else	printf("%c",temp[i]);
		i++;
	 }
	}
.	ECHO;
%%
int yywrap() {return 1;}
int main() {yylex();return 0;}
