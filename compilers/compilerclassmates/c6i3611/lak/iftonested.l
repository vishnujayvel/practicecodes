%{
char c;
%}
%%
(if\()  { ECHO;
      c=input();
      
      while(c!='{')
     {
      printf("%c",c);
      c=input(); 
      if(c=='&') 
      {
        printf(")\n");   
       c=input();  
    printf("if(");  
      c=input();
       
       while(c!=')')
        {
          if(c=='&')
      {
        printf(")\n");
       c=input();
    printf("if(");
    c=input();
      }
       
          printf("%c",c);
          c=input();
         }
        }
        
     /*  else if(c=='|')
        {
     printf(")\n{\n");
     
       c=input();
         printf("else if"); 
        c=input();
       while(c!=')')
        {
          printf("%c",c);
          c=input();
         }

     }
  }*/
}
  printf("%c",c);
}
. ECHO;
[ \n\t] ECHO;
%%
void main()
{
   yylex();
}
                     
