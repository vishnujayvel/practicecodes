%{
	char s[10],inf[10];
	int top=-1,i=0,j=0,p;
	void push(char);
	char pop();
	char op1, op2;
	int pre(char);
%}
%%
[a-zA-Z] { push(yytext[0]); }
[+\-\*\/] {
		op2=pop();
		op1=pop();
		if( pre(yytext[0])> p ) inf[--i]='(';
		inf[j++]=op1;
		inf[j++]=yytext[0];
		inf[j++]=op2;
		if( pre(yytext[0])>p ) inf[j++]=')';
		p = pre(yytext[0]);
	  }
