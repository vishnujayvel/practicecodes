%{
 int c=0,m=0;
%}

%%

[aeiou] {  yymore(); printf("%s\n",yytext);c++; }
[a-z]  yymore();
[ ] { if(c==0)
	{
	 printf("No vowel str %s\n ",yytext);
	  
	}
c=0;
    }

. ;
%%

int main()
{
 yylex();
 
 return 0;
}
