alpha [a-z|A-Z]
num [0-9]
opr "+"|"-"|"*"|"/"|"%"

%{
#include <string.h>
char key[100][100],temp[100];
int kc1=0;
int tc1=0;
int i=0;
%}
%%

int.*\; {while(yytext[i]=' ')
	 i++;
	 //i++;
	 while(yytext[i]!='\0')
	{
		while(yytext[i]!=','||yytext[i]!=';')
		{
			temp[tc1]=yytext[i];
			tc1++;
			i++;
		}
		strcpy(key[kc1],temp);
		kc1++;
		i++;
		tc1=0;
	}
	i=0;
     }
. ;
%%
int yywrap()
{
 return 1;
}
int main()
{
	int l;
	yylex();
	while(kc1>=1)
	{
	printf("%s",key[kc1]);
	kc1--;
	}
	return 1;
}
