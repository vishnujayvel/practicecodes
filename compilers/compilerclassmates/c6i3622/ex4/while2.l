%{
void form();
  i
int i;
  char ini[20],test[30],body[50],inc[30];
  
%}


%%

(.|\n)*while\( { printf("%s\n\n",yytext);
		for(i=0;i<yyleng-6;i++)
		{
			ini[i]=yytext[i];
		//	printf("%c",yytext[i]);
		}	
 
	printf("ini %s\n",ini);
		yyless(yyleng-1);	
		 }

\(.+\) { printf("%s",yytext); 

	for(i=1;i<yyleng-1;i++)
    	test[i-1]=yytext[i]; 
	printf("test %s\n",test);
	}

\{(.|\n)*\} { strcpy(body,yytext); printf("%s",yytext);}


. ;

%%
main()
{
 yylex();
printf("FOR LOOP\n");
 form();
}

void form()
{
 
 
int j,p1,p2;
 printf("for(");

for(i=0;ini[i]!='\0';i++)
 {
   if(ini[i]==';' && ini[i+2]!='\0')
   { printf(",");}
   else if(ini[i]=='\n')
 	;
   else
     printf("%c",ini[i]); 
 }

 printf("%s",test);
printf(";)\n");
/*
//inc
 i=strlen(body-1);

 while(body[i]!=';') i--;

p2=i;
i--;

while(body[i]!=';') i--;
p1=i+1;
 j=p1;

while(p1-1!=p2){
 printf("%c",body[p1]); p1++;}
 
printf(")\n");
//inc
*/


//for
printf("%s",body);
 


}
