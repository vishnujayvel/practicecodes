%{
char buf1[100],p,buf2[100],buf3[100],f[1000],buf[]="while";
int i=0,j=0,k=0,len=0,pl=0;
%}
%%
(for\() {
	p=input();
	while(p!=';')
	{
		buf1[i++]=p;
		p=input();
		pl++;
	}
	if(pl>0)
	buf1[i++]=';';
	pl=0;
	buf1[i++]='\n';
	while(buf[len]!='\0')
		buf1[i++]=buf[len++];
	
	buf1[i++]='(';
	p=input();
	while(p!=';')
	{
		buf1[i++]=p;
		p=input();
		pl++;
	}	
	if(pl<2)
		buf1[i++]='1';
	pl=0;
	buf1[i++]=')';
	p=input();
	while(p!=')')
	{
		buf3[k++]=p;
		p=input();
		pl++;
	}
	buf3[k++]='\0';
	buf1[i++]='\n';
	len=0;
	p=input();
	p=input();
	if(p=='{')
	{
	buf1[i++]='{';
	while(buf3[len]!='\0')
		buf1[i++]=buf3[len++];
	if(pl>0)
	buf1[i++]=';';
	p=input();
	while(p!='}')
		{
		buf1[i++]=p;
		p=input();
		}
	buf1[i++]=p;
	}
	/*else
	{
	p=input();
	while(p!=';')
		{
			buf1[i++]=p;
			p=input();
		}
	buf1[i++]=p;
	buf1[i++]='}';
	}*/
	printf("%s",buf1);
	}
. ;
[\n] {printf("\n\n\n");}
%%
int main()
{
yylex();
return 0;
}	
