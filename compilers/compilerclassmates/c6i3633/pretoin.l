alpha [a-zA-Z0-9]
opr "+"|"-"|"/"|"*"
nl "\n"

%{
	char stack[100];int front=-1;
%}

%%

{opr} { front++;
	stack[front]=yytext[0];
	}

{alpha} { ECHO;
	 if(front!=-1)
	{
		printf("%c",stack[front]);
		front--;
	}
	}
nl ;
. ;
%%

int yywrap()
{
	return 1;
}
int main()
{
	yylex();
	return 1;
}	
