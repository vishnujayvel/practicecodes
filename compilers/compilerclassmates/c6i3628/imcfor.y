%{
#include<stdio.h>
#include<stdlib.h>
%}
%token ID NUM FOR LE GE EQ NE OR AND
%right "="
%left OR AND
%left '>''<' LE GE NE EQ
%left '+''-'
%left '*''/'
%right UMINUS
%left '!'
%%
S:FOR'('E{label1();}';'E{label2();}';'E{label3();}')''{' E{label4();exit(0);}';''}'
 ;
E:V'='{push();}E{codegen_assign();}
 |E'+'{push();}E{codegen();}
 |E'-'{push();}E{codegen();}
 |E'*'{push();}E{codegen();}
 |E'/'{push();}E{codegen();}
 |E'<'{push();}E{codegen();}
 |E'>'{push();}E{codegen();}
 |'('E')'
 |'-'{push();}E{codegen_uminus();} %prec UMINUS
 |V
 |NUM{push();}
 ;
V:ID{push();}
 ;
%%
#include "lex.yy.c"
#include<ctype.h>
#include<string.h>
char st[100][10];
int label[20];
int top=0;
char i[2]="0";
char temp[2]="t";
int labelno=0,labeltop=0;
int start=1;
main()
{
printf("\nEnter the expression:");
yyparse();
}
push()
{
strcpy(st[++top],yytext);
}
codegen()
{
strcpy(temp,"t");
strcat(temp,i);
printf("%s=%s %s %s\n",temp,st[top-2],st[top-1],st[top]);
top=top-2;
strcpy(st[top],temp);
i[0]++;
}
codegen_uminus()
{
strcpy(temp,"t");
strcat(temp,i);
printf("%s=-%s\n",temp,st[top]);
top=top-1;
strcpy(st[top],temp);
i[0]++;
}
codegen_assign()
{
printf("%s=%s\n",st[top-2],st[top]);
top=top-2;
}
label1()
{
printf("L%d:\n",labelno++);
}
label2()
{
strcpy(temp,"t");
strcat(temp,i);
printf("%s=not %s\n",temp,st[top]);
printf("if %s goto L%d\n",temp,labelno);
i[0]++;
label[++labeltop]=labelno;
labelno++;
printf("goto L%d\n",labelno);
label[++labeltop]=labelno;
printf("L%d:\n",++labelno);
}
label3()
{
int x;
x=label[labeltop--];
printf("goto L%d\n",start);
printf("L%d:\n",x);
}
label4()
{
int x;
x=label[labeltop--];
printf("goto L%d\n",labelno);
printf("L%d:\n",x);
}
int yywrap()
{
return 1;
}
int yyerror()
{
printf("\nInvalid for expression");
return 1;
}

