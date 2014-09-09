%{
char buf[100],buf1[]="while(";
char p;
int pl=0,i=0,j=0;
%}

%%

 for()	{
		p=input()
		while(p!=';')
	{
		pl++;
		buf[i++]=p;
		p=input();
	}
if(pl>0)
	buf[i++]=';';
	buf[i++]='\n';
	pl=0;
	while( buf1[j]!='\0')
{
	buf[i++]=buf1[j++];
}
p=input()
while(p!=';')
{
pl++;
buf[i++]=p;
p=input();
}

if(pl<=0)
buf[i++]=1;
buf[i++]=')';
buf[i++]='\n';
buf[i++]='{';
pl=0;
p=input();
while(p!=')')
{
buf[i++]=p;
p=input();
pl++;
}

if(pl>0)
buf[i++]=';';
buf[i++]='\n';
p=input()
while(p=='\n' || p==' ' )
{
p=input()
}
if(p=='{');
{
p=input();
while(p!='}');
{
p=input()
buf[i++]=p;
}
}
else
{
p=input()
while(p!=';')
{
p=input()
buf[i++]=p;
}
buf[i++]=';';
}
buf[i++]='}';
}


%%

int main()
{
yylex();
return 0;
}

	
