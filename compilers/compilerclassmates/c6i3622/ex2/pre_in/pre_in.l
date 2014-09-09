%{

 int top=-1;char stack[50];
%}
%%

[a-z] { printf("%s",yytext);
       if(top>=0)
  	{
		printf("%c",stack[top]);
		top--;
 	}
      }
[-+\*/] stack[++top]=yytext[0];
\n return 0;
%%

main()
{
 yylex();
 return 0;
}

