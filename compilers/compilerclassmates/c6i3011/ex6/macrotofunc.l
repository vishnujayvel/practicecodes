%{
	char p;
	int noarg=0;
%}
%%
(#define)		{
				printf("void *");
				while((p=input())!='(') printf("%c",p);
				printf("(");
				p=input();
				if(p==' ')
				{ 
					printf(" )\n{\n");
					while((p=input())!=')');
					while((p=input())!='\n') printf("%c",p);
					printf("\n");
				 }
				else
				{
					while(p!=')')
					{
						printf("void * ");
			  			while( p!=','&& p!=')')
						{
							printf("%c",p);
							p=input();
						}
						if(p==',') printf(", ");
						if(p==')') break;
						p=input();
					}
					printf(")\n{\nreturn (");
					while((p=input())!='\n') printf("%c",p);
					printf(");\n");
				}
				printf("\n}");
			}
%%
main()
{
	yylex();
}
