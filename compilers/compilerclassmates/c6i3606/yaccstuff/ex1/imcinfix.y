%token INTEGER
%left '+' '-'
%left '*' '/'
%{
	#include<stdio.h>
	int yylex(void);
	void yyeror(char*);
%}
%%
program:
program statement '\n'
|
;
statement:
expr { printf("%d\n", $1); }
|
;
expr:
INTEGER
| expr '+' expr { printf("Add"); $$ = $1 + $3; }
| expr '-' expr { printf("Sub"); $$ = $1 - $3; }
| expr '*' expr { printf("Mul"); $$ = $1 * $3; }
| expr '/' expr { if($3==0) { $$=0; printf("div by zero!\n");}else $$=$1/$3; printf("Div"); }
| '(' expr ')' { $$ = $2; }
;
%%
void yyerror(char *s) {
fprintf(stderr, "%s\n", s);
}
void main() {
yyparse();
}
