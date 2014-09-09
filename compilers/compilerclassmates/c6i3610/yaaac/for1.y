%token FOR  OPNPAR CLOSEPAR OBRAC CLOSEBRAC SEMI ID DIGIT EQ RELOP INC DEC COMMA
%{
void yyerror(char *);
%}
%%
program:FOR OPNPAR E1 SEMI E2 SEMI E3 CLOSEPAR { printf("syntax correct");
}
|FOR OPNPAR E1 COMMA E1 SEMI E2 COMMA E2 SEMI E3 COMMA E3 CLOSEPAR {printf("SYNTAX CORRECT");}
|;
E1:ID EQ ID
|ID EQ DIGIT
|;
E2:ID RELOP ID
|ID RELOP DIGIT
|;
E3:ID INC
|ID DEC
|;
%%
void yyerror(char *s)
{
printf("error");
}
int main()
{
yyparse();
return;
}

