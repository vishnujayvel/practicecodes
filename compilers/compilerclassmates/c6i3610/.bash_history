./a.out<input.txt
vi prog_yy.l
lex prog_yy.l
cc lex.yy.c -ll
./a.out<input.txt
vi prog_yy.l
lex prog_yy.l
cc lex.yy.c -ll
vi prog_yy.l
lex prog_yy.l
cc lex.yy.c -ll
./a.out<input.txt
vi prog_yy.l
lex prog_yy.l
cc lex.yy.c -ll
./a.out<input.txt
vi prog_yy.l
lex prog_yy.l
cc lex.yy.c -ll
./a.out<input.txt
lex prog_yy.l
vi prog_yy.l
lex prog_yy.l
cc lex.yy.c -ll
./a.out<input.txt
vi prog_yy.l
lex prog_yy.l
cc lex.yy.c -ll
./a.out<input.txt
vi prog_yy.l
lex prog_yy.l
cc lex.yy.c -ll
./a.out<input.txt
cat input.txt
vi prog_yy.l
cc lex.yy.c -ll
lex prog_yy.l
cc lex.yy.c -ll
./a.out<input.txt
cat input.txt
ls
cat comments.l
%{
int brac=0;
%}
%%
(\/\/) {brac=1;}
(\/\*) { brac=1;}
(\*\/) { brac=1;}
[\n]   { printf("%s",yytext);brac=0;}
[a-z] {if(brac==0) yymore();}
%%
int main(){
yylex();
return 1;
}
vi comments.l
ls
vi func_macro.l
lex func_marco.l
vi func_macro.l
lex func_marco.l
ls
vi func_mac.txt
lex func_marco.l
lex func_marco
vi func_marco.l
ls
vi func_macro.l
lex func_marco.l
lex func_macro.l
cc lex.yy.c -ll
./a.out<func_mac.txt
vi func_macro.l
vi func_mac.txt
ls
rm func_marco.l
vi macro_func.l
ls
cat for_while.l
cat input.txt
cat for_wh.txt
lex for_while.l
cc lex.yy.l -cc
cc lex.yy.l -ll
cc lex.yy.c -ll
./a.out>for_wh.txt
./a.out<for_wh.txt
cat for_wh.txt
cat for_while_2.l
for(;i<5;)
{   printf("hiya");
  i+=10;
}
cat for_wh.txt
vi for_wh.txt
ls
vi switch_if.l
vi switch_if.txt
ls
lex switch_if.l
cc lex.yy.c -ll
./a.out >switch_if.txt
./a.out <switch_if.txt
cat switch_if.txt
vi switch_if.txt
cat switch_if.txt
./a.out <switch_if.txt
vi switch_if.txt
cat switch_if.txt
./a.out <switch_if.txt
vi switch_if.l
cat switch_if.l
cat switch_if.txt
vi switch_if.txt
./a.out <switch_if.txt
vi comments.l
vi comments.txt
cat comments.txt
lex comments.l
cc lex.yy.c -ll
./a.out<comments.txt
cat comments.txt
./a.out<comments.txt
ls
cat fr_wh.l
cat fr_while.l
cat for_while.l
vi for_while.l
vi func_macro.l
cat func_macro.l
vi func_mac.txt
lex func_macro.l
vi func_macro.l
lex func_macro.l
cc lex.yy.c -ll
vi func_macro.l
lex func_macro.l
cc lex.yy.c -ll
./a.out <func_mac.txt
cat func_mac.txt
vi func_macro.l
lex func_macro.l
./a.out <func_mac.txt
cc lex.yy.c -ll
./a.out <func_mac.txt
vi func_macro.l
cat func_mac.txt
lex func_macro.l
cc lex.yy.c -ll
./a.out <func_mac.txt
vi func_macro.l
lex func_macro.l
vi func_macro.l
lex func_macro.l
vi func_macro.l
lex func_macro.l
cc lex.yy.c -ll
./a.out <func_mac.txt
vi macro_func.l
vi macro_func.txt
lex macro_function.l
ls
lex macro_func.l
cat macro_func.l
vi macro_func.txt
vi macro_func.l
lex macro_func.l
cat macro_func.l
vi macro_func.l
lex macro_func.l
cat macro_func.l
vi macro_func.l
lex macro_func.l
cc lex.yy.c -ll
./a.out<macro_func.txt
vi macro_func.l
lex macro_func.l
cc lex.yy.c -ll
./a.out<macro_func.txt
vi macro_func.l
lex macro_func.l
cc lex.yy.c -ll
./a.out<macro_func.txt
vi macro_func.txt
vi while_for_2.l
lex while_for_2.l
cc lex.yy.c -ll
cat while_for_2.l
vi while_for_2.l
lex while_for.l
cc lex.yy.c -ll
./a.out<while_for.txt
cat while_for.txt
vi  while_for.txt
./a.out<while_for.txt
vi for_while.l
ls
cat macro_func.txt
./a.out<macro_func.txt
lex macro_func.l
cc lex.yy.c -ll
./a.out<macro_func.txt
ls
lex switcf_if.l
lex switch_if.l
cc lex.yy.c -ll
./a.out<switch_if.txt
cat switch_if.txt
ls
vi while_for.l
cat while_for.l
vi while_for.txt
lex while_for.l
cc lex.yy.c -ll
cat while_for.txt
./a.out,while_for.txt
./a.out while_for.txt
cc lex.yy.c -ll
./a.out <while_for.txt
clear
vi while_for.l
|b2[k]=='>'||b2[k]=='='||b2[k]=='!')
ls
cat switch_if.l
ls
cat while_for.l
ls
cat for_while.l
cat nested_if.l
ls
lex nested_if.l
gcc lex.yy.c
gcc lex.yy.c -ll
./a.out
vim nested_if.l
./a.out
vim input
./a.out < in
./a.out < input
lex nested_if.l
gcc lex.yy.c -ll
./a.out<input
cat nested_if.l
vi input
lex nested_if.l
gcc lex.yy.c -ll
./a.out<input
input
cat input
ls
vim tokenizer.l 
cat tokenizer.l 
clear
cat tokenizer.l 
vim tokenizer.l 
ls
more token.txt 
more in
more input
more input.txt 
ls
vi tokenizer.l
more tokenizer.l
cat tokenizer.l
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
cat tokenizer.l
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
cat token.txt
int main()
{ int a,b,c; a=0; b=2; c=a+b; if(a!=0)   { a+b+c+d  }
}
int main()
{ int a,b,c; a=0; b=2; c=a+b; if(a!=0)   { a+b+c+d  }
}
ls
cat while_for.l
%{
#include<string.h>
char b1[100],b2[100],b3[100],b[1000],p,id[32];
int i=0,j=0,k=0,l=0,pl;
%}
%%
(while) {
         p=input();
        strcpy(b,"for(;");
        i=strlen(b);
         while(p!=')');              {                 b[i++]=p;                 b2[j++]=p;                 p=input();
             }
        b[i++]=';';
        b[i++]=')';
        j=0;
        while(b2[k]!='\0');         {         if(b2[k]=='<'||b2[k]=='>'||b2[k]=='='||b2[k]=='!');                 break;         id[j++]=b2[k++];         }
        printf("%s",b);
        }
. {ECHO;}
[ \n] {ECHO;}
%%
int main()
{ yylex();
return 0;
}
ls
cat while_for.txt
while(1); { i++; a+b; }
cat for_while.l
%{
        int count=0;
        int isfor=0,ison=0,isto=0,isth=0,i,j,k,l,m,n,opbr=0;
        char str[30],content[100],stra[30],ch;
        #include<string.h>
%}
alpha [a-z]
one [a-z=0-9]
three [-+a-z]
openbr [{]
anything [^}]
semi [;]
op [(]
cl [)]
closebr [}]
%%
{alpha}+ { if(strcmp(yytext,"for")==0){ /*printf("while(");*/ isfor=1;   }   }
{one}+ { if(isfor==1) { strcpy(stra,yytext );printf("%s;\n",yytext );  printf("w
hile(");   } ison=1;  }
{two}+ { if(isfor==1&&ison==1)  { printf("%s){",yytext); isto=1;  }   }
{three}+ {if(isfor==1&&ison==1&&isto==1) { strcpy(str,yytext); ch=input();ch=inp
ut();ch=input();   while(1){ ch=input(); if(ch=='}') {printf("%s;\n}",str);  bre
ak;  } printf("%c",ch); }     }  }
{semi} {}
{op} {}
{cl} {}
{closebr} { printf("%s;}",str); isfor=0;ison=0;isto=0;isth=0;    }
%%
int main()
{yylex();}
%{
        int count=0;
        int isfor=0,ison=0,isto=0,isth=0,i,j,k,l,m,n,opbr=0;
        char str[30],content[100],stra[30],ch;
        #include<string.h>
%}
alpha [a-z]
one [a-z=0-9]
three [-+a-z]
openbr [{]
anything [^}]
semi [;]
op [(]
cl [)]
closebr [}]
%%
{alpha}+ { if(strcmp(yytext,"for")==0){ /*printf("while(");*/ isfor=1;   }   }
{one}+ { if(isfor==1) { strcpy(stra,yytext );printf("%s;\n",yytext );  printf("w
hile(");   } ison=1;  }
{two}+ { if(isfor==1&&ison==1)  { printf("%s){",yytext); isto=1;  }   }
{three}+ {if(isfor==1&&ison==1&&isto==1) { strcpy(str,yytext); ch=input();ch=inp
ut();ch=input();   while(1){ ch=input(); if(ch=='}') {printf("%s;\n}",str);  bre
ak;  } printf("%c",ch); }     }  }
{semi} {}
{op} {}
{cl} {}
{closebr} { printf("%s;}",str); isfor=0;ison=0;isto=0;isth=0;    }
%%
int main()
{yylex();}
cat for_while.l
lex for_while.l
%{
        int count=0;
        int isfor=0,ison=0,isto=0,isth=0,i,j,k,l,m,n,opbr=0;
        char str[30],content[100],stra[30],ch;
        #include<string.h>
%}
alpha [a-z]
one [a-z=0-9]
three [-+a-z]
openbr [{]
anything [^}]
semi [;]
op [(]
cl [)]
closebr [}]
%%
{alpha}+ { if(strcmp(yytext,"for")==0){ /*printf("while(");*/ isfor=1;   }   }
{one}+ { if(isfor==1) { strcpy(stra,yytext );printf("%s;\n",yytext );  printf("while(");   } ison=1;  }
{two}+ { if(isfor==1&&ison==1)  { printf("%s){",yytext); isto=1;  }   }
{three}+ {if(isfor==1&&ison==1&&isto==1) { strcpy(str,yytext); ch=input();ch=input();ch=input();   while(1){ ch=input(); if(ch=='}') {printf("%s;\n}",str);  break;  } printf("%c",ch); }     }  }
{semi} {}
{op} {}
{cl} {}
{closebr} { printf("%s;}",str); isfor=0;ison=0;isto=0;isth=0;    }
%%
int main()
{yylex();}
cat for_wh.txt
for(i=10;i<5;i++)
{   printf("hiya");
  i+=10;
}
cat nested_if.ol
cat nested_if.l
%{
int andcheck=0,i=0,j=0,k=0,back=0;
%}
exp [a-z+-/*1-9<>=;"]
close [)]
inside [a-z]
closea [}]
open [(]
opena [{]
%%
(if) {printf("if(");}
{exp}+ {if(andcheck==0){printf("%s){\n",yytext);andcheck++; } else if(andcheck>0){printf("if(%s){",yytext);} if(andcheck==-1){ printf("%s\n",yytext);  } }
(&&) {back++; }
{close} { andcheck=-1;  }
{open} {}
{opena} {}
{closea} {while(back>0){printf("}");back--; } printf("}"); }
%%
int main(){yylex();}
cat nested_if.txt
if(a+b && b+c && c+d); { a+b+c+d=25; }
ls
vi macro_func.l
ls
cat comments.l
cat comments.txt
lex comments.l
cc lex.yy.c -ll
./a.out<comments.txt
ls
cat while_for.l
cat while_for.txt
lex while_for.l
cc lex.yy.c -ll
./a.out<while_for.txt
vi nested_if.l
ls nested_if.txt
vi nested_if.txt
lex nested_if.l
cat nested_if
cat nested_if.l
vi nested_if.l
lex nested_if.l
cc lex.yy.c -ll
cat nested_if.l
vi nested_if.l
lex nested_if.l
cc lex.yy.c -ll
vi nested_if.l
lex nested_if.l
cc lex.yy.c -ll
./a.out<nested_if.txt
vi nested_if.l
lex nested_if.l
cc lex.yy.c -ll
./a.out<nested_if.txt
cat nested_if.txt
vi nested_if.l
lex nested_if.l
vi nested_if.l
lex nested_if.l
vi nested_if.l
lex nested_if.l
cat nested_if.l
lex nested_if.l
vi nested_if.l
lex nested_if.l
./a.out<nested_if.txt
cc lex.yy.c -ll
./a.out<nested_if.txt
vi nested_if.l
cc lex.yy.c -ll
lex nested_if.l
cc lex.yy.c -ll
./a.out<nested_if.txt
vi nested_if.txt
./a.out<nested_if.txt
vi nested_if.l
lex nested_if.l
cc lex.yy.c -ll
./a.out<nested_if.txt
vi nested_if.l
lex nested_if.l
cc lex.yy.c -ll
./a.out<nested_if.txt
vi nested_if.l
lex nested_if.l
cc lex.yy.c -ll
vi nested_if.l
lex nested_if.l
cc lex.yy.c -ll
./a.out<nested_if.txt
vi nested_if.l
lex nested_if.l
cc lex.yy.c -ll
./a.out<nested_if.txt
cat nested_if.txt
vi nested_if.txt
./a.out<nested_if.txt
vi nested_if.l
lex nested_if.l
./a.out<nested_if.txt
cc lex.yy.c -ll
./a.out<nested_if.txt
cat nested_if.txt
vi nested_if.txt
./a.out<nested_if.txt
vi nested_if.l
lex nested_if.l
cc lex.yy.c -ll
./a.out<nested_if.txt
vi tokenizer.l
lex tokenizer.l
vi token.txt
cc lex.yy.c -ll
./a.out<token.txt
cat nested_if.txt
lex nested_if.l
cc lex.yy.c -ll
./a.out<nested_if.txt
cat token.txt
lex tokenizer.l
./a.out<nested_if.txt
cc lex.yy.c -ll
./a.out<token.txt
cat token.txt
vi token.txt
./a.out<token.txt
vi nested_if.;
ls
vi nested_if.l
cat nested_if.l
vi nested_if.l
./a.out<input
cat input
vi nested_if.l
lex nested_if.l
cc lex.yy.c -ll
./a.out<input
cat input
vi input
./a.out<input
vi input
./a.out<input
clear
ls
vi macro_func.l
cat macro_func.l
%{
        int count=0,count_name=0,count_param=0;
        #include<string.h>
%}
alpha [*a-z1-9]
open [(]
close [)]
closebr [}]
%%
(#define) { if(count==0){ printf("int "); count++;}     } {alpha}+ {if(count_name==0){ printf("%s",yytext); count_name++;} else if(count_name==1&&count_param==0){ printf("int %s",yytext);count_param++;   } else printf("%s;}",yytext);   }
{open} {printf("(");}
{close} {printf("){\n return ");}
%%
int main(){yylex();}
cat macro_function.txt
cat macro_func.txt
#define sqr(a) a*a
clear
ls
exit
ls
cd yaaac
vi for.lex
ls
mv for.lex for.l
vi for.y
clear
cat for1.l
cat for.l
cc y.tab.c lex.yy.c
lex for.l
yaac -d for.y
yacc -d for.y
cat for.y
vi for.y
cat for.y
yacc -d for.y
cat for.y
vi for.y
yacc -d for.y
vi for.y
yacc -d for.y
vi for.y
yacc -d for.y
cc y.tab.h lex.yy.c
./a.out
lex for.l
yacc -d for.y
cc y.tab.h lex.yy.c
cc y.tab.h lex.yy.c -ll
./a.out
lex for.l
yacc -d for.y
cc y.tab.h lex.yy.c
cc y.tab.h lex.yy.c -ll
vi for.y
./a.out
vi for.y
vi for1.y
lex for.l
yacc -d for1.y
vi for1.y
lex for.l
yacc -d for1.y
cc y.tab.h lex.yy.c
vi for1.y
lex for.l
yacc -d for1.y
cc y.tab.h lex.yy.c
cat for.l
vi for1.y
lex for.l
yacc -d for1.y
cc y.tab.c lex.yy.c
./a.out
cat for.y
vi while.y
lex while.l
yacc -d while.y
cc y.tab.c lex.yy.c
vi while.l
yacc -d while.y
cc y.tab.c lex.yy.c
clear
ls
cd yaaac
vi for1.l
vi while.l
clear
ls
lex while.l
yacc while.y
cc y.tab.c lex.yy.c
while(i<0)
./a.out
vi ifelse.l
vi ifelse.y
lex ifelse.l
yacc -d ifelse.y
cc y.tab.c lex.yy.c
lex for.l
yacc if.y
yacc  -d for.y
cc y.tab.c lex.yy.c
./a.out
lex while.l
yacc -d while.y
cc y.tab.c lex.yy.c
./a.out
./a.out\
./a.out
lex ifelse.l
yacc -d ifelse.y
cc y.tab.c lex.yy.c
./a.out
cat ifelse.y
./a.out
lex ifelse.l
yacc ifelse.y
cc y.tab.c lex.yy.c
./a.out
vi ifelse.l
lex ifelse.l
yacc ifelse.y
cc y.tab.c lex.yy.c
./a.out
cat ifelse.y
cat ifelse.l
lex ifelse.l
yacc -d ifelse.y
cc y.tab.c lex.yy.c
./a.out
cat ifelse.y
rm ./a.out
lex ifelse.l
yacc -d ifelse.y
cc y.tab.c lex.yy.c
./a.out
mkdir yaaac
ls
cd yaaac
ls
cd yaaac
ls
clear
vi switch1.l
vi switch1.y
clear
lex switch1.l 
yacc -d switch1.y 
cc y.tab.c -ll 
./a.out 
vim switch1.txt
./a.out<switch1.txt
cat switch1.y
vim switch1.txt
./a.out<switch1.txt
lex switch1.l 
yacc -d switch1.y 
cc y.tab.c -ll 
./a.out<switch1.txt
cat switch.txt
cat switch1.txt
lex switch1.l
yacc -d switch1.y
cc y.tab.c -ll
./a.out < switch1.txt
vi switch1.y
clear
./a.out
vi switch1.txt
./a.out <switch1.txt
clear
ls
cd ..
ls
cd yaaac
ls
./a.out <switch1.txt
switch1.txt
cat switch1.txt
vi switch1.txt
./a.out <switch1.txt
vi switch1.txt
./a.out <switch1.txt
clear
ls
rm y.tab.h.gch
ls
switch(ch)
{         case 1: ch=1;
[c6i3610@gflinux yaaac]$ ls
a.out   for.l     ifelse.y   switch1.txt  while.y  y.tab.h.gch
for1.l  for.y     lex.yy.c   switch1.y    y.tab.c
for1.y  ifelse.l  switch1.l  while.l      y.tab.h
[c6i3610@gflinux yaaac]$ cd ..
[c6i3610@gflinux ~]$ ls
a.out          for_wh.txt    lex.yy.c        prog_2.l       while_for_2.l
comments.l     func_macro.l  macro_func.l    prog_3.l       while_for.l
comments.txt   func_mac.txt  macro_func.txt  prog_4.l       while_for.txt
counter.txt    infix.l       nested_if.l     prog_yy.l      yaaac
switch(ch)
{         case 1 ch=1;
switch(ch)
{         case 1: ch=1;
[c6i3610@gflinux yaaac]$ ls
a.out   for.l     ifelse.y   switch1.txt  while.y  y.tab.h.gch
for1.l  for.y     lex.yy.c   switch1.y    y.tab.c
for1.y  ifelse.l  switch1.l  while.l      y.tab.h
[c6i3610@gflinux yaaac]$ rm y.tab.h.gch
[c6i3610@gflinux yaaac]$ ls
a.out   for1.y  for.y     ifelse.y  switch1.l    switch1.y  while.y  y.tab.h
for1.l  for.l   ifelse.l  lex.yy.c  switch1.txt  while.l    y.tab.c
[c6i3610@gflinux yaaac]$
clearclear
[c6i3610@gflinux yaaac]$
clear
ls
cat switch1.l
cat switch1.y
clear
ls
vi infix.l
lex infix.l
vi infix.y
yacc -d infix.y
cc y.tab.c -ll
./a.out
clear
vi infix_1.l
vi infix.y
vi infix1.y
clear
lex infix1.l
ls
lex infix_\1.l
lex infix_1.l
clear
yacc -d infix1.y
cc lex.yy.c -ll
cat infix_1.l
lex infix_1.l
cc lex.yy.c -ll
ls ./a.out
ls infix1.y
clear
vi postfix_1.l
ls
rm infix1.y
vi infix_1.l
lex infix_1.l
vi infix_1.y
yacc -d infix_1.y
cc lex.yy.c -ll
ls ./a.out
clear
cat infix_1.l
clear
ls
vi inpar_1.y
ls
vi infix_1.y
lex infix_1.l
yacc -d infix_1.y
cc lex.yy.c -ll
rm infix_1.l
vi infix_1.l
lex infix_1.l
yacc -d infix_1.y
cc lex.yy.c -ll
cat infix_1.l
infix_1.y
cat infix_1.y
vi infix_1.y
lex infix_1.l
yacc -d infix_1.y
cc lex.yy.c -ll
cat infix_1.l
cc y.tab.c -ll
lex infix_1.l
cat infix_1.l
yacc -d infix_1.y
cc lex.yy.c y.tab.c -ll
./a.out
clear
lex infix_1.l
yacc -d infix_1.y
cc lex.yy.c y.tab.c -ll
./a.out
clear
vi postfix_1.l
vi postfix_1.y
clear
ls
clear
ls
cd ..
ls
cd yaaac
ls
cat postfix.l
ls
vi postfix_1.l
lex postfix_1.l
vi postfix_1.y
cat postfix_1.y
lex postfix_1.l
yacc -d postfix_1.y
cc lex.yy.c y.tab.c -ll
./a.out
clear
ls
lex infix.l
yacc -d infix.y
cc lex.yy.c y.tab.c -ll
cc y.tab.c -ll
clear
./a.out
cat infix.y
clear
./a.out
clear
ls
lex postfix.l
lex postfix_1.l
yacc -d porstfix_1.y
yacc -d postfix_1.y
clear
cc lex.yy.c y.tab.c -ll
./a.out
clear
ls
cd ..
clear
ls
cd yaac\
cd yaac
cd yaaac
ls
vi while.l
ls
vi while.y
lex while.l
yacc -d while.y
gcc y.tab.c lex.yy.c
./a.out < while2.txt
lex while.l
yacc -d while.y
gcc y.tab.c lex.yy.c
./a.out 
./a.out > while2.txt
./a.out < while2.txt
ls
vi while.y
ls
cd yaaac
ls
cd imcg
ls
vi infix.y
yacc -d infix.y
lex infix.l
gcc y.tab.c lex.yy.c

lex infix.l
y.tab.c
cc y.tab.c
./a.out 
vi imc.y
rm imc.y
ls
vi infix.y
vi imcfor.l
vi imcfor.y
yacc -d imcfor.y
lex imcfor.l
cc y.tab.c
vi for.txt
cc y.tab.c
./a.out <for.txt
