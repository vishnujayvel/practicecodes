

%{
int flag=0;
%}
%%
"#define" {flag=1; printf("int ");}
"(" { 
	if(flag==1)
        {
	  printf("(int ");
        }
	else
	  printf("(");
    }
"," {
	if(flag==1)
	{
	  printf(",int ");
        }
	else
	  printf(",");
    }
")" {
       flag=0;
       printf(")");
    }       
%%
main()
{
yylex();
}


