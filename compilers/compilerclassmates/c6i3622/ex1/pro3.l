%{
  int count=0,s=0,c=0,k=0;
  char buf[100];
  void func(char cha[]);
%}

small [a-z]
caps [A-Z]
notachar [ \t\n,.;:!]

%%

{small} { s=1; func(yytext); }
{caps} { c=1; func(yytext); }

{notachar} { buf[k]='\0'; 
          if(c==1&&s==1){printf("%s\n",buf); count++; }
           c=0; s=0; k=0;
           } 

%%

main()
{
  yylex();
  printf("No of mixed case words %d\n",count);
}
void func(char cha[])
{
 buf[k++]=cha[0];
}
