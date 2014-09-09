%{
#include<stdio.h>
int yylex(void);
void yyerror(char *);
int flag=0;
%}
%token INTEGER
%left '+''-'
%left '*''/'
%left '('')'
%%
program:
program expr '\n' { if(flag!=1)printf("suc %d\n", $2);
        flag=0;
                         }
|
;
expr:
 expr '+' expr { $$ = $1 + $3; printf("Add %d\n",$$);}
| expr '-' expr { $$ = $1 - $3; }

| expr '*' expr { $$ = $1 * $3; }
| expr '/' expr { if($3==0) {
                    printf("div by 0\n");
                        flag=1;
                        }
                else
                        $$ = $1 / $3;
                 }
| '('expr')' { $$=$2; }
| INTEGER {$$=$1;}
;
%%
void yyerror(char *s) {
printf("%s\n", s);
}
int main(void) {
yyparse();
return 0;
}


