%{
int tos=-1,pre=0,pr[10];
char op[10];
%}
%%
[a-zA-Z] { printf("%c",yytext[0]); }
['+'] { pre=2;
	if(tos >-1)
	{
		while(pre<pr[tos] && tos>=0)
		printf("%c",op[tos--]);
	}
	op[++tos]='+';
	pr[tos]=pre;
	}
[\-] { pre=2;
	if(tos>-1)
	{
		while(pre<pr[tos] && tos>=0 )
		printf("%c",op[tos--]);
	}
	op[++tos]='-';
	pr[tos]=pre;
	}
['*'] { pre=3;
	if(tos>-1)
	{
		while(pre>pr[tos]&&tos>=0)
		printf("%c",op[tos--]);
	}
	pr[++tos]=pre;
	op[tos]='*';
	}
[/] { pre=4;
	if(tos>-1)
	{
	while(pre>pr[tos] && tos>=0 )
	printf("%c",op[tos--]);
	}
	pr[++tos]=pre;
	op[tos]='*';
	}
['('] { op[++tos]='(';
	pr[tos]=0;
	}
[')'] { while(op[tos]!='(' && tos>=0)
	{
	printf("%c",op[tos--]);
	tos=--tos;
	}
}
[\n\t] {
	while(tos>=0)
	printf("%c",op[tos--]);
	}
%%
int main()
{
	yylex();
	return 0;
}
