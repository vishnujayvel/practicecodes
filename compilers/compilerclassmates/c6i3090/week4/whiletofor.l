%{
int init_in=0,cond_in=0,incr_in=0;
int i,j,k;
int count=0,count_cond=0,count_brack=0,count_line=0;
char init[10],cond[10],incr[10],specialcase[10];
char p;
%}
%%
[a-z]=[0-9]\;	 {
			init_in=1;
			count++;
			if(count==1)
			{
				
				i=0;
				while(yytext[i]!=';')
				{
				      init[i]=yytext[i];
				      i++;				
				}
				init[i++]=';';
			
			}
		
		}

while\(  	{
				
				 if(count)
				{
					printf("for(%s",init);
				}
		}	

[a-z](<|>)[0-9]\)  	{
				
				count_cond++;
				if(count_cond==1)
				{
					j=0;
					while(yytext[j]!=')')
					{
						cond[j]=yytext[j];
						j++;
					}
					cond[j++]=';';
					printf("%s",cond);
				}
			
			}
\{			{
				count_brack++;
				if(count_brack >1)
				{
					ECHO;
				}
			}

\}		{
			ECHO;
		}
[a-z]=[a-z]\+[0-9]\;	{
				if(count_cond&&init_in)
				{
					k=0;
					while(yytext[k]!=';')
					{
						incr[k]=yytext[k];
						k++;
					}
					printf("%s)\n{",incr);
				}
			
			}
\n 			{	
				count_line++;
				if(count_line>3)
				ECHO;
			} 
