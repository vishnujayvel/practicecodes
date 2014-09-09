%{
int countIfcond=0;
int count=0;
int i,j,k;
char condition[100];
%}
%%

if\( 	{
		//printf("First IF matched\n");	
		printf("if(");
	}

.*\)	{
		printf("%s\n",yytext);
		i=0;
		while(yytext[i]!=')')
		{
			j=0;
		//	k=0;
			while(yytext[i]!='&' && yytext[i]!=')')
			{
			//	printf("Condition matched\n");
				condition[j]=yytext[i];
				i++;
				j++;
			}
			if(yytext[i]==')')
			{
				countIfcond++;
				printf("if(%s)\n{",condition);
			}
			else{
			i=i+2;
			countIfcond++;
			printf("if(%s)\n{",condition);
			}
			for(k=0;k<j;k++)
			{
			condition[k]='\0';	
			}
		}
		}
	

\{.*		{	
			i=0;
			while(yytext[i]!='}')
			{
			    printf("%c",yytext[i]);
			}
		}

\}		{
			
			for(k=0;k<countIfcond;k++)
			{
				printf(" } \n");
			}
		}
%%

		
 		








