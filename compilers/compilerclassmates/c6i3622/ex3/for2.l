%{
 int i;
 void print();
 void form();
 char ini[50],test[50],inc[50],body[50];
%}

%%

for ;
\([^;]* {
	 	for(i=1;i<yyleng;i++)
			ini[i-1]=yytext[i];
 		if(yyleng>1)
		ini[i-1]=';';

 	}
;.*; 	{
		for(i=1;i<yyleng-1;i++)
		  test[i-1]=yytext[i];
	 yyless(yyleng-1);
	}

;[^;\n]*\)	{
		for(i=1;i<yyleng-1;i++)
		  inc[i-1]=yytext[i];
    		if(yyleng>2)
		inc[i-1]=';';
		}

\{(.|\n)*\} {strcpy(body,yytext);
		body[yyleng-1]='\0';
		}
%%

main()
{
  yylex();
  print();
 printf("\n\n");
 form();
}
void print()
{
 printf("%s\n",ini);
printf("%s\n",test);
 printf("%s\n",inc);
 printf("%s\n",body);


}

void form()
{
 printf("%s\n",ini);
 printf("while(");
 if(strlen(test)>0)
  printf("%s",test);
 else
  printf("1");

 printf(")\n");

 printf("%s\n",body);
 printf("%s\n",inc);

 printf("}\n");
}
