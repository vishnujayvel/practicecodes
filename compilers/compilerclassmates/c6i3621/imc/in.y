%{
#include<stdio.h>
int yylex(void);
void yyerror(char *);
int flag=0,i=0,j=0,k,n=0,l,m;
char arr[100][1];
char res[100][100];
char op[100];
%}
%token INTEGER
%left '+''-'
%left '*''/'
%left '('')'
%%
prg:prg expr '\n' { printf("correct");printf("%c,\n%c,%c",arr[0][0],op[0],arr[1][0]); 
			l=0;m=0;		
			for(k=0;k<j-1;k++)
			{	
				if(k==0)
				{
				printf("\nres[0]=%c",arr[l++][0]);
				printf("\n op=%c",op[k]);	
				printf("%c",arr[l++][0]);
				}
				else
				{
			printf("\nres[%d]=res[%d]%c%c",k,k--,op[k],arr[l++][0]);
				}

			}}
		   
|
;
mul:expr '*' expr {  if(i==0) { printf("%c",$1); arr[i++][0]=$1; op[j++]='*'; arr[i++][0]=$3;  } else {   } }
;

expr:expr '+' expr {  if(i==0) { arr[i++][0]=$1; op[j++]='+'; arr[i++][0]=$3;}  }
| expr '-' expr {  if(i==0) { arr[i++][0]=$1; op[j++]='-'; arr[i++][0]=$3;}  }
//| expr '*' expr { $$ = $1 * $3; }
| expr '/' expr { if($3==0) {
                        printf("div by 0\n");
                        flag=1;
                        }
                else
                        if(i==0) { arr[i++][0]=$1; op[j++]='/'; arr[i++][0]=$3;}
                 }
|mul '+' expr {arr[i++][0]=$3; op[j++]='+'; }
; 
|expr '+' mul {arr[i++][0]=$1; op[j++]='+'; } 
;
//| '('expr')' { $$=$2; }
| INTEGER {$$=$1;}
|mul
;
%%
void yyerror(char *s) {
printf("%s\n", s);
}
int main(void) {
yyparse();
printf("%d",arr[0][0]);
return 0;
}

