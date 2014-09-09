%{
#include<unistd.h>
#include<sys/types.h>
#include<fcntl.h>
 char str[100];
 void func();
int fp;
%}

%%

for(.)*  { strcpy(str,yytext); func(); }
(\()(.)*((;)|(\))) ;// printf("%s\n",yytext);
. ;
%%

main()
{
 fp=open("ans.txt",O_WRONLY);
 yylex();
 return 0;
}

void func()
{
 
 int i=0;
 int l=strlen(str);
  for(i=4;str[i]!=';';i++)
  {
     write(fp,(char *)str[i],1);
  }
 i++; 
 write(fp,'\n',1);
 char t[500; strcpy(t,"while(");
write(fp,t,sizeof(t);

 for(;str[i]!=';';i++)
 {
  write(fp,str[i],1);
 }
i++;
 
 write(fp,')',1);
 write(fp,'\n',1);
}
