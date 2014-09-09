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
{alpha}+ { if(strcmp(yytext,"for")==0){ /*printf("while(");*/ isfor=1;   }   }
{one}+ { if(isfor==1) { strcpy(stra,yytext );printf("%s;\n",yytext );  printf("while(");   } ison=1;  }
{two}+ { if(isfor==1&&ison==1)  { printf("%s){",yytext); isto=1;  }   }
{three}+ {if(isfor==1&&ison==1&&isto==1) { strcpy(str,yytext); ch=input();ch=input();ch=input();   while(1){ ch=input(); if(ch=='}') {printf("%s;\n}",str);  break;  } printf("%c",ch); }     }  }
{semi} {}
{op} {}
{cl} {}
{closebr} { printf("%s;}",str); isfor=0;ison=0;isto=0;isth=0;    }

%%
int main()
{yylex();}


