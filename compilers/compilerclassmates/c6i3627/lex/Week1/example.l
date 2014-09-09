%{

%}
letter [a-zA-Z]
digit [0-9]
space [ \n\t]
%%
{letter} {strcat(string,yytext[0]);}
{digit} {strcat(strind,yytext[0]);}
space {if(string[2]=='k') printf("%s",string);
	memset(string,30,0);
	}
