%{
        int iffound=0,ifcount=0;
%}

%%

"if("           {
                        iffound=1;
                        printf("if(");
                }
['&']['&']      {
                        if(iffound)
                        {
                                printf(")\n{\tif(");
                                ifcount++;
                        }
                }
[\)]\n          {
                        if(iffound)
                        {
                                printf(")\n");
                        }
                }
[\}]            {
                        if(iffound)
                        {
                                while(ifcount>=0)
                                {
                                        printf("}");
                                        ifcount--;
                                }
                        }
                }
.               ECHO;
%%

main()
{
        yylex();
}
	
