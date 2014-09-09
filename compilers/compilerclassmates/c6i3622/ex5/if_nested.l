%{
 char s[20][40],body[80];
 char str[50],c;
 int i;
 int k=-1,str_index=-1;
 int open1=0,close1=0;
%}

%%

if {
  	c=input();
        c=input();
	while(c!=')')
	{
		if(c=='&')
		{
 			c=input();
			if(c=='&'){
				str[++str_index]='\0';
				strcpy(s[++k],str);
			str_index=-1;
			}	  
		}
		else str[++str_index]=c;
		c=input();
	}
 		str[++str_index]='\0';
		strcpy(s[++k],str);
	for(i=0;i<=k;i++) printf("%s\n",s[i]);		
	} 
   
\{(.|\n)*\} strcpy(body,yytext);

%%

int main()
{
 yylex();
 for(i=0;i<=k;i++)
 {
   printf("if(%s)\n{\n",s[i]);
 }
 for(i=1;i<strlen(body)-1;i++)
 printf("%c",body[i]);
 for(i=0;i<=k;i++)
 printf("}\n");
 return 0;
}
