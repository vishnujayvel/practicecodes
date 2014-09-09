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



