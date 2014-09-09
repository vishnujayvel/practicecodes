
%%
[\/\*[a-z]*\*\/]? {	yymore();
//		printf("%s",yytext);
//		printf("%d",yyleng);
				
		}
[\n] {	yyless(yyleng);
	//yymore();
	printf("\n%s",yytext);
	printf("%d",yyleng);
	yyout=fopen("output.txt","a");
	fwrite(yytext,yyleng,1,yyout);
	fclose(yyout);
		}
[^\/\*.*\*\/] { }

%%
int main()
{
	yyin;
	yylex();
}


