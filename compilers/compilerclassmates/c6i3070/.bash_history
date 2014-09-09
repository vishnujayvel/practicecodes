ls
vi evalpost.l
vi evalpost.y
ls
cd yaccprograms
ls
vi evalpost.l
ls
vi evalpost.y
ls
cd yaccprograms
ls
vi evalpost.l
vi evalpost.y
lex evalpost.l
yacc -d evalpost.y
cc y.tab.h lex.yy.c -ll
./a.out
ls
lex evalpost.l
yacc -d evalpostfix.y
cc y.tab.h lex.yy.c -ll
vi evalpost.l
ls
vi evalpostfix.y
ls
cd yaccprograms
ls
lex evalpost.l
yacc -d avalpost.y
yacc -d evalpost.y
cc y.tab.c lex.yy.c -ll
./a.out
lex evalpost.l
yacc -d evalpostfix.y
cc y.tab.c lex.yy.c -ll
lex evalpost.l
yacc -d evalpost.y
cc y.tab.c lex.yy.c -ll
./a.out
ls
mkdir yaccprograms
cd yaccprograms
cd ..
mkdir lexprograms
cp conversion1.l lexprograms/conversion1.l
cp conversion1.txt lexprograms/conversion1.txt
cp conversion2.txt lexprograms/conversion2.txt
cp conversion2.l lexprograms/conversion2.l
cp countk.l lexprograms/countk.l
cp k.txt lexprograms/k.txt
cp mixed.l lexprograms/mixed.l
cp mixed.txt lexprograms/mixed.txt
cp toggle.l lexprograms/toggle.l
cp vowels.l lexprograms/vowels.l
cp vowels.txt lexprograms/vowels.txt
ls
mv ex3 lexprograms/ex3
mv ex4 lexprograms/ex4
mv ex5 lexprograms/ex5
mv ex6 lexprograms/ex6
ls
rm conversion1.l
rm conversion1.txt
rm conversion2.txt
rm conversion2.l
rm countk.l
rm k.txt
rm mixed.l
rm mixed.txt
rm toggle.l
rm vowels.l
rm vowels.txt
ls
rm lex.yy.c
ls
rm a.out
ls
cd lexprograms
ls
cd ..
cd yaccprograms
vi evalinfix.l
vi evalinfix.y
ls
lex evalinfix.l
yacc evalinfix.y
vi evalinfix.y
lex evalinfix.l
yacc evalinfix.y
cc yy.tab.c lex.yy.c -ll
vi evalinfix.l
cc yy.tab.c lex.yy.c -ll
yacc -d evalinfix.y
ls
lex evalinfix.l
yacc evalinfix.y
cc y.tab.c lex.yy.c -ll
./a.out
lex evalinfix.l
cc y.tab.c lex.yy.c -ll
lex evalinfix.l
yacc evalinfix.y
cc y.tab.c lex.yy.c -ll
./a.out
lex evalinfix.l
yacc evalinfix.y
cc y.tab.c lex.yy.c -ll
./a.out
vi evalpost.l
vi evalpost.y
lex evalpost.l
yacc evalpost.y
vi evalpost.y
lex evalpost.l
yacc evalpost.y
ls
cc y.tab.c -ll -ly
vi evalpost.y
lex evalpost.l
yacc evalpost.y
cc y.tab.c -ll -ly
cc y.tab.c -ll
gcc y.tab.c -ll -ly
vi evalpost.y
lex evalpost.l
yacc evalpost.y
gcc y.tab.c -ll -ly
gcc y.tab.c -ll
./a.out
vi evalpost.y
lex evalpost.l
yacc evalpost.y
ls
cc y.tab.c lex.yy.c -ll
vi evalpost.l
lex evalpost.l
yacc evalpost.y
ls
yacc -d evalpost.y
ls
lex evalpost.l
yacc evalpost.y
cc y.tab.c lex.yy.c -ll
./a.out
vi evalpost.l
lex evalpost.l
yacc evalpost.y
cc y.tab.c lex.yy.c -ll
./a.out
vi evalpost.l
yacc -d evalpost.y
lex evalpost.l
yacc evalpost.y
cc y.tab.c lex.yy.c -ll
./a.out
vi evalpost.l
ls
vi evalpostfix.y
yacc evalpostfix.y
gcc y.tab.c -ll
./a.out
cat evalpostfix.y
./a.out
ls
lex evalpost.l
yacc -d evalpost.y
cc y.tab.c lex.yy.c -ll
./a.out
vi evalpost.l
vi evalpost.y
./a.out
vi evalinfix.y
vi evalpost.y
vi evalpost.l
vi evalpost.y
vi evalpost.l
vi evalpost.y
ls
cd yaccprograms
ls
vi syntaxwhile.l
vi syntaxwhile.y
lex syntaxwhile.l
yacc -d syntaxwhile.y
cc y.tab.c lex.yy.c -ll
lex syntaxwhile.l
yacc -d syntaxwhile.y
cc y.tab.c lex.yy.c -ll
ls
cd yaccprograms
ls
vi syntaxwhile.y
ls
cd yaccprograms
cd ex2
ls
cat syntaxwhile.y
vi syntaxwhile.y
vi syntaxwhile.l
ls
cd yaccprograms
ls
mkdir ex1\
mkdir ex1
mv evalinfix.l ex1/evalinfix.l
mv evalinfix.y ex1/evalinfix.y
mv evalpostfix.l ex1/evalpost.l
mv evalpostfix.y ex1/evalpostfix.y
mv evalpost.l ex1/evalpost.l
mv evalpost.y ex1/evalpost.y
ls
rm lex.yy.c
rm y.tab.c
rm y.tab.h
rm y.tab.h.gch
ls
cd ex1
ls
cd ..
mkdir ex2
 vi syntaxwhile.l
 vi syntaxwhile.y
ls
lex syntaxwhile.l
yacc -d syntaxwhile.y
vi syntaxwhile.y
lex syntaxwhile.l
yacc -d syntaxwhile.y
vi syntaxwhile.y
lex syntaxwhile.l
yacc -d syntaxwhile.y
cc lex.yy.c y.tab.c -ll
vi syntaxwhile.l
ls
cd ..
ls
cd yaccprograms
ls
cd ex1
lex syntaxwhile.l
lex syntaxwhile.lcd ..
cd ..
ls
lex syntaxwhile.l
yacc -d syntaxwhile.y
cc lex.yy.c y.tab.c -ll
cc y.tab.c
cc yy.tab.c
cc y.tab.c
vi syntaxwhile.y
lex syntaxwhile.l
yacc -d syntaxwhile.y
cc lex.yy.c y.tab.c -ll
cc y.tab.c
cc y.tab.c -ll
ls
vi syntaxwhile.l
ls
vi syntaxwhile.y
lex syntaxwhile.l
yacc -d syntaxwhile.y
ls
cc y.tab.c
vi syntaxwhile.y
lex syntaxwhile.l
yacc -d syntaxwhile.y
cc y.tab.c
./a.out
vi while.txt
./a.out<while.txt
vi while.txt
lex syntaxwhile.l
yacc -d syntaxwhile.y
cc y.tab.c
./a.out<while.txt
vi syntaxwhile.y
lex syntaxwhile.l
yacc -d syntaxwhile.y
cc y.tab.c
./a.out<while.txt
vi while.txt
lex syntaxwhile.l
yacc -d syntaxwhile.y
cc y.tab.c
./a.out<while.txt
vi while.txt
lex syntaxwhile.l
yacc -d syntaxwhile.y
cc y.tab.c
./a.out<while.txt
vi while.txt
lex syntaxwhile.l
yacc -d syntaxwhile.y
cc y.tab.c
./a.out<while.txt
vi while.txt
lex syntaxwhile.l
yacc -d syntaxwhile.y
cc y.tab.c
./a.out<while.txt
vi while.txt
cc y.tab.c
./a.out<while.txt
vi while.txt
ls
mv ex2/syntaxwhile.l
mv syntaxwhile.l ex2/syntaxwhile.l
mv syntaxwhile.y ex2/syntaxwhile.y
ls
mv while.txt ex2/while.txt
rm lex.yy.c
rm y.tab.c
rm y.tab.h\
rm y.tab.h
ls
cd ex2
ls
vi syntaxfor.l
vi syntaxfor.y
ls
lex syntaxwhile.l
yacc -d syntaxwhile.y
cc y.tab.c
./a.out<while.txt
cat while.txt
vi while.txt
./a.out<while.txt
lex syntaxwhile.l
yacc -d syntaxwhile.y
cc y.tab.c
./a.out<while.txt
vi while.txt
cc y.tab.c
./a.out<while.txt
vi while.txt
cc y.tab.c
./a.out<while.txt
vi syntaxfor.y
lex syntaxfor.l
yacc syntaxfor.y
vi syntaxfor.y
lex syntaxfor.l
yacc -d syntaxfor.y
cc y.tab.c
cc y.tab.c -ll -ly
vi syntaxfor.y
lex syntaxfor.l
yacc -d syntaxfor.y
cc y.tab.c
vi for.txt
rm for.txt
./a.out
cc y.tab.c
./a.out
vi syntaxfor.y
lex syntaxfor.l
yacc -d syntaxfor.y
cc y.tab.c
./a.out
cc y.tab.c

vi syntaxfor.l
lex syntaxfor.l
yacc -d syntaxfor.y
cc y.tab.c
./a.out
vi syntaxfor.l
vi syntaxfor.y
ls
cd yaccprograms
ls
cd ex2
ls
vim syntaxwhile.l
vim syntaxwhile.y
lex whilesyntax.l
lex syntaxwhile.l

cc lex.yy.c y.tab.c -ll
cc y.tab.c

lex syntaxfor.l
yacc -d syntaxfor.y
cc y.tab.c
ls
./a.out
lex syntaxwhile.l
yacc -d syntaxwhile.y
cc y.tab.c
./a.out < while.txt
cat while.txt]
cat while.txt
vim while.txt
./a.out < while.txt
lex syntaxwhile.l
yacc -d syntaxwhile.y
cc y.tab.c
./a.out < while.txt
vim while.txt
./a.out < while.txt
vim while.txt
./a.out < while.txt
vim syntaxwhile.l
vim syntaxwhile.y
vim syntaxfor.l
vim syntaxfor.y
exit
ls
cd yaccprograms
ls
cd ex3
ls
lex syntaxifelse.l
yacc syntaxifelse.y
cc y.tab.c lex.yy.c -ll
cc y.tab.c

./a.out<if.txt
lex syntaxifelse.l
yacc syntaxifelse.y
cc y.tab.c
./a.out<if.txt
lex syntaxswitch.l
yacc syntaxswitch.y
cc y.tab.c
./a.out<switch.txt

lex syntaxifelse.l
yacc syntaxifelse.y
cc y.tab.c
./a.out<if.txt
vim if.txt
lex syntaxifelse.l
yacc syntaxifelse.y
cc y.tab.c
./a.out<if.txt
vim if.txt
lex syntaxifelse.l
yacc syntaxifelse.y
./a.out<if.txt
lex syntaxswitch.l
yacc syntaxswitch.y
cc y.tab.c
./a.out<switch.txt
exit
ls
cd yaccprograms
cd ex3
ls
cd ..
ls
mv syntaxswitch.l ex3/syntaxswitch.l
ls
cd ex3
ls
vim syntaxswitch.y
lex syntaxswitch.l
yacc -d syntaxswitch.y
cc y.tab.c
vim syntaxswitch.y
lex syntaxswitch.l
yacc -d syntaxswitch.y
cc y.tab.c
vim syntaxswitch.y
lex syntaxswitch.l
yacc -d syntaxswitch.y
cc y.tab.c
vim switch.l
lex syntaxswitch.l
yacc -d syntaxswitch.y
cc y.tab.c
ls
mv switch.l switch,txt
ls
mv switch,txt switch.wqtxt
mv switch.wqtxt switch.txt
ls
./a.out<switch.txt
./a.out
vim syntaxswitch.y
lex syntaxswitch.l
yacc -d syntaxswitch.y
cc y.tab.c
./a.out
vim syntaxswitch.y
lex syntaxswitch.l
yacc -d syntaxswitch.y
cc y.tab.c
./a.out
./a.out<switch.txt
vim switch.txt
lex syntaxswitch.l
yacc -d syntaxswitch.y
cc y.tab.c
./a.out
./a.out<switch.txt
vim syntaxswitch.y
lex syntaxswitch.l
yacc -d syntaxswitch.y
vim syntaxswitch.y
lex syntaxswitch.l
yacc -d syntaxswitch.y
cc y.tab.c
./a.out<switch.txt
vim syntaxswitch.l
lex syntaxswitch.l
yacc -d syntaxswitch.y
cc y.tab.c
./a.out<switch.txt
vim syntaxswitch.l
vim syntaxswitch.y
lex syntaxswitch.l
yacc -d  syntaxswitch.y
cc y.tab.c
./a.out<switch.txt
vim switch.txt
lex syntaxswitch.l
yacc -d  syntaxswitch.y
cc y.tab.c
./a.out<switch.txt
vim syntaxswitch.y
vim switch.txt
lex syntaxswitch.l
cc y.tab.c
lex syntaxswitch.l
yacc -d  syntaxswitch.y
cc y.tab.c
./a.out<switch.txt
vim switch.txt
lex syntaxswitch.l
yacc -d  syntaxswitch.y
cc y.tab.c
./a.out<switch.txt
vim syntaxswitch.l
vim syntaxswitch.y
lex syntaxswitch.l
yacc -d syntaxswitch.y
cc y.tab.c
./a.out<switch.txt
vim syntaxswitch.y
lex syntaxswitch.l
yacc -d syntaxswitch.y
cc y.tab.c
vim switch.txt
lex syntaxswitch.l
yacc -d syntaxswitch.y
cc y.tab.c
./a.out<switch.txt
vim switch.txt
lex syntaxswitch.l
yacc -d syntaxswitch.y
cc y.tab.c
./a.out<switch.txt
vim syntaxifelse.l
vim syntaxifelse.y
vim if.txt
lex syntaxifelse.l
yacc -d  syntaxifelse.y
cc y.tab.c
./a.out<if.txt
ls
cat syntaxswitch.l
cat syntaxswitch.y
vim syntaxswitch.y
lex syntaxswitch.l
yacc -d syntaxswitch.y
cc y.tab.c
./a.out<switch.txt
vim switch.txt
ls
lex syntaxifelse.l
yacc -d  syntaxifelse.y
cc y.tab.c
./a.out<if.txt
vim syntaxswitch.y
cat switch.txt
cat syntaxifelse.l
vim  syntaxifelse.y
ls
lex syntaxswitch.l
yacc -d syntaxswitch.y
cc y.tab.c
./a.out<switch.txt
cat switch.txt
vim switch.txt
lex syntaxswitch.l
yacc -d syntaxswitch.y
cc y.tab.c
./a.out<switch.txt
ls
lex syntaxifelse.l
yacc -d  syntaxifelse.y
cc y.tab.c
./a.out<if.txt
cat if.txt
vim if.txt
lex syntaxifelse.l
yacc -d  syntaxifelse.y
cc y.tab.c
./a.out<if.txt
vim syntaxifelse.y
vim if.txt
ls
cd
ls
cd yaccprograms
ls
cd ex2
ls
cd ..
mkdir ex3
vi syntaxswitch.l
vi syntaxswitch.y
ls
cd yaccprograms
ls
cd ex1
ls
cd ..
cd ex2
ls
cd ..
cd ex3
ls
cd ..
mkdir ex4
rmdir ex4
ls
cd ..
mkdir IMCGR
ls
cd IMCGR
ls
cd IMCGR
ls
vi infix.l
ls
vi infix.y
ls
cd IMCGR
ls
vi infix.
ls
vi infix.l
cat infix.y
vi infix.y
ls
cd IMCGR
ls
cat infix.l
cat infix.y
ls
cd IMCGR
LS
ls
vi infix.l
ls
cd IMCGR
LS
ls
vi infix.l
ls
cd yaccprograms
ls
cd ..
cd IMCGR
LS
ls
vi infix.l
exit
ls
cd yaccprograms
ls
cd ex3
ls
cd
cd yaccprograms
ls
cd
cd IMCGR
ls
vi infix.l
vi infix.y
ls
lex infix.l
yacc -d infix.y
cc y.tab.c -ll
./a.out
ls
cd IMCGR
ls
vi infix.l
ls
vi infix.y
ls
cd IMCGR
ls
vi infix.l
vi infix.y
ls
cd IMCGR
LS
ls
lex infix.l
yacc -d infix.y
cc y.tab.c
./a.out
vi infix.l
vi infix.y
ls
cd IMCGR
ls
vi infix.l
ls
vi infix.y
cat infix.y
ALPHA [A-Za-z]
DIGIT [0-9]
%%
printnum(0);
printf("\n");
top-=2;ptr-=2;
strcpy(st[top],"t");
tintar[ptr]=tint;
tint++;
}
codegen_umin() { printf("t%d=-%s\n",tint,st[top]);
printnum(0);
top--;
ptr--;
strcpy(st[top],"t");
tintar[ptr]=tint;
tint++;
}
codegen_assign() { printf("%s=",st[top-2]);
printnum(2);
printf("%s",st[top]);
printnum(0);
printf("\n");
top=-2;
ptr=-2;
}
printnum(int n)
{ if(strcmp(st[top-n],"t")==0)
{ printf("%d",tintar[ptr-n]);
}
int yywrap()
{ return 1; }
int yyerror()
{ printf("\nInvalid expression");
return 1;
}
"infix.y" 88L, 1165C written
[c6i3070@gflinux IMCGR]$ cat infix.y
%token ID NUM
%right '='
%left '+''-'
%left '*''%'
%left UMINUS
%%
S: ID{push();}'='{push();}E{codegen_assign();}
 ;
E:E'+'{push();}T{codegen();}
 |E'-'{push();}T{codegen();}
 |T
 ;
T:T'*'{push();}F{codegen();}
 |T'/'{push();}F{codegen();}
 |F
 ;
F:'('E')'
 |'-'{push();}F{codegen_umin();}%prec UMINUS
 | ID{push();}
 | NUM{push();}
 ;
%%
#include "lex.yy.c"
#include<ctype.h>
#include<string.h>
char st[100][25];
int top=0,ptr=0;
int tint=0;
int tintar[200];
main() { printf("\nEnter the expression:");
yyparse();
}
push() { strcpy(st[++top],yytext);
ptr++;
}
codegen() { printf("t%d=%s",tint,st[top-2]);
printnum(2);
printf("%s %s",st[top-1],st[top]);
printnum(0);
printf("\n");
top-=2;ptr-=2;
strcpy(st[top],"t");
tintar[ptr]=tint;
tint++;
}
codegen_umin() { printf("t%d=-%s\n",tint,st[top]);
printnum(0);
top--;
ptr--;
strcpy(st[top],"t");
tintar[ptr]=tint;
tint++;
}
codegen_assign() { printf("%s=",st[top-2]);
printnum(2);
printf("%s",st[top]);
printnum(0);
printf("\n");
top=-2;
ptr=-2;
}
printnum(int n)
{ if(strcmp(st[top-n],"t")==0)
{ printf("%d",tintar[ptr-n]);
}
int yywrap()
{ return 1; }
int yyerror()
{ printf("\nInvalid expression");
return 1;
}
ls
cd IMCGR
LS
ls
vi infix.y
ls
cd IMCGR
ls
vi infix.y
ls
cd IMCGR
ls
lex infix.l
yacc -d infix.y
cc y.tab.c -ll
./a.out
lex infix.l
cc y.tab.c -ll
./a.out
lex infix.l
yacc -d infix.y
cc y.tab.c -ll
./a.out
vi infix.l
vi infix.y
lex infix.l
yacc -d infix.y
cc y.tab.c -ll
./a.out
ls
vi infix.y
ls
cd IMCGR
ls
cd IMCGR
cat for.l
vi for.l
ls
cd IMCGR
ls
vi infix.l
vi infix.y
cd ..
exit
cd IMCGR
ls
vi for.l
lex for.l
yacc -d for.y
cc y.tab.c -ll
./a.out
ls
lex for.l
yacc -d for.y
vi for.y
cd IMCGR
ls
vi for.y
lex for.l
yacc -d for.y
cd IMCGR
LS
ls
vi for.y
lex for.l
yacc -d for.y
cc y.tab.c -ll
./a.out
vi for.y
ls
cd IMCGR
ls
vi infix.l
vi infix.y
ls
lex infix.l
yacc -d infix.y
cc y.tab.c
vi infix.y
lex infix.l
yacc -d infix.y
cc y.tab.c -ll
vi infix.y
lex infix.l
yacc -d infix.y
cc y.tab.c
vi infix.y
lex infix.l
yacc -d infix.y
cc y.tab.c
./a.out
lex infix.l
yacc -d infix.y
cc y.tab.c
./a.out
ls
vi infix.l
vi infix.y
vi infix.l
vi infix.y
vi infix.l
vi infix.y
lex infix.l
yacc -d infix.y
cc y.tab.c
./a.out

ls
vi infix.y
./a.out
vi infix.y
vi for.l
lex for.l
vi for.y
vi for.l
vi for.y
ls
vi infix.
rm infix.
ls
vi for.l
ls
vi for.y
vi for.l
vi for.y
vi for.l
vi for.y
ls
cd..
cd ..
ls
cd yaccprograms
ls
cd ex1
ls
vi evalinfix.y
cd ..
ls
cd IMCGR
ls
vi for.y
vi for.l
ls
vi for.y
ls
lex infix.l
yacc -d infix,y
yacc -d infix.y
cc y.tab.c
.a/.out
./a.out
passwd
ls
cd yaccprograms
ls
cd ..
ls
cd IMCGR
ls
vim infix.l
ls
vim infix.y
cd IMCGR
ls
vi for.y
lex for.l
yacc -d for.y
cc y.tab.c -ll
vi for.l
lex for.l
yacc -d for.y
cc y.tab.c -ll
vi for.l
vi for.y
