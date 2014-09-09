%token INTEGER VARIABLE
%left '+' '-'
%left '*' '/'
%{
void yyerror(char *);
int yylex(void);
int sym[26];
%}
%%
program:
program expr '\n' { printf("%d\n", $2); }
|
;
statement:
expr {{printf("%d\n", $1); }}
| VARIABLE '=' expr { 
	sym[$1] = $3; }
;
expr:
INTEGER
| VARIABLE { $$ = sym[$1]; }
| expr '+' expr { $$ = $1 + $3; }
| expr '-' expr{ $$ = $1 - $3; }
| expr '*' expr { $$ = $1 * $3; }
| expr '/' expr  { if($3==0)
			printf("err");
		else
			$$ = $1 / $3;
		 }
	
| '(' expr ')' { $$ = $2; }
;
%%
void yyerror(char *s) {
printf("err");
}
int main(void) {
yyparse();
return 0;
}
