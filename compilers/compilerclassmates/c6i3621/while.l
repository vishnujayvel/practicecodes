%{
int k=0,i,j=0;
char ch[20][100],ch1[200],ch2[10];
%}
%%
([a-z]*)=[^;]* { strcpy(ch[0],yytext); }
\([^)]*   { strcpy(ch[1],yytext); for(i=1;i<strlen(ch[1]);i++) {ch2[j++]=ch[1][i];  } }
\{[^\}]* { strcpy(ch1,yytext);}
(\}) { if(!strcmp(ch2,"1")) { strcpy(ch2,""); } printf("\nfor(%s;%s;)%s}",ch[0],ch2,ch1); }
. ;

%%
int main()
{
yylex();
return 1;
}


