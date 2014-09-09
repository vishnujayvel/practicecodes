vi macro.l
lex macro.l
cc lex.yy.c -ll
./a.out < macro
vi macro.l
lex macro.l
cc lex.yy.c -ll
./a.out < macro
vi macro.l
lex macro.l
cc lex.yy.c -ll
./a.out < macro
vi macro.l
lex macro.l
cc lex.yy.c -ll
./a.out < macro
vi macro.l
lex macro.l
cc lex.yy.c -ll
./a.out < macro
vi macro.l
lex macro.l
cc lex.yy.c -ll
./a.out < macro
vi macro.l
lex macro.l
cc lex.yy.c -ll
./a.out < macro
./a.out 
vi macro.l
lex macro.l
cc lex.yy.c -ll
./a.out 
vi macro.l
lex macro.l
cc lex.yy.c -ll
./a.out 
./a.out < macro
vi macro.l
lex macro.l
cc lex.yy.c -ll
./a.out < macro
vi macro.l
lex macro.l
cc lex.yy.c -ll
./a.out < macro
./a.out
vi macro.l
./a.out < macro
./a.out
vi macro.l
lex macro.l
cc lex.yy.c -ll
./a.out < macro
vi macro.l
ls
cd token
cp token.l token_make.l
ls
cat token_make.l
%{
#include<string.h>
int d=0,k=0,opt=0,opd=0,id=0;
char data[10][50],key[10][50],operator[10][50],iden[10][50],operand[10][50];
%}
datatypes       int|float|double|struct|void
keywords        if|for|while|switch|const|continue|goto|return|break|case|default|goto|continue|#include
identifiers     [a-zA-Z]+[0-9]?[_]?
%%
{datatypes}     {strcpy(data[d++],yytext);}
{keywords}      {strcpy(key[k++],yytext);}
{operators}     {strcpy(operator[opt++],yytext);}
{identifiers}   {strcpy(iden[id++],yytext);}
{identifiers}(\(\))     {printf("Functions= %s \n",yytext);}
[0-9]+  {strcpy(operand[opd++],yytext);}
.       | \n      ;
%%
int main()
{ int i; yylex();
printf("\nData Types\n");
for(i=0;i<d;i++)
        printf("%s\n",data[i]);
printf("\nKeywords\n");
for(i=0;i<k;i++)
        printf("%s\n",key[i]);
printf("\nOperators\n");
for(i=0;i<opt;i++)
        printf("%s\n",operator[i]);
printf("\nidentifiers\n");
for(i=0;i<id;i++)
        printf("%s\n",iden[i]);
printf("\nOperands\n");
for(i=0;i<opd;i++)
        printf("%s\n",operand[i]);
return 1;
}
ls
cd macro
ls
vi macrotofun.l
ls
vi macrotofunc.l
}lex macrotofunc.l

vi macrotofun.l
}lex macrotofunc.l
lex macrotofunc.l
cc lex.yy.c -ll
./a.out< function
ls
lex macrotofunc.l
cc lex.yy.c -ll
./a.out< func
cd macro
ls
vi macrotofunc.l
ls
vi func
lex macrotofunc.l
cc lex.yy.c -ll
vi macrotofunc.l
cd macro
vi macrotofunc.l
lex macrotofunc.l
cc lex.yy.c -ll
./a.out < func
cat func
ls
cat > while
mkdir token
cd token
vi token.l
lex token.l
vi token.l
lex token.l
vi token.l
lex token.l
cc lex.yy.c -ll
cat < program
cat > program
./a.out < program
vi token.l
lex token.l
vi token.l
lex token.l
cc lex.yy.c -ll
./a.out < program
vi program
./a.out < program
vi token.l
lex token.l
cc lex.yy.c -ll
./a.out < program
vi token.l
./a.out < program
vi program
lex token.l
cc lex.yy.c -ll
./a.out < program
vi program
vi token.l
lex token.l
cc lex.yy.c -ll
./a.out < program
vi token.l
lex token.l
cc lex.yy.c -ll
./a.out < program
vi token.l
lex token.l
cc lex.yy.c -ll
./a.out < program
vi token.l
lex token.l
cc lex.yy.c -ll
./a.out < program
vi token.l
lex token.l
vi token.l
lex token.l
vi token.l
lex token.l
vi token.l
lex token.l
vi token.l
lex token.l
vi token.l
lex token.l
cc lex.yy.c -ll
./a.out < program
vi token.l
lex token.l
cc lex.yy.c -ll
./a.out < program
vi token.l
./a.out < program
vi token.l
vi token
ls
vi program
lex token.l
cc lex.yy.c -ll
./a.out < program
vi token.l
lex token.l
cc lex.yy.c -ll
./a.out < program
vi token.l
lex token.l
cc lex.yy.c -ll
./a.out < program
vi program
./a.out < program
vi nestedif.l
./a.out < program
vi token.l
vi nestedif.l
cat > if
lex nestedif.l
cc lex.yy.c -ll
./a.out < if
vi nestedif.l
lex nestedif.l
vi nestedif.l
lex nestedif.l
cc lex.yy.c -ll
./a.out < if
vi nestedif.l
lex nestedif.l
cc lex.yy.c -ll
./a.out < if
vi if
./a.out < if
vi if
vi nestedif.l
lex nestedif.l
cc lex.yy.c -ll
./a.out < if
vi nestedif.l
lex nestedif.l
cc lex.yy.c -ll
./a.out < if
vi nestedif.l
lex nestedif.l
cc lex.yy.c -ll
./a.out < if
vi nestedif.l
cat program
lex token.l
cc lex.yy.c -ll
./a.out < program
vi token.l
vi nestedif.l
lex nestedif.l
cc lex.yy.c -ll
./a.out < program
./a.out < if
vi nestedif.l
lex nestedif.l
cc lex.yy.c -ll
./a.out < if
vi nestedif.l
lex nestedif.l
cc lex.yy.c -ll
./a.out < if
vi nestedif.l
lex nestedif.l
cc lex.yy.c -ll
./a.out < if
vi nestedif.l
lex nestedif.l
cc lex.yy.c -ll
./a.out < if
vi nestedif.l
lex nestedif.l
vi nestedif.l
lex nestedif.l
cc lex.yy.c -ll
./a.out < if
vi nestedif.l
lex nestedif.l
vi nestedif.l
lex nestedif.l
cc lex.yy.c -ll
./a.out < if
vi nestedif.l
cat if
vi nestedif.l
lex nestedif.l
vi nestedif.l
lex nestedif.l
cc lex.yy.c -ll
./a.out < if
vi nestedif.l
lex nestedif.l
cc lex.yy.c -ll
./a.out < if
cat if
ls
cd ..
ls
cd macro\
cd macro
ls
vi macro.l
vi macrotofunc.l
lex macrotofunc.l
cc lex.yy.c -ll
vi macrotofunc.l
vi token.l
cd ..
cd token
vi token.l
cd ..
cd macro
vi macrotofunc.l
lex macrotofunc.l
cc lex.yy.c
cc lex.yy.c -ll
cat func
cat > func
./a.out < func
vi macrotofunc.l
lex macrotofunc.l
cc lex.yy.c -ll
./a.out < func
vi macrotofunc.l
lex macrotofunc.l
vi macrotofunc.l
lex macrotofunc.l
cc lex.yy.c -ll
./a.out < func
vi macrotofunc.l
lex macrotofunc.l
cc lex.yy.c -ll
./a.out < func
cat func
cd ../token
vi token.l
cd ../macro
ls
vi macro.l
ls
cat macro
vi macro.l
ls
vi macrotofunc.l
ls
vi macrotofunc.l
ls
mkdir yacc1
cd yacc1
ls
vi testlex.l
lex testlex.l
cc lex.yy.c -ll
vi testlex.l
lex testlex.l
cc lex.yy.c -ll
vi testlex.l
lex testlex.l
cc lex.yy.c -ll
./a.out
vi testlex.l
vi testyacc.y
lex testlex.l
yacc testyacc.y
cc lex.yy.c y.tab.c
ls
vi testlex.l
lex testlex.l
yacc testyacc.y
cc lex.yy.c y.tab.c
vi testlex.l
lex testlex.l
yacc testyacc.y
cc lex.yy.c y.tab.c
cc lex.yy.c y.tab.c -ll
vi testyacc.y
lex testlex.l
yacc testyacc.y
cc lex.yy.c y.tab.c -ll
vi testyacc.y
lex testlex.l
yacc testyacc.y
cc lex.yy.c y.tab.c -ll
vi testyacc.y
lex testlex.l
yacc testyacc.y
cc lex.yy.c y.tab.c -ll
vi testyacc.y
lex testlex.l
yacc testyacc.y
cc lex.yy.c y.tab.c -ll
vi testlex.l
lex testlex.l
yacc testyacc.y
cc lex.yy.c y.tab.c -ll
vi testyacc.y
lex testlex.l
cc lex.yy.c y.tab.c -ll
vi testyacc.y
lex testlex.l
yacc testyacc.y

vi testyacc.y
lex testlex.l
yacc testyacc.y
cc lex.yy.c y.tab.c -ll
./a.out
vi testyacc.y
lex testlex.l
vi testlex.l
vi testyacc.y
lex testlex.l
yacc testyacc.y
cc lex.yy.c y.tab.c -ll
./a.out
vi testlex.l
vi testyacc.y
vi testlex.l
vi testyacc.y
lex testlex.l
yacc testyacc.y
cc lex.yy.c y.tab.c -ll
./a.out
vi testyacc.y
vi testlex.l
lex testlex.l
yacc testyacc.y
cc lex.yy.c y.tab.c -ll
./a.out
vi testyacc.y
vi testlex.l
vi testyacc.y
lex testlex.l
yacc testyacc.y
cc lex.yy.c y.tab.c -ll
vi testlex.l
lex testlex.l
yacc testyacc.y
cc lex.yy.c y.tab.c -ll
vi testlex.l
lex testlex.l
yacc testyacc.y
cc lex.yy.c y.tab.c -ll
vi testyacc.y
vi testlex.l
yacc testyacc.y
vi testyacc.y
lex testlex.l
yacc testyacc.y
vi testyacc.y
lex testlex.l
yacc testyacc.y
vi testyacc.y
lex testlex.l
yacc testyacc.y
cc lex.yy.c y.tab.c -ll
lex testlex.l
yacc testyacc.y -d
yacc -d testyacc.y
cc lex.yy.c y.tab.c -ll
vi testyacc.y
lex testlex.l
yacc -d testyacc.y
cc lex.yy.c y.tab.c -ll
./a.out
vi testyacc.y
lex testlex.l
yacc -d testyacc.y
cc lex.yy.c y.tab.c -ll
./a.out
vi testyacc.y
lex testlex.l
yacc -d testyacc.y
cc lex.yy.c y.tab.c -ll
./a.out
vi testyacc.y
vi testlex.l
vi testyacc.y
lex testlex.l
yacc -d testyacc.y
cc lex.yy.c y.tab.c
vi testlex.l
lex testlex.l
yacc -d testyacc.y
cc lex.yy.c y.tab.c -ll
./a.out
vi testlex.l
lex testlex.l
yacc -d testyacc.y
cc lex.yy.c y.tab.c -ll
./a.out
vi testlex.l
vi testyacc.y
lex testlex.l
yacc -d testyacc.y
cc lex.yy.c y.tab.c -ll
./a.out
vi testyacc.y
lex testlex.l
yacc -d testyacc.y
cc lex.yy.c y.tab.c -ll
./a.out
vi testyacc.y
lex testlex.l
yacc -d testyacc.y
cc lex.yy.c y.tab.c -ll
./a.out
vi testyacc.y
yacc -d testyacc.y
lex testlex.l
cc lex.yy.c y.tab.c -ll
./a.out
vi testyacc.y
vi testlex.l
yacc -d testyacc.y
lex testlex.l
cc lex.yy.c y.tab.c -ll
./a.out
vi testlex.l
lex testlex.l
yacc -d testyacc.y
cc lex.yy.c y.tab.c -ll
./a.out
cp testyacc.y yacc1.y
vi yacc1.y
lex testlex.l
yacc -d yacc1.y
cc lex.yy.c y.tab.c -ll
./a.out
vi testyacc.y
lex testlex.l
yacc -d testyacc.y
cc lex.yy.c y.tab.c -ll
./a.out
vi testyacc.y
lex testlex.l
yacc -d testyacc.y
cc lex.yy.c y.tab.c -ll
./a.out
vi testyacc.y
lex testlex.l
yacc -d testyacc.y
cc lex.yy.c y.tab.c -ll
./a.out
lex testlex.l
yacc -d yacc1.y
cc lex.yy.c y.tab.c -ll
./a.out
lex testlex.l
yacc -d testyacc.y
cc lex.yy.c y.tab.c -ll
./a.out
vi testyacc.y
ls
cd yacc1
ls
vi testlex.l
ls
vi testyacc.y
ls
vi testyacc.l
ls
lex yacc testlex.l

lex testlex.l
yacc -d testyacc.y
vi testyacc.y
ls
cd yacc1
ls
cd yacc2
ls
cd yacc1
ls
vi yacc1.y
cd yacc1
cd while
vi while.l
vi while.y
ls
cd yacc1
ls
vi testyacc.y
ls
vi testlex.l
ls
%%
[0-9]+  {
                yylval=atoi(yytext);
                return INTEGER;
        }
[-+*/()\n]      {
                return *yytext;
        }
[ \t] ;
.       ;
%%
int yywrap(void)
{ return 0; }
vi testyacc.l
ls
vi testyacc.y
vi testlex.y
vi testlex.l
vi testyacc.y
cd ..
ls
cd token

lex token.l
cc lex.yy.c -ll
./a.out < program
vi token.l
cd ..
ls
cd yacc1
ls
vi testyacc.l
vi testyacc.y
vi testlex.l
vi testyacc.y
vi testlex.l
ls
vi yacc1.y
ls
mkdir while
cd while
ls
lex while.l
yacc -d while.y
cc lex.yy.c y.tab.c -ll
./a.out
ls
cd ..
mkdir for
cd for
ls
%token INTEGER
%left '+' '-'
%left '*' '/'
%{
#include<stdio.h>
void yyerror(char *);
int yylex(void);
int sym[26];
%}
%%
program:
expr '\n' { printf("%d\n",$1); }
|
;
expr:
INTEGER
| expr  expr '+' { $$ = $1 + $2;}
| expr  expr '-' { $$ = $1 - $2; }
| expr expr '*' { $$ = $1 * $2; }
| expr expr '/' { $$ = $1 / $2; }
;
%%
void yyerror(char *s) {
fprintf(stderr, "%s\n", s);
}
int main(void) {
yyparse();
return 0;
}
ls
cd yacc1
mkdir for
mkdir forfile
cd forfile
vi forpar.y
vi forpar.l
vi forfile
lex forpar.l
yacc forpar.y
vi forpar.y
lex forpar.l
yacc forpar.y
vi forpar.y
cd ../while
ls
cat while.y
cd ../forfile
ls
vi forpar.y
lex forpar.l
yacc forpar.y
cc lex.yy.c y.tab.c -ll
vi forpar.y
vi forpar.l
vi forpar.y
yacc forpar.y
cc lex.yy.c y.tab.c -ll
vi forpar.y
lex forpar.l
yacc forpar.y -d
yacc -d forpar.y
cc lex.yy.c y.tab.c -ll
./a.out < forfile
cd ..
ls
mkdir ifcond
cd ifcond
vi ifpar.l
cd ../while
cat while.y
cat while.l
cd ../ifcond
vi ifpar.l
cat ../while/while.y
cat ../while/while.l
vi ifpar.l
cat ../while/while.l
vi ifpar.l
cat ../while/while.l

lex ifpar.l
vi ifpar.y
cat ../while/while.y
vi ifpar.y
vi ifpar.l
cat ../while/while.l
vi ifpar.l
vi ifpar.y
cat ../while/while.y
vi ifpar.y
lex ifpar.l
yacc ifpar.y
vi ifpar.y
cat ../while/while.y
vi ifpar.y
cat ../while/while.y
cat ../while/while.yfprintf(stderr,"%s\n",s);
vi ifpar.y
yacc ifpar.y
lex ifpar.l
cc lex.yy.c y.tab.c -ll
yacc -d ifpar.y
cc lex.yy.c y.tab.c -ll
vi ifpar.y
cat ../while/while.y
vi ifpar.y
cat ../while/while.y
cc lex.yy.c y.tab.c -ll
vi ifpar.y
vi ifpar.l
lex ifpar.l
yacc -d ifpar.y
cc lex.yy.c y.tab.c -ll
vi ifpar.l
vi ifpar.y
lex ifpar.l
yacc -d ifpar.y
cc lex.yy.c y.tab.c -ll
cat > if
./a.out < if
cat > if
./a.out < if
vi ifpar.y
lex ifpar.l
yacc -d ifpar.y
cc lex.yy.c y.tab.c -ll
./a.out < if
vi ifpar.y
lex ifpar.l
yacc -d ifpar.y
cc lex.yy.c y.tab.c -ll
./a.out <if
vi if
./a.out <if
vi ifpar.l
vi ifpar.y
lex ifpar.l
yacc -d ifpar.y
cc lex.yy.c y.tab.c -ll
./a.out <if
vi if
if
vi ifpar.y
lex ifpar.l
yacc -d ifpar.y
cc lex.yy.c y.tab.c -ll
./a.out <if
vi ifpar.y
vi ifpar.l
vi ifpar.y
lex ifpar.l
yacc -d ifpar.y
cc lex.yy.c y.tab.c -ll
./a.out <if
vi if
lex ifpar.l
yacc -d ifpar.y
cc lex.yy.c y.tab.c -ll
./a.out <if
vi ifpar.l
cd ..
ls
cd forfile
ls
vi ../if/ ifpar.l
ls
cd yacc1
ls
cd ifcond
ls
vi ifpar.l
lex ifpar.l
yacc -d ifpar.y
cc lex.yy.c y.tab.c -ll
.a/.out
./a.out
lex ifpar.l
yacc -d ifpar.y
cc lex.yy.c y.tab.c -ll
ls
cd yacc1
ls
cd forfile
ls
lex forpar.l
yacc -d forpar.y
cc lex.yy.c y.tab.c -ll
./a.out
cd ../
cd if
cd ifcond
ls
vi ifpar.y
vi ifpar.l
lex if.l
lex ifpar.l
yacc -d ifpar.y
cc lex.yy.c y.tab.c -ll
./a.out < if
vi ifpar.y
lex ifpar.l
cc lex.yy.c y.tab.c -ll
yacc ifpar.y
cc lex.yy.c y.tab.c -ll
vi ifpar.l
lex ifpar.l
yacc -d ifpar.y
cc lex.yy.c y.tab.c -ll
./a.out < if
vi ifpar.l
vi ifpar.y
lex ifpar.l
yacc -d ifpar.y
cc lex.yy.c y.tab.c -ll
./a.out < if
vi if
./a.out < if
vi ifpar.y
lex ifpar.l
yacc -d ifpar.y
cc lex.yy.c y.tab.c -ll
./a.out < if
ls
vi forb
ls
cd yacc1
ls
cd for
ls
cd ..
cd forfile
ls
vi forpar.l
vi forpar.y
cd ..
ls
cd ..
ls
ls
cd yacc1
ls
cd while
ls
cat while.y
ls
cat while.l
cat while.y
cat while.l
cd..
cd ..
mkdir proj
cd proj
ls
ls -qa
ls -a
vi ifelse.l
vi ifelse.y
vi switch.l
vi switch.y
ls
cd yacc1
ls
cd imc
ls
vi imc.l
ls
vi imc.y
ls
cd yacc1
ls
cd imc
ls
cd yacc1
ls
cd imc
ls
vi imc.l
ls
cd yacc1/
ls
cd imc
ls
vi imc.l
wq
cat imc.l
%{
#include<stdlib.h>
void yyerror(char*);
int yylval;
#include"y.tab.h"
%}
%%
[a-z]+  {
                yylval=*yytext;
                return VARIABLE;
        }
[0-9]+  {
                yylval=atoi(yytext);
                return INTEGER;
        }
"-"|"+"|"*"|"/" {
                        yylval=*yytext;
                        return OPERATOR;
                }
\n              return *yytext;
.       {
                return *yytext;
        }
cat imc.y
%{
int yylex(void);
void yyerror(char *);
struct exp{
 char op1,op2,oper;
 int prec,pos;
}e[10];
int c=0;
#include<stdio.h>
%}
%token VARIABLE
%token INTEGER
%token OPERATOR
%%
program:
expr '\n' {printf("Verified");}
expr:
term OPERATOR expr      {e[c].op1=$1;e[c].op2=$3;e[c++].oper=$2;}
|term
;
term:
VARIABLE
|INTEGER
;
%%
void yyerror(char *s) {
fprintf(stderr, "%s\n", s);
}
int main()
{ int i=0,prec=0,j,a[10]; yyparse();
for(i=0;i<c;i++)
{         if(e[i].oper=='/'||e[i].oper=='*');                 e[i].prec=1;         else
                e[i].prec=0;
        e[i].pos=i;
printf(" %c:%c:%c ",e[i].op1,e[i].oper,e[i].op2);
}
printf("\n");
for(i=0;i<c;i++)
{ for(j=i;j<c;j++){
        if(e[i].prec<e[j].prec);         {                 struct exp temp=e[i];                 e[i]=e[j];                 e[j]=temp;         };  }
}
for(i=0;i<c;i++){
        printf("##%d-%d##",e[i].pos,i);
        if(i==0);         printf(" t%d=%c%c%c \n",i,e[i].op1,e[i].oper,e[i].op2);
        else{
        if(e[i].pos<i);         printf(" t%d=t%d%c%c \n",i,i-1,e[i].oper,e[i].op2);
        else
        printf(" t%d=%c%ct%d \n",i,e[i].op1,e[i].oper,i-1);
        }
}
exit
