%{
#include<string.h>
char a[100],b[100];
char arr[100][100];
int i,j,k=0,l=0,flag;
%}
sp [ \n\t]
%%
#define{sp}([A-Za-z0-9])*("("([A-Za-z0-9,])*")")*{sp}([A-Za-z0-9,*+/=?:->])* {
j=0;
flag=0;
fwrite("int ",strlen("int "),1,yyout);
for(i=8;i<yyleng;i++)
{
        a[j++]=yytext[i];
        if(yytext[i]=='('){
                flag=1;
                a[j]='\0';
                j=0;
                fwrite(a,strlen(a),1,yyout);
                break;
        }
        else if(yytext[i]==' '){
                break;
        }
}
if(flag==0){
        j--;
        a[j]='\0';
        strcpy(arr[l++],a);
        a[j++]='(';
        printf("%s\n",arr[l-1]);
        a[j++]=')';
        a[j]='\0';
        j=0;
        fwrite(a,strlen(a),1,yyout);
}
else{
        i++;
        for(;i<yyleng;i++)
        {
                a[j++]=yytext[i];
                if(yytext[i]==','){
                        fwrite("int ",strlen("int "),1,yyout);
                        a[j]='\0';
                        j=0;
                        fwrite(a,strlen(a),1,yyout);
                }
                else if(yytext[i]==')'){
                        fwrite("int ",strlen("int "),1,yyout);
                        a[j]='\0';
                        j=0;
                        fwrite(a,strlen(a),1,yyout);
                        break;
                }
        }
}
fwrite("{\n",strlen("{\n"),1,yyout);
fwrite("return ",strlen("return "),1,yyout);
i++;
j=0;
for(;i<yyleng;i++)
        a[j++]=yytext[i];
a[j++]=';';
a[j++]='\n';
a[j++]='}';
a[j++]='\n';
a[j]='\0';
fwrite(a,strlen(a),1,yyout);
}
. {
flag=0;
b[k++]=yytext[yyleng-1];
if(yytext[yyleng-1]==' ' || yytext[yyleng-1]==';' || yytext[yyleng-1]==']' || yytext[yyleng-1]=='[' || yytext[yyleng-1]=='(' || yytext[yyleng-1]==')' ||  yytext[yyleng-1]=='\n'){
        k--;
        b[k]='\0';
        printf("\n %s",b);
        for(i=0;i<l;i++)
        {
                if(strcmp(arr[i],b)==0){
                flag=1;
                printf("\n Matched!");
                break;

                }
        }
        if(flag==1){
        b[k++]='(';
        b[k++]=')';
        }
        b[k++]=yytext[yyleng-1];
        b[k]='\0';
        k=0;
        fwrite(b,strlen(b),1,yyout);
}
}
%%
int yywrap(){
        return 1;
}
int main(){
        yyin = fopen("mac.c","r");
        yyout = fopen("func.c","w");
        yylex();
        return 0;
}
