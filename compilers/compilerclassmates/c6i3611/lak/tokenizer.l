%{
%}
keywords for|while|if|else|elseif|switch|default|case|break|continue|default|return|#include|#define|struct|main|printf
datatypes int|float|char|double|void|long|short|longint|shortint
operators [-|+|*|/|?:|%|\(|\)|\{|\}|\[|\]|\+\+|\-\-|,]
format ["|']
relop <|>|<=|>=|!=|==|!=
logical &&|&
identifier [a-zA-Z]+[0-9]*[_]*
num [0-9]*
unary ++|--
%%
{keywords} {
           printf("Keyword=%s \n",yytext);
            }
{datatypes} {
            printf("Datatypes=%s \n",yytext);
          }
{operators} {
            printf("Operator=%s \n",yytext);
           }
{relop}  {
         printf("Relop=%s \n",yytext);
       }
{logical} {
           printf("Logical operator=%s \n",yytext);
       }
{format} printf("Format specifier=%s \n",yytext);
= {
     printf("\n Assignment operator=%s \n",yytext);
  }
{identifier} printf("Identifier=%s \n",yytext);
{num} printf("Num=%s \n",yytext);
; printf("Delimiter=%s \n",yytext);
[ \n\t] ;
({datatypes}[ ]{identifier}(\(\))) printf("Function=%s \n",yytext); 
%%
void main()
{ 
  yylex();
}    
