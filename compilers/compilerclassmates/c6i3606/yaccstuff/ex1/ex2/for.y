%token FOR OB SC CB ID NUM RELOP EQ INC DEC

%{
        int yylex(void);
        void yyerror(char *);
        #include<stdio.h>
%}
%%

program:
        FOR OB E1 SC E2 SC E3 CB {printf("Correct!\n");}
        ;
E1:
        ID EQ ID
        | ID EQ NUM
        | ;
E2:
        ID RELOP ID
        | ID RELOP NUM
        | ;
E3:
        ID INC
        | ID DEC
        | ;
%%
int main()
{
	yyparse();
	return 0;
}
void yyerror(char *s)
{
	printf("%s\n", s);
}
