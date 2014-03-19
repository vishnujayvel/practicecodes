%{
int count=0;
%}
v [aeiou]
c [b-df-hj-np-tv-z]
%%
[ \n\t]({c})*{v}+({c})*({v})+({c}|{v})* {count++; ECHO;}
. {;}
%%
int yywrap(){
	return 1;
}
int main()
{
printf("\n Enter the text : ");
yylex();
printf("\n The count is %d",count);
return 0;
}
