%{
	#include<string.h>
	char str[20];
	int i=0;
	int j=0;
	int flag=1;
	int len=0;
%}
bracket [/(/)]
var [a-zA-Z0-9]
op [/\/*=/+/-]
num [0-9]
%%
for{bracket}{var}{op}{num};{var}{op}{num};{var}{op}{op}{bracket} {	
			yyout=fopen("convout.txt","a");
			j=4;
			while(flag!=0)
			{
				str[i]=yytext[j];
                                i++;
                                j++;

				if(yytext[j]==';')
				{
					flag=0;
				}
			}
			flag=1;
			len=strlen(str);
			fwrite(str,len,1,yyout);
			fwrite("\nwhile(",6,1,yyout);
			i=0;
			while(flag!=0)
                        {
                                str[i]=yytext[j];
                                i++;
                                j++;

                                if(yytext[j]==';')
                                {
                                        flag=0;
                                }
                        }
			flag=1;
                        len=strlen(str);
                        fwrite(str,len,1,yyout);
                        fwrite("}\n{",6,1,yyout);
                        i=0;

			
			
	
