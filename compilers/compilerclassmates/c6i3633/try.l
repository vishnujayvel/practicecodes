alpha [a-zA-Z]
sp [ \t\n]
all [,./a-zA-Z\t\n {}\(\)\+\-"'%*!#@$^&\[\];:]
num [ 0-9]
id '++'|'--'
comp '<='|'>='|'>'|'<'
%{
	int count=0;
	char match[100];
	int i=0,flag=0;
%}
%%


for\(;;\)\{     { printf("while(1){");
			count=1;
		}
for\(({alpha}*={num}*);({alpha}*(<|>|<=|>=){num}*);({alpha}*(\+\+|\-\-))\)\{      { printf("\n");
									 			count=1;
									 			while(yytext[i]!='(')
									 			i++;	
									 			i++;
												while(yytext[i]!=';')
												{ 
													printf("%c",yytext[i]);
													i++;
												}
												i++;
												printf("\nwhile(");
									
												 while(yytext[i]!=';')
                                                                        			{
                                                                                			printf("%c",yytext[i]);
                                                                                			i++;
                                                                        			}
												i++;
												printf("){");
												while(yytext[i]!=')')
					                               				{
													 match[flag]=yytext[i];
									 				 flag++;
									 				 i++;
												}
												match[flag]='\0';
											   }	

	

. 			{   if(count!=0)
			    {
				
				if(yytext[0]=='{')
				count++;
				else if(yytext[0]=='}')
				count--;
				if(count!=0)
				ECHO;
				else if(count==0)
				{
					printf("%s",match);
					ECHO;
				}
			 }
				
		      }
				
%%

int yywrap()
{
	return 1;
}
int main()
{
	yylex();
	return 1;
}

