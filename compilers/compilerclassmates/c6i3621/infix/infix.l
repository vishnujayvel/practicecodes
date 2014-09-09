%{
int pre,op_pos=0,ch_pos=0,pos=0;
char op[50];
char ch[50];
int pre[50]
char final[100];
void func(char ch[]);
%}
alpha [a-zA-Z]
op [^a-zA-Z0-9]
%%
{alpha} {ch[ch_pos++]=yytext[0];}
{op} { func(yytext); }
%%
main()
{
yylex();
}
void func(char cha[])
{
	op_pos=++op_pos;
	switch(cha[0])
	{
		case '+':
		case '-':pre[op_pos]=1;
			break;
		case '*':
		case '/':pre[op_pos]=2;
	}
 
	if(op_pos==1)
	{
	return;
	}
	if(op_pos>=1 && pre[op_pos]<pre[op_pos-1])
	{
		int i;
		for(i=0;i<ch_pos;i++)
		{
			final[pos]=ch[i];
			pos++;
			ch_pos--;
		}
		final[pos]=op[0];
		for(i=0;i<op_pos-1;i++)
		{
			op[i]=op[i++];
			pre[i]=pre[i++];
			op_pos--;
		}
	}
	if(op_pos>=1 && pre[op_pos] > pre[op_pos-1])
	{
	op[++op_pos]=cha[0];
	}
	printf("\nfinal= %s",final);
		
}


 
