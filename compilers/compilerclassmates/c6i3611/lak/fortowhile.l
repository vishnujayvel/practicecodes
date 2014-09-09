%{
char cbuff[100],tbuff[100],mbuff[100],lbuff[100],final[100],a[]="while";
int c,i,j;
void insert(char);
%}
%%
(for)[\(] { c=input();
         while(c!=';')
         {
             tbuff[i++]=c;
            c=input();
       }
        c=input();
        i=1;
        mbuff[0]='(';
       while(c!=';')
      {
          mbuff[i++]=c;
          c=input();  
    
      }
     if(mbuff[i]=='\0')
     mbuff[i++]='1'; 
     mbuff[i++]=')';
      c=input();
      i=0; 
      while(c!=')')
      {
          lbuff[i++]=c;
          c=input();

      } 
     i=0;
     
          
      while(tbuff[i]!='\0')
      {
        
      insert(tbuff[i]); 
       
       }
      if(tbuff[0]!='\0')
      {
      insert(';');
      insert('\n');
      }
      while(a[j]!='\0')
       {
        insert(a[j++]);
       }
       j=0;
       if(mbuff[1]=='\0')
       {
          mbuff[1]='1';
       }
       while(mbuff[j]!='\0')
      {

      insert(mbuff[j++]);
       
       }
           
         insert('{');
      j=0;
      if(lbuff[0]!='\0')
      {
      while(lbuff[j]!='\0')
      {

      insert(lbuff[j++]);

       }
     
       
      insert(';');
      }
      c=input();
      j=0; 
      while(c!='}')
      {
       if(c!='{')
       cbuff[j++]=c;
       c=input(); 
       }
        cbuff[j++]='}';
       
       j=0;
   //    printf("%s",cbuff);
       while(cbuff[j]!='\0')
      {

      insert(cbuff[j++]);

       }
       
     }
[\)]  insert('\n'); 
['{'] { c='{';
        insert(c);
       }
. ;
\n ; 
%%
void insert(char b)
{
  final[i++]=b;
} 
void main()
{
  yylex();
  printf("%s",final);
}
