
alpha [a-zA-Z]
sp [ \t\n]
all [,./\t\n {}\(\)\+\-"'%*!#@$^&\[\];\:]
num [0-9]
%{
	int i=0;
	char var[100];
	int count=0;
	int ifdone=0;
	int flag=0;
%}

%%
switch\(({alpha}|{all}|{num})*\)\{  { for(i=0;yytext[i]!='(';i++)
				    {  }
				    i++;
			            while(yytext[i]!=')')
				   {
                                       var[count]=yytext[i];
					count++;
					i++;
				   }
				   var[count]='\0';
				   i=0;
				   count=0;	
				}
			 
case{sp}({num}|{alpha})*:.* /*({alpha}|{num})**/	                { 
					i=0;
				    count=0;
	//				printf("in case");	
				   while(yytext[i]!=' ')
				   {i++;}
				   i++;
				   if(ifdone==0)
				  {
                                  	 printf("if(");
					printf("i");
                                        // printf("%s",var);
                                         printf("==");
                                         while(yytext[i]!=':')
                                        {
                                         printf("%c",yytext[i]);
                                        i++;
                                        }
                                         printf(")");
                                         printf("\n{\n");
                                         i++;
                                        while(yytext[i]!='\0')
                                        {printf("%c",yytext[i]);
                                          i++;
                                        }
                                         printf("\n}\n");
                                        ifdone=1;
					flag=1;
					break;
                                         
				}
				if(ifdone==1)
				{
					printf("else if(");
					printf("i");
				//	printf("%s",var);
					printf("==");
					
					while(yytext[i]!=':')
                                        {
                                         printf("%c",yytext[i]);
                                        i++;
                                        }
                                         printf(")");
                                         printf("\n{\n");
					flag=1;
                                        i++;
                                        while(yytext[i]!='\0')
                                        {printf("%c",yytext[i]);
                                          i++;
                                        }
                                         printf("\n}\n");
                                }
			}	
default:.*   			{
					i=0;
                                        count=0;
                                //        while(yytext[i]!=' ')
                        //                {i++;}
                          //               i++; 
                                         printf("else");
                                        // printf("%s",var);
                                        // printf("==");
                                         while(yytext[i]!=':')
                                        {
                            //             printf("%c",yytext[i]);
                                        i++;
                                        }
                                        // printf(")");
                                         printf("\n{\n");
                                         i++;
                                        while(yytext[i]!='\0')
                                        {printf("%c",yytext[i]);
                                          i++;
                                        }
                                         printf("\n}\n");
                                       // ifdone=1;

                                }
 .     ;

						 
					  	
%%
int yywrap()
{
        return 1;
}
int main()
{
        yylex();
//	printf("%s",var);
        return 1;
}

				  	

