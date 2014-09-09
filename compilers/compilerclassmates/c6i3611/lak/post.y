%{
#include<stdio.h>
int yylex(void);
void yyerror(char*);
%}
%token INTEGER
%%
program : 
expr '\n' { printf("%d\n", $1); }
|        
;
expr:  
INTEGER             
| expr expr '+'     { $$ = $1 + $2; }
| expr expr '*'     { $$ = $1 * $2; }
| expr expr '-'      { $$ = $1 - $2; }
| expr expr '/'     { $$ = $1 / $2; }
| '(' expr ')'       { $$ = $2; } 
;
%% 
void yyerror(char *s)
{
  fprintf(stderr,"%s\n",s);
}      
void main()
{
 yyparse();
} 
