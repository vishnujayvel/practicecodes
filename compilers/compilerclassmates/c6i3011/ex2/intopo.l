%{
	int stack[10];
	int i=0;

%}

%%
[a-zA-Z] { printf("%c", yytext[0]);}
[\+\-\*\/] { 
	     if(yytext[0]=='+' || yytext[0]=='-') stack[i++]=yytext[0];
	     else if(yytext[0]=='*'|| yytext[0]=='\\' && i==0)
		printf("%c",yytext[0]);
	     else stack[i++]=yytext[0];
	   }
main()
{
	yylex();
	while(yyleng>0)
	{
		printf
}
