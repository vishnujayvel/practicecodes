%{
        #include<string.h>
        int i,j,k,len;
        int while_in=0,bool_in=0,init_in=0,incr_in=0;
        char stack[50];
%}

%%
for\(   { while_in=1; }
[a-z]=[0-9]\;   {       		if(while_in)
                        {
                                i=0;
                                while(yytext[i]!=';')
                                {
                                        printf("%c",yytext[i]);
                                        i++;
                                }
                                printf(";");
                                printf("\nwhile(");
                                init_in=1;
                        }
      }
[a-z](>|<)[0-9]\;       {       if(while_in&&init_in)
                                {
                                        j=0;
                                        while(yytext[j]!=';')
                                        {
                                                printf("%c",yytext[j]);
                                                j++;
                                        }
                                        printf(")");
                                        bool_in=1;
                                }
                        }
[a-z]=[a-z]\+[0-9]\)    {
                                if(while_in&&init_in&&bool_in)
                                {
                                        i=0;
                                //      while(yytext[i]!=')')
                                //      {
                                                strcpy(stack,yytext);
                                                //stack[i]=yytext[i];
                                        len=yyleng;
                                //      }
                                }
                        }
.*\}    {
                i=0;j=0;
                while(yytext[i]!='}')
                {
                        if(yytext[i]!='{')
                        {
                        printf("%c",yytext[i]);
                        i++;
                        }
                }
                len=len-1;
                stack[len]=';';
                printf("%s\n",stack);
                printf("}\n");
        }
%%
int yywrap()
{
        return 1;
}
int main()
{
        yylex();
        return 0;
}

