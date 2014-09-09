%{
        int count=0;
	void print();
	void insert();
%}
%%

[(\/\*)(a-z)*(\*\/)]+ { yymore();  }
[\n] {yyless(yyleng);
	 print();}
[^\/\*a-z*\*\/] { }
%%
void print()
{
//	yyout=fopen("output.txt","w");
//	fwrite(yytext ,yyleng,1,yyout);
	insert();
	printf("%s",yytext);
//	fclose(yyout);
}
void insert()
{
  yyout=fopen("output.txt","w");
        fwrite(yytext ,yyleng,1,yyout);
 fclose(yyout);

}
int yywrap()
{
	return 1;
}
int main()
{
        yyin;
	 yylex();
   //      printf("No of comments= %d",count);
	return 0;
}

