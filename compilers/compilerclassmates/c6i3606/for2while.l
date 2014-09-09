%{
	int form=0;
	int ini=0;
	int con=0;
	int line=0;
	char incr[10];
	int incre=0;
	int i;
	char state[30]="while(";
	int j=6;
	char cond[10];
%}
%%
for['('];;[')'] {printf("%s1)",state);}
for['('] {form=1; line=1;}
([a-zA-Z])*=([0-9])*; {
	if(form)
	{
		ini=1;
		printf("%s", yytext);
	}
	else
	{
		printf("%s", yytext);
	}
}
([a-zA-Z])+['<''<=''>''>=''<>']([a-zA-Z0-9])+ {
	if(form)
	{
		con=1;
		for(j=6,i=0;i<yyleng;i++,j++)
		{
			state[j]=yytext[i];
		}
		state[j]=')';
		printf("\n%s", state);
	}
	else { printf("%s", yytext); }
}
[;] { if(line) {}
	else {printf("%c",yytext[0]);}
}
([a-zA-Z])+(['<''<=''>''>=''!=''=''+''-'a-zA-Z0-9]) {
if(form)
{
	for(i=0;i<yyleng-1;i++)
	{
		incr[i]=yytext[i];
	}
	incr[yyleng-1]=';';
	line=0;
	form=0;
	incre=1;
}
}
['}'] {
	ECHO;
//	if(incre) {printf("\n%s\n}",incr);}
//	else{printf("%c",yytext[0]);}
	}
%%
main()
{
	yylex();
}
