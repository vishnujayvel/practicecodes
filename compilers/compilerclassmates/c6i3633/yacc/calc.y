
%{
  #include<stdio.h>
  int yylex(void);
  void yyerror(char *);
%}
%token INTEGER

%%

program:  
       program expr '\n'   {printf("%d\n",$2);}
       |
       ;

expr:
       INTEGER      { $$ = $1; }
       | expr '+' expr  {$$ = $1 + $3;}
       | expr '-' expr  {$$ = $1 - $3;}
       | expr '*' expr  {$$ = $1 * $3;}
       | expr '/' expr  {$$ = $1 / $3;}
	;
%%

void yyerror(char *s)
{
	printf("%s",s);
	return 0;
}
int main(void)
{
 yyparse();
 return 0;
}


