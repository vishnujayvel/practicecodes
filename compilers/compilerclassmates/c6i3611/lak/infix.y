%{
#include<stdio.h>
int yylex(void);
int f;
void yyerror(char*);
%}
%token INTEGER
%%
program : 
expr '\n' { if(f!=1) printf("%d\n", $1); }
|        
;
expr:  
INTEGER             
| expr '+' expr      { $$ = $1 + $3; }
| expr '*' expr      { $$ = $1 * $3; }
| expr '-' expr      { $$ = $1 - $3; }
| expr '/' expr      {if($3==0) {
            f=1;
           yyerror("Divide by zero error");
         } 
          else
           $$ = $1 / $3; }
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
