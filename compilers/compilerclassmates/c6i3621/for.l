%{
int i,j=0,k=0;
char ch[20][100],ch1[200],ch2[20];
%}
%%
;; { strcpy(ch[k],"1"); k++; }
[a-z][^;|^)]*   { strcpy(ch[k],yytext); k++;  }
\{[^\}]* { strcpy(ch1,yytext);}
(\}) { for(i=4;i<strlen(ch[0]);i++){ ch2[j++]=ch[0][i]; }  printf("%s;\nwhile(%s)%s\n%s;}",ch2,ch[1],ch1,ch[2]); }
. ;
%%
int main()
{
yylex();
return 1;
}
