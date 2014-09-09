alpha	[A-Za-z]
digit	[0-9]
space	[\t ]
spaces	{space}*
nl	"\n"
num	{digit}+
if	"if"
bracket	"("|")"
brace	"{"|"}"
comp	"=="|"!="|"<"|">"|"<="|">="
id	{alpha}({alpha}*{num}*)*
value	{alpha}|{num}|{id}
and	"&&"
expr	{spaces}{id}{spaces}{comp}{spaces}{value}{spaces}{and}*
match	{if}{spaces}{bracket}{expr}+{bracket}({nl}*{spaces})*{brace}
%{
	int c,i,d;
%}
%%
{match}	{i=0;c=0;
	 while(i<strlen(yytext))
	 {
		if(yytext[i]=='&')
			c++;
		i++;
	 }
	 c=(c/2)+1;
	 d=c;
	 i=0;
	 while(yytext[i]!='(')
		i++;
	 i++;
	 while(c>0)
	 {
	 printf("if ( ");
	 while(yytext[i]!='&' && yytext[i]!=')')
	 {
	 	printf("%c",yytext[i]);
		i++;
	 }
	 printf(")\n{\n");
	 i+=2;
	 c--;
	 }
	}
{brace}	{while(d>0)
	 { printf("}\n");
		d--;
	 }
	}
.	ECHO;
%%
int yywrap(){return 1;}
int main(){yylex();return 0;}
