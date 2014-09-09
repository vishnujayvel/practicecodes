
alpha [a-zA-Z]
op "("|")"|"+"|"-"|"/"|"*"
end [\t]
%{
        int front=-1,rear=0;
        char stack[100];
%}

%%
{alpha} ECHO;
{op} {  if(front==-1)
         {
                front++;
            stack[front]=yytext[0];

         }
         else
         {
                if((yytext[0]=='+'||yytext[0]=='-')&&stack[front]!='(')
                {
                        while((front!=-1)&&(stack[front]!='('))
                        {
                                printf("%c",stack[front]);
                                front--;
                        }
                        front++;
                        stack[front]=yytext[0];
                }
                else if((yytext[0]=='+'||yytext[0]=='-')&&stack[front]=='(')
                {
                        front++;
                        stack[front]=yytext[0];
                }
                else if(yytext[0]==')')
                {
                        while(stack[front]!='(')
                        {
                                printf("%c",stack[front]);
                                front--;
                        }
                        front--;
                }
                else if(yytext[0]=='(')

alpha [a-zA-Z]
op "("|")"|"+"|"-"|"/"|"*"
end [\t] 
%{
	int front=-1,rear=0;
	char stack[100];
%}

%%
{alpha} ECHO;
{op} {  if(front==-1)
	 {
		front++;
	    stack[front]=yytext[0];
		
	 }
	 else
	 {
		if((yytext[0]=='+'||yytext[0]=='-')&&stack[front]!='(')
		{
			while((front!=-1)&&(stack[front]!='('))
			{
				printf("%c",stack[front]);
				front--;
			}
			front++;
			stack[front]=yytext[0];
		}
		else if((yytext[0]=='+'||yytext[0]=='-')&&stack[front]=='(')
		{
			front++;
			stack[front]=yytext[0];
		}
		else if(yytext[0]==')')
		{
			while(stack[front]!='(')
			{
				printf("%c",stack[front]);
				front--;
			}
			front--;
		}

		else if(yytext[0]=='(')
		{
		 front++;
		stack[front]=yytext[0];
		}
		else if((yytext[0]=='*'||yytext[0]=='/')&&stack[front]!='(')
		{
		   while(stack[front]=='*'||stack[front]=='/')
		  {
			printf("%c",stack[front]);
			front--;
		  }
		front++;
		stack[front]=yytext[0];
		}
		else if((yytext[0]=='*'||yytext[0]=='/')&&stack[front]=='(')
		{
			front++;
			stack[front]=yytext[0];
		}
	}
    }
{end}		{
		    while(front!=-1)
		    {
			if(stack[front]!='(')
			{
			printf("%c",stack[front]);
			}
			front--;
		   }
		}
. ;
%%

int yywrap()
{
	return 1;
}
int main()
{
	yylex();
	return 0;
}
