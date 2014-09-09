%{
 char temp1[100],c,temp[100];
int i,j,k;
%}
%%
(switch\()  {
              
             c=input(); 
            while(c!=')')
             {
             
                temp[i++]=c;
                 c=input();
            }
            while(input()!='{');
            }
(case)    {       if(k==0)
                    printf("if(");
                  else
                     printf("else if(");
                    k++;
                    printf("%s",temp);
                    printf("==");
                    c=input(); 
                    c=input();
                    j=0;
                    while(c!=':')
                      {
                        temp1[j++]=c;
                          c=input();
                  }
                   printf("%s",temp1);  
                   printf(")\n{\n");
                      c=input();
 
                      
             } 
(default:)  {    printf("else\n{\n");}
                       
(break;)  printf("\n}");
. ECHO;        
[ \n] ECHO ;  
{ yyless(1);
} yyless(1); 
%%
void main()
{
  yylex();
}
