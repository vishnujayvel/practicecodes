%{
 #include<stdio.h>
%}

%token KEY
%token RELOP
%token LOGIC
%token ID
%token NUM
%token OTHER
%token OB
%token CB
%token OCB
%token CCB

%%
start:
   KEY OB cond CB OCB CCB { printf("correct!\n"); }
cond:
   ID RELOP NUM
    | OB cond CB RELOP OB cond CB
    | NUM
    ;
%%
int yyerror(){
  printf("Incorrect ! \n");
  return 0;
}
main(){
  yyparse();
}

