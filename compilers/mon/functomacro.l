%{
	#include<stdio.h>
	char funcbody[100],funcname[100],funcreturn[100];
	int i,j,k;
%}
%%
.*\( {
          i=0;
	  j=0;
	  while(yytext[i]!='(')
	    funcname[j++]=yytext[i++];
	   funcname[j]='\0';
         printf("#define %s ",funcname);   
   }
\{.*\} { 
         
          i=1;
          j=0;
          while(yytext[i]!='}'){
            funcbody[j++]=yytext[i++];
       //     printf("echo %c",yytext[i]);
	   funcbody[j]='\0';  
        
	}
         printf("%s",funcbody);
     }
\)  ;
%%
main(){
   yylex();
   printf("#define %s %s",funcname,funcbody);
}

