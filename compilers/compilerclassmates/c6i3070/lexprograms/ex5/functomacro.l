%{
        char define_statement[]="#define",return_statement[]="return";
        char res[100];
        int i=0,j=0;
        char cur;
        int has_seen=0,space_seen=0;
%}
%%
"int"|"float"|"void" {if(!has_seen){
        has_seen=1;
        i=0,j=0;
        while(define_statement[j]!='\0')
                res[i++]=define_statement[j++];
        cur=input();
        while(cur!='(')
                res[i++]=cur,cur=input();
        res[i++]='(';
        cur=input();
        space_seen=0;
        while(cur!=')')
        {
                if(cur==' ')
                        space_seen=1;
            else if(cur==',')
                        res[i++]=',',space_seen=0;
                else if(space_seen)
                        res[i++]=cur;
                cur=input();
        }
        res[i++]=')';
        while(cur!='{')
                cur=input();
        cur=input();
        res[i++]=' ';

        j=0;
        while(j<6)
        {
                if(cur==return_statement[j]) j++;
                cur=input();
        }

        while(cur!=';')
        {

                if(cur!='\n' && cur!='}')
                        res[i++]=cur;
                cur=input();
        }
        res[i]='\0';
        printf("%s",res);
      }}
"\n}" ;
%%
main()
{
        yylex();
}

