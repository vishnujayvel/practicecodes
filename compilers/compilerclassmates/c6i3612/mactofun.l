%{
char fun[100],p,buf[100];
int i=0,j=0;
%}
%%
(#define) { 	p=input();
		while(p==' ')
			{
			p=input();}
		printf("void* ");
		while(p!='(')
		{
		fun[i++]=p;
		p=input();
		}
		printf("%s",fun);
		if(p=='(')
		{
			printf("(");
			p=input();
			if(p==')')
			{}
			else
			{
				printf("void* ");
			}
		}
		while(p!=')')
		{
			if(p==',')
				printf(",void * ");
			else
				printf("%c",p);
		p=input();
		}
		//printf(")");
		while(p!='}')
		{
		if(p=='\\')
			{
		
			}
		else
			printf("%c",p);
		p=input();
		}
		printf("}");
	}
		
. {ECHO;}
[\n ] {ECHO;}
%%
int main()
{
yylex();
return 0;
}

