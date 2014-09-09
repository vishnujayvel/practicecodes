sign [+-]
%{
	int bool_in=1,i,y=1;
	char stack[50];
	char con[5];
	char inloop[100];
	int j=0;
	char var;
	int k=0;
%}
%%

[a-zA-Z]=[0-9]\;	{
				if(bool_in)
				{
					i=0;
					while(yytext[i]!='\n')
					{
						stack[i]=yytext[i];
						i++;
					}
				}
			}
while\(	{	printf("for(");
		printf("%s",stack);
		var=stack[0];
	//	printf("%c",var);
	}
[a-zA-Z](>|<)[0-9]	printf("%s;",yytext);

[a-z]{sign}{sign}\;	{
			i=0;
                        while(yytext[i]!=';')
                        {
                                con[i]=yytext[i];
                                i++;
                        }
                        printf("%s)%s\n}\n",con,inloop);

			
		}
[\n\t]	{
		inloop[k]=yytext[0];
		k++;
	}
.	{
		//	if(yytext[0]!=')')
			inloop[k]=yytext[0];
			k++;
			
		
		
	}

%%

int main()
{
	yylex();
}
