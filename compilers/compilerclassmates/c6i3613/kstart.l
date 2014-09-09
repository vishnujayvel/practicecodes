%{
int count=0;
%}

%%
^[kK]([a-zA-Z])*	{count++;ECHO;};	
[ \t]([kK])([a-zA-Z0-9])*	{count++;ECHO;}
.	|
\n	;
%%

main()
{
yylex();
printf("kcount=%d",count);
return 1;
}
