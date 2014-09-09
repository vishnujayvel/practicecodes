%{
	int i;
	int j;
	int count=0;
	char ch,val;
	char stack[50];
	char store[50];
%}
%%
switch\([a-z]\)\{  { 
			i=0;
			j=0;
			while(yytext[i]!='(')
			{
				i++;
			}
			while(yytext[i]!=')')
			{
				ch=yytext[i];
				//j++;
				i++;
			}
			//printf("%c==",ch);
		     }

case.*:		{ count++;
			i=0;
			while(yytext[i]!='e')
			{
				i++;
			}
			while(yytext[i]!=':')
			{
			val=yytext[i];
			i++;
			}
			if(count>1)
			{
			printf("else if(%c==%c){",ch,val);
			
			}
			else
			{
			printf("if(%c==%c){",ch,val);	
			}
		}
default: {
		printf("else{");
	}
break;  {
	   printf("}");	}
. 	{ ECHO;
		}
\n 	{ ECHO;}
	
%%
int main()
{
	yylex();
	return 0;
}
