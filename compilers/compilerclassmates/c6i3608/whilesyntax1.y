%token WHILE OB SC CB ID EQ DIGIT SP OP INC DEC SP
%{
        #include <stdio.h>
        int yylex(void);
        void yyerror(char *);
%}

%%

program: WHILE OB E1  CB { printf("Correct\n"); }


E1: ID OP ID
|ID OP DIGIT
|DIGIT
|ID INC
|ID DEC
%%

void yyerror(char *s)
{
        printf("%s\n", s);
}

int main()
{
        yyparse();
        return 0;
}


