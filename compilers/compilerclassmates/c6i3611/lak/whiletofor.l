%{
char b[100],b1[100],b2[100],c,ch,a[100];
int i,j;
%}
%%
(.*)wh   {      i=0;
                while(yytext[i]!='w')
                 {
                    b[i++]=yytext[i];
                 }
           } 
(while\()   {  printf("for(;");
               c=input();
              while(c!=')') 
               {
                  b1[i++]=c;
                  c=input();
               }
              printf("%s",b);
              printf("%s",b1); 
              printf(";)");   
              ch=b1[0];
}
.     {  
        c=input(); 
          if(c==ch) 
           {
              c=input();
              if(c=='+'||c=='-'||c=='*'||c=='/')
               {
                 b2[0]=ch;
                 b2[1]=c;
                 c=input();
                 i=2; 
                 while(c!=';')
                  {
                   b2[i++]=c;
                   c=input();  
               }
              printf("%s",b2);
                }
               else 
                 ECHO; 
           
            }
           else
              ECHO;
        }
      
        
\n ECHO;


%%
void main()
{
   yylex();
}
