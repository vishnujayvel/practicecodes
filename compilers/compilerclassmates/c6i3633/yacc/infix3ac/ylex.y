%{
 #include <stdio.h>

 #include <stdlib.h>
 void gencode(int ,int ,char ,int  );
 void yyerror(char *);
 int yylex(void);
 int t[100];
 int count=0;
%}
%token INTEGER
%left '+' '-'
%left '*' '/'
%right '='

%%
program:   program expr '\n'  {}
          | 
          ;
  
expr:    INTEGER { $$ = $1; } 
        | expr '+' expr { $$ = $1 + $3;  gencode($1,$3,'+',$$);}
	| expr '-' expr { $$ = $1 - $3; gencode($1,$3,'-',$$);}
	| expr '*' expr { $$ = $1 * $3;  gencode($1,$3,'*',$$);}
	| expr '/' expr { $$ = $1 / $3; gencode($1,$3,'/',$$);}
        ;
%%
void gencode(int a,int b,char  opr,int ans)
{
		printf("opr:%c   arg1:%d   arg2:%d  answer:%d \n",opr,a,b,ans);
		

}
void yyerror(char *s)
{
 printf("%s",s);
// return 0;
}
int main(void)
{
 yyparse();
 return 0;
}
