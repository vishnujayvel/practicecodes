%{
	int i=0,k=0;
	char p,mac_name[50],par[50],func[50],def[]="#define",ans[50];
%}
%%
int|void {
		p=input();
		while(p!='(')
		{
			mac_name[i++]=p;
			p=input();
		}
		mac_name[i]='\0';
		p=input();
		i=0;
		while(p!=')')
		{
			par[i++]=p;
			p=input();
		}
		par[i]='\0';
		i=0;
		while(def[i]!='\0')
		{
			ans[k++]=def[i++];
		}
		ans[k++]=' ';
		i=0;
		while(mac_name[i]!='\0')
		{
			ans[k++]=mac_name[i++];
		}
		ans[k++]='(';
		i=0;
		while(par[i]!='\0')
		{
			ans[k++]=par[i++];
		}
		ans[k++]=')';
		ans[k++]=' ';
	}

return {
		p=input();
		i=0;
		while(p!=';')
		{
			func[i++]=p;
			p=input();
		}
		func[i]='\0';
		i=0;
		while(func[i]!='\0')
		{
			ans[k++]=func[i++];
		}
		ans[k++]=';';
	}
[{}] { }
%%
main()
{
	yylex();
	if(ans[k-1]!=';')
		ans[k++]=';';
	printf("%s",ans);
	}
