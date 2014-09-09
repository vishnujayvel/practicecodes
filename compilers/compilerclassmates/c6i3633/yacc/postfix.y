
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
       | expr  expr '+' {$$ = $1 + $2;}
       | expr  expr '-' {$$ = $1 - $2;}
       | expr  expr '*' {$$ = $1 * $2;}
       | expr  expr '/' {$$ = $1 / $2;}
       | expr  expr '%' {$$ = $1 % $2;}
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


