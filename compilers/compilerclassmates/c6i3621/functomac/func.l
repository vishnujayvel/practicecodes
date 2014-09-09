%{
        int i=0,j=0,k=0,l=0,m=0,n=0,o=0;

 char p,buf[2][100],a[100],b[100],c[100],d[100],d1[100];
%}
type void|int|float|char
%%
{type}[ ][a-z]*(\()(\)) { strcpy(a,yytext); for(i=5;a[i]!='(';i++) { b[j++]=a[i]; }  }
(\{)[^\}]* {  strcpy(c,yytext); }
. ;
%%
int main()
{
yylex();
for(k=0;k<strlen(c);k++)
{ if(c[k]=='\n') 
      {
        d[l++]='\\';
	
      }
	d[l++]=c[k];
}
d[l]='}'; 
printf("\n #define %s() %s",b,d);
return 0;
}
