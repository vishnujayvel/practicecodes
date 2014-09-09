%{
	char init[20],cond[20],incr[20], body[20],p;
        int first=0,i=0,j=0,k=0,l=0;
%}

%%

(for\()         {
                        if(first) init[i++]=',';
                        while((p=input())!=';')
                                init[i++]=p;
                        if(first)
                        {
                                cond[j++]='&';
                                cond[j++]='&';
                        }
                        while((p=input())!=';')
                                cond[j++]=p;
                        if(first) incr[k++]=',';
                        while((p=input())!=')')
                                incr[k++]=p;
                        first++;
                }
[{}]            ;
[ \t]           ;
.               body[l++]=yytext[0];

%%

main()
{
        yylex();
        init[i]='\0';
        cond[j]='\0';
        incr[k]='\0';
        body[l]='\0';
        printf("for(%s; %s; %s)\n{%s}\n",init,cond,incr,body);
}
