

ge >9=
le <=
gt >
nl [\n\t]
lt <
eq ==
%{
        char exprone[10],exprtwo[10],exprthree[10],stack[50];
        int i,j,k;
        int while_exists=0,assign_set=0,bool_set=0,incr_set=0;
        int everything_else=0;
%}
%%
for\(.*\)\{({nl}|.)* {
                char c=yytext[0];
                i=0;
                j=0;
                while(c!='('){
                        i++;
                        c=yytext[i];
                }
                i++;
                while(c!=';'&&i<yyleng){
                        c=yytext[i];
                        exprone[j]=c;
                        j++;
                        i++;
                }
                j=0;
                c=yytext[i];
                while(c!=';'&&i<yyleng){
                        exprtwo[j]=c;
                        j++;
                        i++;
                        c=yytext[i];
                }
                if(j==0)
                exprtwo[j]='1';
                printf("%s\nwhile(%s){",exprone,exprtwo);
                i++;
                c=yytext[i];
                j=0;
                while(c!=')'&&i<yyleng){
                        exprthree[j]=c;
                        j++;
                        i++;
                        c=yytext[i];
                }
                i--;
                while(c!='{'&&i<yyleng){
                //      printf("in loop char is %c\n",c);
                        i++;
                        c=yytext[i];
                }
                i++;
                while(i<yyleng){
                //      printf("in loop\n");
                        c=yytext[i];
                        if(c!='}')
                        printf("%c",c);
                        i++;
                }
                printf("\n%s;\n}\n",exprthree);
        }

%%
int yywrap(){
        return 1;
}
int main(){
        yylex();
        return 0;
}


