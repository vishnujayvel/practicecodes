%{
int ch=0,op=10,val;
char c[10],b[10];
%}
%%
[a-z] {ECHO;ch++;if(ch>1)
          {
             if(op<10)
              {
               printf("%c",c[op]);
               op++; 
               ch=0;
              }
        }} 
[*] { if(c[op]=='+'|| c[op]=='-')
        {
            c[op--]=c[op];
            c[op]=yytext[0];
         }}
[/] { if(c[op]== '+' || c[op]== '-' || c[op]=='*')
     {
         c[op--]=c[op];
         c[op]=yytext[0];
    }  }
[-+] { if(c[op]=='*' || c[op]=='/')
        { printf("%c",c[op]);
         op--;
         c[op]=yytext[0];}
   } 
[\n] {while(op>=0){ printf("%c",c[op]);op--;}}
%%

main()
{
  yylex();
}


