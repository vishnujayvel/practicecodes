%{
int text=0,op=10,i=10;
char c[10];
%}

%%
[a-z] {ECHO;}
[-+*/] {if(op!=10){
		if((yytext[0]=='*'|| yytext[0]=='/')&&(c[op]=='+' || c[op]=='-')){
				op--;
				c[op]=yytext[0];
				}
		else{
			while(op<10){printf("%c",c[op]);op++;}
			op--;
			c[op]=yytext[0];	
			}
			}
	else{
			op--;
			c[op]=yytext[0];
			
}		
		
		}
\n	{while(op<10){printf("%c",c[op]);op++;}}

%%

int main()
{
yylex();
return;
}
