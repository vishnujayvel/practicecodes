%{
	char choice[35], label[100], p;
	int i=0,j=0,k=0;
%}
%%
switch\(	{ p=input();
		  while(p!=')')
		  {
			choice[i++]=p;
			p=input();
		  }
		  while(input()!='{');
		}
(case)		{ p=input();
		  j=0;
		  while(p!=':')
		  {
			label[j++]=p;
			p=input();
		  }
		  if(k==0)
			printf("if(%s==%s)",choice,label);
		  else
			printf("else if(%s==%s)",choice,label);
		  printf("\n{");
		  k++;
	 	}
(default\:)	{ printf("else\n{"); }
(break;)	{ printf("}"); }
.|\n		ECHO;
%%
main()
{
	yylex();


}
