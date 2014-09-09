%{
	#include<string.h>
	#include<stdio.h>
        int i=0,flag=0;
        int j=0;
        char id[10][10];
        char keyword[10][10]={"while","for","int","if"};
%}
%%
[a-zA-Z]([a-zA-Z0-9'_'])* {
                                for(i=0;i<10;i++)
                                {
                                        if(!strcmp(keyword[i],yytext))
                                        {
                                                flag=1;
                                                printf("%s :keyword: ",yytext);
                                                break;
                                        }
                                }
                                if(flag==1)
                                {
                                        flag=0;
                                }
                                else
				{
                                	for(i=0;i<10;i++)
                                	{
                                        	if(!strcmp(id[i],yytext))
                                        	{
                                        		printf("%s :id%d: ",yytext,i); flag=1;  break;
                                        	}	
                                	}
                                	if(flag==1){flag=0;}
                                	else
					{
                                		strcpy(id[j],yytext);
                                		printf("%s :id%d: ",yytext,j);
                                		j++;
                                	}	
                                 }
                        }
['&']['&']      { printf("%s :operator: ",yytext); }
['|']['|']      { printf("%s :operator: ",yytext); }
[;]     {printf("%s :delimiter: ",yytext); }
['+''-''*''/''%''>''<''<=''>=''!=''==''{''}''('')']   { printf("%c :operator: ",yytext[0]);}
%%
int main()
{
        yylex();
}
