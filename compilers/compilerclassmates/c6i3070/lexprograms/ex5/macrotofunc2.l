%{
char buf[20];
char p,x;
int i=0,flag=0;
%}
%%
(#define)	{printf("int ");
		while((p=input())!='(')
		{
		printf("%c",p);}
		x=input();
		if(x == ' ')	
		{
		printf("()");
		flag=1;
		}
		if(flag!=1)
		{
		printf("(void *%c",x);
		}
		while((p=input())!=',')
		{printf("%c",p);}
		printf(",void *");
		while((p=input())!=')')
		{printf("%c",p);}
		printf(")\n{\nreturn ");
		while((p=input())!=';')
		{printf("%c",p);}
		printf(";\n}");
		}
%%
main()
{
yylex();
}

