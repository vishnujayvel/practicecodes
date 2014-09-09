%{
#include<string.h>
char b1[100],b2[100],b3[100],b[1000],p,id[32];
int i=0,j=0,k=0;
%}
%%
.*(while) {
	 p=input();
	 p=input();
	 while(p!=')')
	    {
		b2[j++]=p;
		p=input();
	     }
	j=0;
	while(b2[k]!='\0')
	{
	if(b2[k]=='<'||b2[k]=='>'||b2[k]=='='||b2[k]=='!')
		break;
	id[j++]=b2[k++];
	}
	printf("%s\n%s\n\n\n%s",b2,id,b);
	}
. {ECHO;}
[ \n] {ECHO;}
%%
int main()
{
yylex();
return 0;
}


