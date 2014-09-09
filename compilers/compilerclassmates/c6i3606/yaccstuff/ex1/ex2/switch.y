%{
	#include<stdio.h>
        int yylex();
        void yyerror(char *);
%}
%token CASE SWITCH COND OB CB RELOP DEFAULT INT COLON
%%
/*ca: CASE INT COLON    {}
        | ca    {printf("switch found");}
        ;
de: DEFAULT COLON       {}
        ;
condn:OB INT CB         {}
        | OB COND CB    {}
        ;*/
expr:SWITCH     {printf("accepted");}
        |expr OB INT CB         {printf("conditionfound");}
        |expr OB COND RELOP COND CB     {printf("condn found");}
        |expr CASE INT COLON    {printf("case found");}
        |expr DEFAULT COLON     {printf("default found");}
        ;
%%
void main()
{
        yyparse();
}
void yyerror(char *s)
{
        fprintf(stderr,"%s\n",s);
}

