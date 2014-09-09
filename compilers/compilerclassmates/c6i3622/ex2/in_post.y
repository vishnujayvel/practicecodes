%{
 #include<stdio.h>
 #include<ctype.h>
 #define YYSTYPE char
 int f=0;
%}

%token id err
%left '-''+'
%left '*''/'

%%
input :
   input e {}
  | error { f=1 ; }
  ;

e : e '+' e { printf("+"); }
  | e '-' e { printf("-"); }
  | e '*' e { printf("*"); }
  |e '/' e { printf("/"); }
 | id {printf("%c",yylval);}

%%

main()
{
  printf("Enter an exp\n");
 yyparse();
  if(f)
   printf("Error");
  return 0;
}

int yyerror(char *m)
{
 return 0;
}

