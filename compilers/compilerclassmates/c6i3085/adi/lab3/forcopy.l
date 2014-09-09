
%{
        #include<string.h>
        int i,j,k,len,flag,f,l,m;
        int while_in=0,bool_in=0,init_in=0,incr_in=0;
        char stack[50];
%}

%%
for\(.*\)   {		i=4;
			flag=1;
			f=0;
                        while(flag=1)
                        {
				if(yytext[i]==';')
				{
					flag=0;
					break;
				}
				f=1;
                                printf("%c",yytext[i]);
                                i++;
                        }
                        if(f==1){printf(";");}
                       	printf("\nwhile(");
                        
			j=i+1;
                        while(yytext[j]!=';')
                        {
				printf("%c",yytext[j]);
                                j++;
                        }
                        printf(")");
                       
			l=0;
			for(k=j+1;k<yyleng;k++)
			{
				stack[l]=yytext[k];
				l++;
			}
	//	printf("%s",yytext);
                                //if(while_in&&init_in&&bool_in)
                                
                                  //      i=0;
                                //      while(yytext[i]!=')')
                                //      {
                  //                              strcpy(stack,yytext[j]);
                                                //stack[i]=yytext[i];
                       len=strlen(stack);
		//	printf("this%sis",stack);
                                //      }
	}
.*\}    {//	printf("%s",yytext);
                i=0;j=0;
                while(yytext[i]!='}')
                {
                       // if(yytext[i]!='{')
                       // {
                        printf("%c",yytext[i]);
                        i++;
                       // }
                }
		if(len>=1)
		{
                len=len-1;
                stack[len]=';';
                printf("%s\n",stack);
		}
                printf("}\n");
		
        }
%%
int yywrap()
{
        return 1;
}
int main()
{
        yylex();
        return 0;
}


