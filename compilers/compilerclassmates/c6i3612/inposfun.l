%{
int c=0,lc=-1;
char no[10];
int pred(char a);
void push(char a);
void pop();
%}
%%
[a-z] {printf("%c",yytext[0]);}
['+'\-'/''*'] {	
	while(lc>=0&&pred(yytext[0])<pred(no[lc]))
	  pop();
	push(yytext[0]);
	}
['('] 	{
	push('(');
	}
[')'] 	{
	while(lc>=0&&no[lc]!='(')
		pop();
	lc--;
	}
[ \n\t] {while(lc>=0)
		pop();
	printf("\n");
	}
%%      
int pred(char a)
{
switch(a)
{
case '+': return 2;break;
case '-': return 1;break;
case '/': return 4;break;
case '*':return 3;break;
default: return 0;
}
}
void push(char a)
{
no[++lc]=a;
}
void pop()
{
if(lc>=0)
	printf("%c",no[lc--]);
}
int main()
{
yylex();
return 0;
}
