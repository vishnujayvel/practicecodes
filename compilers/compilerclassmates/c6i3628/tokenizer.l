
%{
%}
%%

(int|float|void|char)[ ][a-zA-Z0-9_]*\(.*\)      {

                                        printf("<token=function value=%s>",yytext);

                                        }

[ \n\t] {}
int|float|char    {
                        printf("<token=DATATYPE value=%s>\n",yytext);
                        }
if|else|switch|case|break|for|while|goto|continue|default|return|include        {
                printf("<token=KEYWORD value=%s>\n",yytext);
                        }
\+\+                    {
                        printf("<token=unary operator value=%s>\n",yytext);
                        }
\-\-                    {
                         printf("<token=unary operator value=%s>\n",yytext);
                        }

[a-zA-Z][a-zA-Z_0-9]* {
                        printf("<token=IDENTIFIER value=%s>\n",yytext);
                                }
[-+*/%]                 {
                        printf("<token=operator value=%s>\n",yytext);
                                        }
[=]                     {
                        printf("<token=Assignment operator>\n");
                                        }
>|<=|<=|<=|!=|==  {
                        printf("<token=RELOP value=%s>\n",yytext);
                        }
&&|\|\| {
                        printf("<token=LOGIC operatOR value=%s>\n",yytext);
                        }
[0-9]*                  {
                        printf("<token=num value=%s>\n",yytext);
                        }
;               { printf("<token=delimiter>\n",yytext);
                        }
['('')',{}]                     {
                                 printf("<token=operator value=%s>\n",yytext);
                                }

%%
int main()
{
yylex();
return 0;
}
