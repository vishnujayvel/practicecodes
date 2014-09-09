%{
	char p;
	int first=0;
%}
%%
(int)	|
(int*) |
(char)	|
(char*) |
(void) |
(void*)    {	if(first==0)	
		{
			printf("#define ");
			while((input())!=' ') ;
			p=input();
			while(p!='(')
			{
				printf("%c",p);
				p=input();
			}
			while((input())!=' ');
			printf("(%c)",input());
			while((input())!='{');
			p=input();
			while((input())!='(');
			p=input();
			while(p!=')')
			{
				printf("%c",p);
				p=input();
			}
			first=1;		
	  	}
	   }
[;}] ;
%%
int main()
{
	yylex();
	return 0;
}

