%{
char buff[50],c,name[50],c1;
int i;
%}
%%
(#define) {
            printf("void* ");  
            c=input();
            c=input();
            i=0;
            while(c!='(')
            {
              name[i++]=c;
               c=input();
            } 
         printf("%s",name);
         
         
         i=0;
         if(c=='(')
          {   printf("(");
              c=input();
              if(c!=')')
              {
              printf("void* ");
              } 
           }
               
             while(c!=')') 
              {
                  if(c==',')
                   printf(",void* "); 
                 else
                    printf("%c",c);
                    c=input();
              }
               printf(")");
           

/*         while(c!='')
          {
             if(c1=input())
 
             buff[i++]=c;
             c=input();  
  }
        printf("%s",buff);    
        c=input();
        while(c=input())
        {
          
     } */    
}
['\\'] yyless(1);
. ECHO;/*{
    i=0;
    while(1)
   { 
    
    c=input();
    c1=input(); 
    buff[i++]=c;
    buff[i++]=c1;
   if(c==';'&& c1!='\')
    {*/     
%%
void main()
{
   yylex();
  
}     
