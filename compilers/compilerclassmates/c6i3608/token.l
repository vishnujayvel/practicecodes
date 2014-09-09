%{
%}
%%
"#include" { printf("\nPreprocessor : %s",yytext);}
"<stdio.h>"|"<conio.h>" { printf("\nHeader File : %s",yytext);}
"="|"+"|"-"|"<"|">"|"*"|"/"|","|"++"|"--"|";" {
						printf("\nOperator : %c",yytext[0]);
			    		  }
"int"|"char"|"float" {
			  printf("\nDatatype : %s",yytext);
		     }
"printf"|"if"|"else"|"else if" {
						printf("\nKeyword : %s",yytext);
					  
}
[a-zA-Z]* {
		printf("\nId : %s",yytext);
	  }
[0-9]* {
		printf("\nValue : %d",atoi(yytext));
       }
"{" {}
"}" {}
%%
main()
{
yylex();
}
