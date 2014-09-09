%{
        int first=0,i=0,j=0;
        char cond[20],p,body[20];
%}

%%

"if("   {
                if(first)
                {
                        cond[i++]='&';
                        cond[i++]='&';
                }
                while((p=input())!=')')
                        cond[i++]=p;
                first++;
        }
[{}]    ;
[ \t]   ;
.       body[j++]=yytext[0];

%%

main()
{
        yylex();
        printf("if(%s){%s}\n",cond,body);
}

