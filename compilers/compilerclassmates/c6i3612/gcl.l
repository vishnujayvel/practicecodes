%{
%}
comment1 \/\*(.\\n)*\*\/
comment2 \/\/.*
%%
{comment1};
{comment2};
.\\n ECHO;
%%
main()
{
yylex();
return 0;
}
