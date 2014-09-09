%{ 
char p;
%}
%%
[a-z] { p=input();
		while(p!='z')
		{
			p=input();
			}
		}
[ \n\t] { printf("%c",p); }
[^aeiouAEIOU] { }
%%
int main()
{
yylex();
}
