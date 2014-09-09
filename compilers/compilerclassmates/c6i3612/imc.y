%token VARIABLE
%{
#include<stdio.h>
int yylex(void);
void yyerror(char*);
int i=-1;
int os[10];
int tos=0;
%}
%%
program:
expr '\n' {}
expr:
VARIABLE
|expr '+' expr {
		if(os[tos]>1)
		{
		 printf("t%d = %c + %c\n",++i,$1,$3);

		if(i==-1)
			printf("t%d = %c + %c\n",++i,$1,$3);
		else
			printf("t%d =%c + t%d\n",++i,$1,i);
		}
|expr '-' expr { if(i==-1)
                        printf("t%d = %c - %c\n",++i,$1,$3);
                else
                        printf("t%d =%c - t%d\n",++i,$1,i);
		}
|expr '*' expr {
		 if(i==-1)
                        printf("t%d = %c * %c\n",++i,$1,$3);
                else
                        printf("t%d =%c * t%d\n",++i,$1,i);}
|expr '/' expr {
		 if(i==-1)
                        printf("t%d = %c / %c\n",++i,$1,$3);
                else
                        printf("t%d =%c / t%d\n",++i,$1,i);
			}

%%
void yyerror(char *s) {
fprintf(stderr, "%s\n", s);
}
void main() {
yyparse();
}
