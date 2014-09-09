


nl [\n]
%{
        int i,j,k;
        char funname[25];
%}
%%

void\ .*\(.*\)\{(.|{nl})*\} {
                for(i=0;i<25;i++)
                        funname[i]='\0';
                printf("#define");
                char c=yytext[0];
                i=0;
                j=0;
                while(c!=' '){
                        i++;
                        c=yytext[i];
                }
                while(c!='('){
                        i++;
                        funname[j]=c;
                        j++;
                        c=yytext[i];
                }
                printf("%s(",funname);
                i++;
                c=yytext[i];
                while(c!='{'){
                        //if(c!='{'&&c!='}'&&c!='\n')
                        printf("%c",c);
                        i++;
                        c=yytext[i];
                }
                i++;
                c=yytext[i];
                while(c!='\n'){
                        i++;
                        c=yytext[i];
                }
                i++;
                c=yytext[i];
                while(c!='}'){
                        i++;
                        if(c!='\n'&&c!=';')
                        printf("%c",c);
                        c=yytext[i];
                }
        }
%%
int yywrap(){
        return 1;
}
int main(){
        yylex();
        return 0;
}
