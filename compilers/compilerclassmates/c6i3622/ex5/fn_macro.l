%{
 char name[50],body[100];
 int k1=-1,k2=-1;
 char c;
int open1=0,close1=0;
%}

%%

void {
	c=input();	
	c=input();
	while(c!='\n')
	{
		name[++k1]=c;
		c=input();
	}
	name[++k1]='\0';	
	c=input();
	while(1)
	{
		if(c=='\n')
		   body[++k2]='\\';
		else if(c=='{') open1++;
		else if(c=='}') close1++;
	
	  	body[++k2]=c;
		if(open1==close1) break;
		 c=input();
	}
   body[++k2]='\0';
	printf("#define %s%s\n",name,body);
	}

%%
int main()
{
 yylex();
 return 0;
 }
