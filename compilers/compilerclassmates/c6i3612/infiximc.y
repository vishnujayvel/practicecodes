%{
int c=0,lc=-1,pr,pre[10];
char no[10];
%}
%%
['/'] {
        pr=4;
        while(lc>=0&&pr<pre[lc])
         printf("%c",no[lc--]);
        no[++lc]='/';
        pre[lc]=pr;
        }

[a-z] {printf("%c",yytext[0]);}
['+']   {	
	pr=2;
	while(lc>=0&&pr<pre[lc])
	printf("%c",no[lc--]);
	no[++lc]='+';
	pre[lc]=pr;
	}
['('] 	{
	no[++lc]='(';
	pre[lc]=0;
	}
[')'] 	{
	while(lc>=0&&no[lc]!='(')
		printf("%c",no[lc--]);
	lc--;
	}
['*'] {
	pr=3;
	while(lc>=0&&pr<pre[lc])
         printf("%c",no[lc--]);
        no[++lc]='*';
        pre[lc]=pr;
        }
[\-] {
        pr=1;
        while(lc>=0&&pr<pre[lc])
         printf("%c",no[lc--]);
        no[++lc]='-';
        pre[lc]=pr;
        }
[ \n\t] {while(lc>=0)
		printf("%c",no[lc--]);
	printf("\n");
	}
%%      
int main()
{
yylex();
return 0;
}
