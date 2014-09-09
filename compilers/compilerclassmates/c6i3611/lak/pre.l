%{
 char s[50];
 int top=-1;
 void push(char);
%}
%%
[-+*/] push(yytext[0]);
[a-z] {
         printf("%c%c",yytext[0],s[top--]);
       }
    
%%
void push(char c)
{
 s[++top]=c;
} 
void main()
{
   yylex();
}   
