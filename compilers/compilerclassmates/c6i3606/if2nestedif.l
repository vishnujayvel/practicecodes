%{
        int iffound=0;
        int ifcount=0;
%}
%%
if['('] {       iffound=1;
                printf("if(");
        }
['&']['&']      {
                if(iffound)
                {
                ifcount++;
                printf("){\nif(");
                }
                else{printf("%s",yytext);}
        }
['}']   {
                if(iffound)
                {
                        while(ifcount>=0)
                        {
                                printf("}");
                                ifcount--;
                        }
                }
                else{printf("}");}
                }
%%
main()
{
	yylex();
}
