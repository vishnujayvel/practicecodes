%{
int i=0,j=0,k=0,l=0,m=0;
char a[100],b[20][100],c[100],d[100];
%}
and &&
%%
if(\()[^\)]* { strcpy(a,yytext);}
(\{)[^\}]* {   strcpy(c,yytext); }
. ;
%%
int main()
{
yylex();
for(m=1;m<strlen(c);m++)
{
                d[i++]=c[m];
}
for(i=3;i<strlen(a);i++)
{


        if(a[i]=='&' && a[++i]=='&')
        {
                printf("\nif(%s){",b[k]);
                k++;l=0;i++;
        }
        b[k][l++]=a[i];

}
printf("\nif(%s){",b[k]);
printf("\n%s",d);
                 while(k>=0)
                 {
                        printf("\n}");
                        k--;
                 }


return 0;
}

