%{
	int i=1,j=0,k=0;
	char sym[30];
%}

alpha [A-za-z]
plus [+]
minus [-]
mul [*]
div [/]
closebr[}]
openbr [{]
%%
{alpha} {printf("%c",yytext[0]);}
{plus} {if(sym[i-1]=='*'||sym[i-1]=='/'){for(k=i-1;k>0;k--){printf("%c",sym[k]);} i=1;sym[1]='+';i++;} else{ sym[i]='+';i++;}}

{openbr} {sym[0]='>';sym[i]='{';i++;}
{minus} {if(sym[i-1]=='*'||sym[i-1]=='/'){for(k=i-1;k>0;k--){printf("%c",sym[k]);} i=1;sym[1]='-';i++;} else{sym[i]='-';i++;}}

{closebr} {for(k=i-1;k>0;k--) {if(sym[k]=='{'){break;} else{ printf("%c",sym[k]);}} i=k;}

{mul} {sym[i]='*';i++;}
{div} {sym[i]='/';i++;}
%%
main()
{
yylex();
}
