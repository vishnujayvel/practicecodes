%{
int charcount=0,linecount=0,alpha=0;
%}
letter [a-zA-Z]
%%
[a-z] alpha++;
.  charcount++;
\n linecount++;
%%
int main()
{
yylex();
printf("There were %d characters in %d lines\n",
charcount,linecount);
printf("number of lower case letters-%d",alpha); 
return 0;
}
