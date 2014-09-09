%{
        int count=0;
        int isfor=0,ison=0,isto=0,isth=0,i,j,k,l,m,n,opbr=0;
        char str[30],content[100],stra[30],ch;
        #include<string.h>
%}
alpha [a-z]
one [a-z=0-9]
two [a-z<>=!0-9]
three [-+a-z]
openbr [{]
anything [^}]
semi [;]
op [(]
cl [)]
closebr [}]
%%
{alpha}+ {if(strcmp(yytext,"for")==0){ printf("while(1){"); isfor=1; for(i=0;i<2;i++){ch=input();} }}
{two} { if(isfor==1){ strcpy(str,yytext); printf("%s",yytext);/*for(i=0;i<9;i++){ch=input();}*/  while(1){ch=input();if(ch=='}'){ printf("%s;\n}",str); break; }printf("%c",ch);  }   }  }
{semi} {}
{op} {}
{cl} {}
{openbr} {}
%%
int main()
{ yylex();}

