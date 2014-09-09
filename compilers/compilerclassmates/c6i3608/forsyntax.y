%token FOR OB SC CB ID EQ DIGIT SP OP INC DEC
%{
        #include <stdio.h>
        int yylex(void);
        void yyerror(char *);
%}

%%

program: FOR OB E1 SC E2 SC E3 CB { printf("Correct\n"); }

E1: ID EQ ID
|    ID EQ DIGIT
|;

E2: ID OP ID
|ID OP DIGIT
|;

E3: ID INC
|ID DEC
|;

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

