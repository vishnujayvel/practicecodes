%{
 
	int count=0;
%}
letter1 [ \t\n]
letter2 [a-z]
%%
^[kK]{letter2}* {count++; printf("%s",yytext);}
.	{;}
%%
int yywrap(){
	return 1;
}

int main(){
   yylex();
  printf("the number of words is %d:",count);
  return 0;
}
