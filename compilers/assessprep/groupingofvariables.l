%{
#include<string.h>
FILE *nw1;
FILE *nw2;
int i=0,j=0;
char a[256];
int flag=0,flag2=0;
%}
brackets [()]
sp [ ]
fl [{]
nl [\n]
ex [^\t]
%%
(#include<)[a-z]+(.h>){nl} {
fwrite(yytext,strlen(yytext),1,nw1);
}
(void){sp}(main){brackets}+{nl}*{fl}{nl}* {
fwrite(yytext,strlen(yytext),1,nw1);
}
"for(int"{sp}[A-Za-z_]+[A-Za-z0-9_,=]*(;) {
j=0;
for(i=4;i<yyleng;i++)
{
a[j++]=yytext[i];
if(yytext[i]==';')
break;
}
a[j]='\0';
fwrite(a,strlen(a),1,nw1);
fwrite("for(",strlen("for("),1,nw2);
j=0;
flag=0;
for(i=4;i<yyleng;i++)
{
if(yytext[i]==' ')
flag=1;
if(flag==1)
a[j++]=yytext[i];
}
a[j]='\0';
fwrite(a,strlen(a),1,nw2);
}
(int|char|float|double){sp}[A-Za-z_]+[A-Za-z0-9_,=]*(;){nl} {
fwrite(yytext,strlen(yytext),1,nw1);
j=0;
flag=0;
flag2=0;
for(i=0;i<yyleng;i++)
{
if(yytext[i]==' ')
flag++;
if(yytext[i]=='=')
flag2=1;
if(flag==1)
a[j++]=yytext[i];
}
a[j]='\0';
if(flag2==1)
fwrite(a,strlen(a),1,nw2);
}
{ex} {
fwrite(yytext,strlen(yytext),1,nw2);}
%%
int yywrap(){
return 1;
}
int main(){
yyin=fopen("dest.c","r");
nw1=fopen("cat1.c","w");
nw2=fopen("cat2.c","w");
yylex();
return 0;
}
