lex file1.l
yacc -d file1.y
cc y.tab.c lex.yy.c
./a.out
vi file1.y
lex file1.l
yacc -d file1.y
vi file1.y
lex file1.l
yacc -d file1.y
vi file1.y
lex file1.l
yacc -d file1.y
vi file1.y
lex file1.l
yacc -d file1.y
vi file1.y
vi for.l
vi file1.l
lex file1.l
yacc -d file1.y
cc y.tab.c lex.yy.c
./a.out
ls
vi while.y
vi while.l

cat for.l
%{
#include<stdio.h>
#include "y.tab.h"
void yyerror(char *);
%}
%%
"for" { return FOR; }
"(" { return OPNPAR; }
")" { return CLOSEPAR; }
"{" { return OBRAC; }
"}" { return CLOSEBRAC; }
";" { return SEMI; }
"=" { return EQ; }
"," { return COMMA; }
"=="|"<="|">="|"<"|">" { return RELOP; }
[a-zA-Z]+ { return ID; }
[0-9]+ { return DIGIT; }
"++" {return INC;}
"--" {return DEC;}
%%
int yywrap(void)
{ return 1; }
cat for.y
%token FOR OPNPAR CLOSEPAR OBRAC CLOSEBRAC SEMI ID DIGIT EQ RELOP INC DEC COMMA
%{
void yyerror(char *);
%}
%%
program:FOR OPNPAR E1 SEMI E2 SEMI E3 CLOSEPAR { printf("syntax correct");
}
|FOR OPNPAR E1 COMMA E1 SEMI E2 COMMA E2 SEMI E3 COMMA E3 CLOSEPAR {printf("SYNTAX CORRECT");}
|;
E1:ID EQ ID
|ID EQ DIGIT
|;
E2:ID RELOP ID
|ID RELOP DIGIT
|;
E3:ID INC
|ID DEC
|;
%%
void yyerror(char *s)
{ printf("error");
}
int main()
{ yyparse();
return;
}
ls
vi for.l
vi for.y
vi for.l
vi for.y
vi while.l
vi while.y
ls
vi ifelse.l
vi ifelse.y
lex ifelse.l
yacc -d ifelse.y
vi ifelse.y
lex ifelse.l
yacc -d ifelse.y
vi ifelse.y
lex ifelse.l
yacc -d ifelse.y
cc y.tab.c lex.yy.c
vi ifelse.y
lex ifelse.l
cc y.tab.c lex.yy.c
lex ifelse.l
yacc -d ifelse.y
cc y.tab.c lex.yy.c
vi ifelse.y
lex ifelse.l
yacc -d ifelse.y
cc y.tab.c lex.yy.c
./a.out
lex ifelse.l
yacc -d ifelse.y
cc y.tab.c lex.yy.c
./a.out
vi ifelse.y
vi ifelse
lex ifelse.l
yacc -d ifelse.y
cc y.tab.c lex.yy.c
./a.out , ifelse
./a.out <ifelse
vi fielse
vi ifelse
lex ifelse.l
yacc -d ifelse.y
cc y.tab.c lex.yy.c
./a.out <ifelse
vi ifelse
lex ifelse.l
yacc -d ifelse.y
cc y.tab.c lex.yy.c
./a.out <ifelse
vi ifelse
lex ifelse.l
cc y.tab.c lex.yy.c
lex ifelse.l
yacc -d ifelse.y
cc y.tab.c lex.yy.c
./a.out <ifelse
vi ifelse.y
wq
lex ifelse.l
cc y.tab.c lex.yy.c
lex ifelse.l
yacc -d ifelse.y
vi ifelse.y
vi ifelse
lex ifelse.l
yacc -d ifelse.y
cc y.tab.c lex.yy.c
./a.out<ifelse
cat ifelse
vi ifelse
lex ifelse.l
yacc -d ifelse.y
cc y.tab.c lex.yy.c
./a.out<ifelse
vi while.l
vi switch.l
cat for.y
%token FOR OPNPAR CLOSEPAR OBRAC CLOSEBRAC SEMI ID DIGIT EQ RELOP INC DEC COMMA
%{
void yyerror(char *);
%}
%%
program:FOR OPNPAR E1 SEMI E2 SEMI E3 CLOSEPAR { printf("syntax correct");
}
|FOR OPNPAR E1 COMMA E1 SEMI E2 COMMA E2 SEMI E3 COMMA E3 CLOSEPAR {printf("SYNTAX CORRECT");}
|;
E1:ID EQ ID
|ID EQ DIGIT
|;
E2:ID RELOP ID
|ID RELOP DIGIT
|;
E3:ID INC
|ID DEC
|;
%%
void yyerror(char *s)
{ printf("error");
}
int main()
{ yyparse();
return;
}
%token FOR OPNPAR CLOSEPAR OBRAC CLOSEBRAC SEMI ID DIGIT EQ RELOP INC DEC COMMA
%{
void yyerror(char *);
%}
%%
program:FOR OPNPAR E1 SEMI E2 SEMI E3 CLOSEPAR { printf("syntax correct");
}
|FOR OPNPAR E1 COMMA E1 SEMI E2 COMMA E2 SEMI E3 COMMA E3 CLOSEPAR {printf("SYNTAX CORRECT");}
|;
E1:ID EQ ID
|ID EQ DIGIT
|;
E2:ID RELOP ID
|ID RELOP DIGIT
|;
E3:ID INC
|ID DEC
|;
%%
void yyerror(char *s)
{ printf("error");
}
int main()
{ yyparse();
return;
}
lex for.l
yacc for.y
cc y.tab.h lex.yy.c -ll
cat for.l
cat for.y
lex for.l
cat for.l
cc lex.yy.c -ll
clear
lex for.l
yacc for.y
cc y.tab.c lex.yy.c
cc y.tab.c lex.yy.c --
cc y.tab.c lex.yy.c -ll
cat for.l
vi for.l
lex for.l
yacc -d for.y
cc y.tab.c lex.yy.c 
./a.out
cat for.y
%token FOR OPNPAR CLOSEPAR OBRAC CLOSEBRAC SEMI ID DIGIT EQ RELOP INC DEC COMMA
%{
void yyerror(char *);
%}
%%
program:FOR OPNPAR E1 SEMI E2 SEMI E3 CLOSEPAR { printf("syntax correct");
}
|FOR OPNPAR E1 COMMA E1 SEMI E2 COMMA E2 SEMI E3 COMMA E3 CLOSEPAR {printf("SYNTAX CORRECT");}
|;
E1:ID EQ ID
|ID EQ DIGIT
|;
E2:ID RELOP ID
|ID RELOP DIGIT
|;
E3:ID INC
|ID DEC
|;
%%
void yyerror(char *s)
{ printf("error");
}
int main()
{ yyparse();
return;
}
wq
cat for.l
cat while.l
%{
#include<stdlib.h>
#include "y.tab.h"
void yyerror(char *);
%}
%%
"for" { return FOR; }
"(" { return OPNPAR; }
")" { return CLOSEPAR; }
"{" { return OBRAC; }
"}" { return CLOSEBRAC; }
";" { return SEMI; }
"=" { return EQ; }
"," { return COMMA; }
"=="|"<="|">="|"<"|">" { return RELOP; }
[a-zA-Z]+ { return ID; }
[0-9]+ { return DIGIT; }
"++" {return INC;}
"--" {return DEC;}
%%
int yywrap(void)
{ return 1; }
[c6i3603@gflinux ~]$ cat while.l
%{
        #include<stdio.h>
        #include "y.tab.h"
        void yyerror(char *);
%}
%%
"while" { return WHILE; }
"(" { return OPNPAR; }
")" { return CLOSEPAR; }
">"|"<"|"<="|">="|"!=" { return RELOP;}
"{" { return OPENBRACE; }
"}" { return CLOSEBRAC; }
"1" { return SPL; }
"=" { return EQ; }
"true"|"false" { return BOOL;}
[a-zA-Z]+ { return ID; }
[0-9]+ { return DIGIT; }
"&&"|"||" { return ADDRESS; }
. yyerror("error");
%%
int yywrap(void)
{ return 1; }
cat while.y
%token WHILE OPNPAR CLOSEPAR RELOP OPENBRACE CLOSEBRAC SPL ID DIGIT ADDRESS BOOL EQ
%{
void yyerror(char *s);
%}
%%
program:WHILE OPNPAR E1 CLOSEPAR { printf("syntax correct");}
|WHILE OPNPAR E1 ADDRESS E1 CLOSEPAR { printf("syntax correct");}
|WHILE OPNPAR SPL CLOSEPAR { printf("syntax correct");}
|WHILE OPNPAR BOOL CLOSEPAR { printf("synatx correct");}
|WHILE OPNPAR ID CLOSEPAR {printf("syntax correct");}
|;
E1:ID RELOP ID
|ID RELOP DIGIT
|ID EQ DIGIT
|ID EQ ID
|;
%%
void yyerror(char *s)
{ printf("error");
}
int main()
{ yyparse();
}
cat while.l
%{
        #include<stdio.h>
        #include "y.tab.h"
        void yyerror(char *);
%}
%%
"while" { return WHILE; }
"(" { return OPNPAR; }
")" { return CLOSEPAR; }
">"|"<"|"<="|">="|"!=" { return RELOP;}
"{" { return OPENBRACE; }
"}" { return CLOSEBRAC; }
"1" { return SPL; }
"=" { return EQ; }
"true"|"false" { return BOOL;}
[a-zA-Z]+ { return ID; }
[0-9]+ { return DIGIT; }
"&&"|"||" { return ADDRESS; }
. yyerror("error");
%%
int yywrap(void)
{ return 1; }
clear
lex while.l
yacc -d while.y
cc y.tab.c lex.yy.c
clear
cat while.l
lex while.l
yacc -d while.y
cc y.tab.c lex.yy.c
vi ifelse.l
vi ifelse.y
ls
cat ifelse.l
%{
#include<stdlib.h>
#include "y.tab.h"
void yyerror(char *);
%}
%%
"if" {return IF; }
"else" { return ELSE; }
"(" { return OPENPAR; }
")" { return CLOSEPAR; }
"{" { return OPNBR; }
"}" { return CLOSEBR; }
">"|"<"|"<="|">="|"=="|"!=" { return RELOP; }
"1" { return SPL; }
"true"|"false" { return BOOL; }
[a-zA-Z]+ { return ID; }
[0-9]+ { return DIGIT; }
"&&"|"||" { return ADDRESS; }
. yyerror("error");
%%
int yywrap(void)
{ return 1; }
cat ifelse.y
%token IF ELSE OPENPAR CLOSEPAR RELOP SPL BOOL ID DIGIT ADDRESS OPNBR CLOSEBR
%{
void error(char *);
%}
%%
program: IF OPENPAR E1 CLOSEPAR OPNBR CLOSEBR ELSE OPNBR CLOSEBR { printf("syntax correct"); }
|IF OPENPAR E1 ADDRESS E1 CLOSEPAR OPNBR CLOSEBR ELSE OPNBR CLOSEBR { printf("sysntax correct"); }
|IF OPENPAR SPL CLOSEPAR OPNBR CLOSEBR ELSE OPNBR CLOSEBR { printf("synatx correct"); }
|IF OPENPAR E1 CLOSEPAR ELSE { printf("synatx correct"); }
|IF OPENPAR BOOL CLOSEPAR ELSE { printf("synatx correct"); }
|;
E1:ID RELOP ID
|ID RELOP DIGIT
|;
%%
void yyerror(char *s)
{ printf("error");
}
int main()
{ yyparse();
return ;
}
ls
lex ifelse.l
yacc -d ifelse.y
cc y.tab.c -ll
cc y.tab.c lex.yy.c -ll

cc y.tab.c -ll
cc y.tab.c lex.yy.c 
./a.out
vi ifelse
lex ifelse.l
yacc -d ifelse.y
cc y.tab.c lex.yy.c 
./a.out< ifelse
vi ifelse
lex ifelse.l
yacc -d ifelse.y
cc y.tab.c lex.yy.c 
./a.out< ifelse
vi ifelse.l
lex ifelse.l
yacc -d ifelse.y
cc y.tab.c -ll
./a.out < ifelse.txt
lex ifelse.l
yacc -d ifelse.y
cc y.tab.c lex.yy.c -ll
./a.out<ifelse.txt
./a.out<ifelse
vi ifelse
lex ifelse.l
yacc -d ifelse.y
cc y.tab.c lex.yy.c -ll
./a.out<ifelse
ls
vi while.l
vi while.y
ls
exit
vi ifelse.l
vi ifelse.y
ls
vi switch.l
vi switch.y
ls
vi ifelse.l
vi ifelse.y
exit
vi switch.l
lex switch.l
vi switch.l
wq
vi for.l
vi for.y
vi file1.y
vi ifelse.l
ls
lex for.l
yacc -d for.y
cc y.tab.c lex.yy.c
./a.out
vi for.y
lex while.l
yacc -d while.y
cc y.tab.c lex.yy.c
./a.out
vi while.y
lex while.l
yacc -d while.y
vi while.y
lex while.l
yacc -d while.y
vi while.y
lex while.l
yacc -d while.y
vi while.y
lex while.l
yacc -d while.y
vi while.y
lex while.l
yacc -d while.y
vi while.y
lex while.l
yacc -d while.y
cc y.tab.c lex.yy.c
./a.out
vi while.y
lex while.l
yacc -d while.y
cc y.tab.c lex.yy.c
vi while.y
lex while.l
cc y.tab.c lex.yy.c
yacc -d while.y
cc y.tab.c lex.yy.c
vi while.y
vi ifelse.l
vi switch.l
vi switch.y
vi switch.l
vi switch.y
lex switch.l
vi switch.l
lex switch.l
vi switch.l
lex switch.l
yacc -d switch.y
cc y.tab.c lex.yy.c
lex switch.l
yacc -d switch.y
cc y.tab.c lex.yy.c
vi for.l
vi while.l
lex switch.l
yacc -d switch.y
cc y.tab.c lex.yy.c
vi while.l
vi switch.l
lex switch.l
yacc -d switch.y
cc y.tab.c lex.yy.c
./a.out
vi switch
lex switch.l
yacc -d switch.y
cc y.tab.c lex.yy.c
./a.out<switch
./a.out
vi switch.l
vi switch.y
lex switch.l
yacc -d switch.y
cc y.tab.c lex.yy.c
./a.out
vi switch.y
vi switch
lex switch.l
yacc -d switch.y
cc y.tab.c lex.yy.c
./a.out<switch
./a.out
vi switch
lex switch.l
yacc -d switch.y
cc y.tab.c lex.yy.c
./a.out<switch
./a.out
vi switch.y
lex switch.l
yacc -d switch.y
vi switch.y
lex switch.l
yacc -d switch.y
vi switch.y
lex switch.l
yacc -d switch.y
vi switch.y
lex switch.l
yacc -d switch.y
vi switch.y
yacc -d switch.y
vi switch.y
lex switch.l
yacc -d switch.y
cc y.tab.c lex.yy.c
./a.out
vi switch.y
lex switch.l
yacc -d switch.y
cc y.tab.c lex.yy.c
./a.out
vi switch1.l
vi switch1.y
vi switch.y
lex switch.l
yacc -d switch.y
vi switch.y
lex switch.l
yacc -d switch.y
vi switch1.y
vi switch
lex switch1.l
yacc -d switch1.y
vi switch.y
vi switch1.y
lex switch1.l
yacc -d switch1.y
cc y.tab.c -ll
./a.out<switch
vi switch
lex switch1.l
yacc -d switch1.y
cc y.tab.c -ll
./a.out<switch
vi switch
lex switch1.l
cc y.tab.c -ll
yacc -d switch1.y
cc y.tab.c -ll
./a.out<switch
vi switch.y
vi switch1.y
lex switch1.l
yacc -d switch1.y
cc y.tab.c -ll
./a.out<switch
cat switch
lex switch1.l
cc y.tab.c -ll
yacc -d switch1.y
cc y.tab.c -ll
./a.out<switch
vi switch
./a.out<switch
vi switch
./a.out<switch
cat switch
vi switch
./a.out<switch
ls
vi synfor.y
ls
vi for.y
vi for.l
ls
cat functomac.l
lsls
ls
vi while.l
vi while.y
vi while.l
vi while.y
vi for.y
vi ifelse.l
vi for.y
vi ifelse.l
vi functomac.l
vi ifelse.l
vi ifelse.y
lex ifelse.l
yacc -d ifelse.l
yacc -d ifelse.y
vi ifelse.y
ls
cd imcg
ls
vi infix.l
vi infix.y
ls
cd ..
ls
ls
cat switch1.y
cat ifelse.l
cat ifelse.y
clear
ls
cat switch1.l
alpha [A-Za-z]
digit [0-9]
%%
[ \t\n]
switch    return SWITCH;
case return CASE;
break return BREAK;
default return DEFAULT;
{digit}+    return NUM;
{alpha}({alpha}|{digit})*    return ID;
"<="    return LE;
">="    return GE;
"=="    return EQ;
"!="    return NE;
"||"    return OR;
"&&"    return AND;
.    return yytext[0];
%%
cleat
clear
cat switch1.y
%{
#include <stdio.h>
#include <stdlib.h>
%}
%token ID NUM SWITCH CASE DEFAULT BREAK LE GE EQ NE OR AND ELSE
%right '='
%left AND OR
%left '<' '>' LE GE EQ NE
%left '+''-'
%left '*''/'
%right UMINUS
%left '!'
%%
S       : ST {printf("syntax correct");
                exit(0);}
         ;
ST     :    SWITCH '(' ID ')' '{' B '}'
         ;
B       :    C
         |    C    D
        ;
C      :    C    C
        |    CASE NUM ':' E ';'
        | BREAK ';'
        ;
D      :    DEFAULT    ':' E ';' BREAK ';'
        ;
E    : ID'='E
    | E'+'E
    | E'-'E
    | E'*'E
    | E'/'E
    | E'<'E
    | E'>'E
    | E LE E
    | E GE E
    | E EQ E
    | E NE E
    | E OR E
    | E AND E
    | ID
    | NUM
    ;
%%
#include "lex.yy.c"
int yyerror()
{         printf("error");
        return -1;
}
main() {         yyparse();
}
ls
cat switch
switch(ch)
{         case 1 ch=1;
                break;
        case 2: ch=2;
                break
        default:ch=0;
                break;
ls
cat switch
lex switch1.l
yacc -d switch1.y
cc y.tab.c -ll
./a.out < switch
cc y.tab.c

./a.out<switch
cat switch
ls
cr imcg
cd imcg
ls
vi infix.y
lex.infix.l
lex infix.l
yacc -d infix.y
cc y.tab.c -ll
cc y.tab.c 
ls
vi show
grep show shoe
grep show show
grep -n show show
clear
man mv
cleAR
clear
dhow
show
ls
mkdir hari
mkdir krish
rmdir krish
ls
cat switch1.y
ls
cat file1.l
cat file1.y
mkdir imcg
cd imcg
vi infix.l
vi infix.y
cd ..
lex switch1.l
yacc -d switch1.y
cc y.tab.c -ll
./a.out < switch
vi switch
cc -ll y.tab.c
cc y.tab.c -ll
./a.out
vi switch
./a.out<swicth
./a.out<switch
vi switch
./a.out<switch
vi switch
./a.out<switch
cd imcg
vi infix.y
lex infix.l
vi infix.y
vi infix.l
lex infix.l
vi infix.l
lex infix.l
yacc -d infix.y
vi infix.y
yacc -d infix.y
cc y.tab.c -ll
vi infix.y
lex infix.l
yacc -d infix.y
cc y.tab.c -ll
vi infix.y
vi infix.l
lex infix.l
yacc -d infix.y
cc y.tab.c -ll
vi infix.y
lex infix.l
yacc -d infix.y
cc y.tab.c -ll
cc y.tab.c -ll -ly
cc y.tab.c lex.yy.c
cc y.tab.c -ll
vi infix.l
lex infix.l
yacc -d infix.y
cc y.tab.c -ll
vi infix.l
lex infix.l
yacc -d infix.y
cc y.tab.c -ll
cd ..
cat infix.l
cat infix.y
cat file1.l
cat file1.y
cd imcg
vi infix.y
lex infix.l
yacc -d infix.y
cc y.tab.c -ll
vi infix.y
lex infix.l
yacc -d infix.y
cc y.tab.c -ll
vi infix.l
lex infix.l
yacc -d infix.y
cc y.tab.c -ll
vi infix.y
lex infix.l
yacc -d infix.y
cc y.tab.c -ll
vi infix.y
ls
cd imcg
ls
vi infix.y
ls
cd imcg
ld
ls
vi infix.l
ls
cd imcg/
ls
lex infix.l
yacc -d infix.y
cc y.tab.c -ll
./a.out
cd ..
ls
cd imcg/
./a.out
cc y.tab.c -ll
cat infix.y
clear
hello
hi how are you
is 
thisworking
?
no
tjis
is not
working 
swdislmd
sndasjkemr;ks
skn
sn
sjkofk
clear
ls
clear
ls
lex infix.l
yacc -d infix.y
cc y.tab.c -ll
./a.out
cat infix.l
ls
%{
#include<stdio.h>
#include "y.tab.h"
extern int yylval;
%}
ALPHA [a-zA-Z]
DIGIT [0-9]
%%
{ALPHA}({ALPHA}|{DIGIT})* return ID;
{DIGIT}+ return NUM;
[\n\t] yyterminate();
. return yytext[0];
%%
int yywrap()
{ return 1; }
clear
cat infix.y
%token ID NUM
%right '='
%left '+' '-'
%left '*' '/'
%left UMINUS
%%
S: ID{push();}'='{push();} E{codegen_assign(); }
;
E:E'+'{push();}T{codegen(); }
|E'-'{push();}T{codegen(); }
|T
;
T:T'*'{push();}F{codegen();}
|T'/'{push();}F{codegen();}
|F
;
F:'('E')'
|'-'{push();}F{codegen_umin();}%prec UMINUS
|ID{push();}
|NUM{push();}
;
%%
#include "lex.yy.c"
#include<ctype.h>
#include<string.h>
char st[100][25];
int top=0,ptr=0;
int init=0;
int tintar[200];
int yyerror()
{ printf("error");
return -1;
}
main() {         printf("enter the expression");
        yyparse();
}
push() {         strcpy(st[++top],yytext);
        ptr++;
        }
codegen() {         printf("t%d=%s",init,st[top-2]);
        printnum(2);
        printf("%s %s",st[top-1],st[top]);
        printnum(0);
        printf("\n");
        top-=2;
        ptr-=2;
        strcpy(st[top],"t");
        tintar[ptr]=init;
        init++;
}
codegen_umin() {         printf("t%d=-%s\n",init,st[top]);
        printnum(0);
        top--;ptr--;
        strcpy(st[top],"t");
        tintar[ptr]=init;
        init++;
}
codegen_assign() {         printf("%s=",st[top-2]);
        printnum(2);
        printf("%s",st[top]);
        printnum(0);
        printf("\n");
        top-=2;ptr-=2;
}
printnum(int n)
{         if(strcmp(st[top-n],"t")==0)
        {                 printf("%d",tintar[ptr-n]);
  clear
ls
