%{
char buff[100],p,wh[]="while(";
int k=0,i=0,ch=0,pres=0;
%}

%%
(for\() {
                p=input();
                while(p!=';')
                {
                        pres++;
                        buff[k++]=p;
                        p=input();
                }
                if(pres>2)
                buff[k++]=p;
                pres=0;
                buff[k++]='\n';
                p=input();
                while(wh[i]!='\0')
                        buff[k++]=wh[i++];
                while(p!=';')
                {
                        pres++;
                        buff[k++]=p;
                        p=input();
                }
                p=input();
                if(pres<2)
                        buff[k++]='1';
                pres=0;
                buff[k++]=')';
                buff[k++]='{';
                buff[k++]='\n';
                while(p!=')')
                {
                        pres++;
                        buff[k++]=p;
                        p=input();
                        }
                if(pres>2)
                buff[k++]=';';
                buff[k++]='\n';
                p=input();
        }
[a-z]   {buff[k++]=yytext[0];}
[-+*/=;]        {buff[k++]=yytext[0];}
[0-9]   {buff[k++]=yytext[0];}
\n      {buff[k++]=yytext[0];}
"}"     {ch++;buff[k++]=yytext[0];}
.       ;
%%


int main()
{
yylex();
if(ch==0)
        buff[k++]='}';
printf("%s",buff);
return 1;
}
