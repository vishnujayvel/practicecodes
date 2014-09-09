alpha [a-zA-Z]
chr "_"|"@"|"+"|"-"|"("|")"
num [0-9]
sp " "|"\t"|"\n"
nl \n

%{
	char list[10][100];
	int i=0,count=0;
	int col1;
	int col2;
%}
%%
#define{sp}({alpha}|{num}|{chr})*{sp}({num}|{alpha}|{chr}|{sp})*{nl} {while(yytext[i]!=' ')i++;
						  printf("void ");
						  i++;
						while(yytext[i]!=' ')
						{
						printf("%c",yytext[i]);
						i++;}
						printf("{ \n");
						while(yytext[i]!='\0') 
						{printf("%c",yytext[i]);
						i++;
						if(yytext[i-1]=='2'||yytext[i-2]==3)
						{
							count++;
							printf(";");
						}
						}
						
						printf(";\n}");
					}
. ECHO;	
%%

int yywrap()
{
	return 1;
}
main()
{
	yylex();
}

