
%token FOR OPBR CLBR SC EQ RELOP INC DEC ID DIGIT OCB CCB SP
%{
void yyerror(char *);
int yylex(void);
%}
%%
program: FOR OPBR E1 SC E2 SC E3 CLBR { printf(" Correct input!");}
E1: ID EQ ID
|ID EQ DIGIT
|; 
E2: ID RELOP ID
|ID RELOP DIGIT
|;
E3: ID INC
|ID DEC
|; 
%%
void yyerror(char *s) {
printf("%s\n",s);
}

int main()
{
yyparse();
return 1;

}
