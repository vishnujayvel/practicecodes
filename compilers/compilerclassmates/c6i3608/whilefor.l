%{
int flag=0,i=0,j=0;
char var,condbuf[10],bodybuf[59],incbuf[3];
#include<string.h>
%}
%%
"while(" {flag=1;}
")" {flag=0;}
"i++;" {strcpy(incbuf,"i++");}
"i--;" {strcpy(incbuf,"i--");}
. {
if(flag==1)
{
	var=yytext[0];
	condbuf[i++]=yytext[0];
}
else 
{
   bodybuf[j++]=yytext[0];
}
}
%%
main()
{
yylex();
printf("for(");
printf("i=0;%s;%s)",condbuf,incbuf);
printf("\n%s",bodybuf);
}
