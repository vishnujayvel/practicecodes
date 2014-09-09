%{
#include<stdio.h>
int f=0;
void yyerror(char *);
%}

%token key
%token ob,op,vb,cb,nu,co,cc,cn,tt,sp,sc,dec

%%

line: key ob rp cb co a cc { f=1;printf("Correct\n"); }
   ;

a:vb
 |nu
// |vb nu
// |a a
  |dec sp vrb sc
 ;

vrb:vb nu
   |vb
   ;

rp:ob vrb op a cb
//  |rp tt rp
  |vb op nu
//  |vrb op vrb
  |vrb op nu
  ;
%%

int main()
{
 yyparse();
if(f==1)
 printf("Corr");
else printf("NO");
}
int yywrap(){return 1;
}
void yyerror(char *s)
{
 printf("%s\n",s);
}

