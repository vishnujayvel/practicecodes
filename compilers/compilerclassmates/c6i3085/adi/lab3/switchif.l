nl [\t\n]
%{
	int i,j,k,len;
	int count=1;
	char var;
	int val;
%}

%%
switch\(.\)\{	{
		//	printf("hEre");
			i=0;
			while(yytext[i]!='(')
			{
				i++;
			}
			var=yytext[i+1];
		//	printf("varis%c",var);
	    	}
case.*:	{//	printf("YY%sit",yytext);
		i=0;
		while(yytext[i]!=':')
		{	i++;
		}
		val=yytext[i-1];
		if(count!=1)
		{
			printf("elseif(%c==%c){",var,val);
			
		}
		else
		{
			printf("if(%c==%c){",var,val);
			count++;
		}
	}

break;	{	printf("\n}");
	}
default: {	printf("else{");
	}

\}	{
		
	}
.	{ECHO;
	}
\n	{ECHO;
	}

%%
int main()
{
	yylex();
}

		
