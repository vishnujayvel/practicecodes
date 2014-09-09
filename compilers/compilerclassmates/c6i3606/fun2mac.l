%{
int funcfound=0;
        int i,j;
        int space=0;
        int k;
%}
%%
([a-zA-Z])+[' ']([a-zA-Z0-9])+['('] {
                printf("#define ");
                for(i=0;i<yyleng;i++)
                {
                        if(yytext[i]==' ')
                        {space=1;
                        i++;
                        }
                        if(space)
                        {
                                if(yytext[i]=='('){
                                break;
                                }
                                printf("%c",yytext[i]);
                        }
                }
 funcfound=1;
                }
([a-zA-Z' '','])+[')']  { if(funcfound){
                                space=0;
                                printf("(");
                                for(k=0;k<yyleng;k++)
                                {
                                        if(yytext[k]==' ')
                                        { space=1; }
                                        if(space && yytext[k]!=','){printf("%c",yytext[k]);}
                                        if(yytext[k]==','){space=0;printf("%c",yytext[k]);}
                                }
                        }
                }
['\n']  {       if(funcfound){ printf("\\%c",yytext[0]);}else{printf("\n");}    }
return[' ']     {}
%%
main()
{
	yylex();
}
 
