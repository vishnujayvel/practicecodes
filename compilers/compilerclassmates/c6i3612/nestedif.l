
%{
char p;
%}
%%
"if\(" {	
		printf("%s",yytext);
		p=input();
		while(p!='\n')
		{
		if(p=='&')
			{
			p=input();
			if(p=='&')
			{
				printf(")\n if(");
				/*p=input();
				while(p!='&'||p!='|'||p!=')')
				{
				printf("%c",p)i;*/
				p=input();
				}
			}
			
		
		printf("%c",p);
		p=input();
		}
		}
.		{ECHO;}
[ \n\t]        {ECHO;}
%%
int main()
{
yylex();
return 0;

}
