%{
	int count=0;
%}
v [aeiou]
c [b-df-hj-np-tv-z]
%%
[ \t\n]({c})*{v}({c})*{v}({c}|{v})* { count++; ECHO; }
. {;}
%%
int yywrap(){
 return 1;
}
main(){
 yylex();
 printf("count %d",count);
}

