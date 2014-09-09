%{
 int top=-1;
 char s[50];
 int k=0;
 void push(char);
 char pop();
 int prec(char);
 
%}
%%
[a-z] {
        printf("%c",yytext[0]);
       } 
[-+*/] {
         if(prec(s[top])>prec(yytext[0]))
          {
           printf("%c",pop());
          }
          push(yytext[0]);
       }
[\(]  { 
        push(yytext[0]);
        
      }
[\)]  {
         while((top>-1)&&(s[top]!='('))
           {
            printf("%c",pop());
           }
          pop();
      }
\n {
       while((top>-1))
           {
            printf("%c",pop());
           }
          printf("\n");
}
%% 
void push(char c)
{
  top++;
  s[top]=c;
}   

char  pop()
{
 return s[top--];
 } 

int prec(char c)
{
   switch(c)
   {
       case '+': return 1;break;

        case '-': return 2;break;
       
        case '*': return 3;break;
       
         case '/': return 4;break;
           
         case '(': return 0;break;
      default: return 0;
   }
}

void main()
{
  yylex();
} 
                 
