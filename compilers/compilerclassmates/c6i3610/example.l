%{
int charcount=0,linecount=0,acount=0;
%}
%%
. charcount++;
\n {linecount++; charcount++;}
" "/"a" {acount++;ECHO;}
%%
int main()
{
yylex();
printf("There were %d characters in %d lines\n",
charcount,linecount);
printf("There were %d words starting with'a'",acount);
return 0;
}
