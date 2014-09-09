%token VAR,MUL,DIV,ADD,SUB,EQ
%left '+' '-'
%left '*' '/'
%{
        void yyerror(char *);
//        int yylex(void);
        int sym[26];
	char op[10];
	char vr[10];
	int tosv=0;
	int toso=0;
	int notv=0;
	char temp[5]={"T1","T2","T3","T4","T5"}
%}
%%
program : VAR EQ E	{
				char vvo,vvt,oov;
				printf("%c = ",VAR);
				while(toso>0)
				{
					vvt=popv();
                			vvo=popv();
                			oov=popo();
                			printf("%c %c %c",vvo,oov,vvt);

				}
			}
	|
	;
E	:E MUL E	{	pusho('*');	}
	|E DIV E	{	pusho('/');	}
	|E ADD E	{	pusho('+');	}
	|E SUB E	{	pusho('-');	}
	|VAR	{	pushv(VAR)	}
	|
	;

%%
void pushv(char s)
{
	vr[tosv]=s;
	tosv++;
}
void pusho(char s)
{
	int p,q;
	char vo,vt,ov;
	p=prece(s);
	q=prece(op[toso]);
	if(p<=q)
	{
		vt=popv();
		vo=popv();
		ov=popo();
		printf("%c = %c %c %c",temp[notv],vo,ov,vt);
		pushv(temp[notv]);
		notv++;
		op[toso]=s;
		toso++;
	}
	else
	{
		op[toso]=s;
		toso++;
	}
}
char popv()
{
	char v=vr[tosv];
	tosv--;
	return v;
}
char popo()
{
	char o=op[toso];
	toso--;
	return o;
}
int prece(char s)
{
	switch(s)
	{
		case '*':return 2;
		case '/':return 2;
		case '+':return 1;
		case '-':return 1;
	}
}
void yyerror(char *s)
{
        printf("ERROR\n");
        return 0;
}
int main(void)
{
        yyparse();
        return 0;
}

