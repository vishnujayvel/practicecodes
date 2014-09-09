%{
int k=0,i=0,check=0;
char p,ifdef[]="if",elifdef[]="else if",elsedef[]="else",inp[20],ans[100];
%}

%%
(switch\() {
		p=input();
		i=0;
		while(p!=')')
		{
			inp[i++]=p;
			p=input();
		}
	}
(case) {
	p=input();
	i=0;
	if(check==0)
	{
		while(ifdef[i]!='\0')
			ans[k++]=ifdef[i++];
		}
	else
	{
		while(elifdef[i]!='\0')
			ans[k++]=elifdef[i++];
	}
	check++;
	ans[k++]='(';
	i=0;
	while(inp[i]='\0')
		ans[k++]=inp[i++];
	ans[k++]='=';
	ans[k++]='=';
	while(p!=':')
	{
		ans[k++]=p;
		p=input();
	}
	ans[k++]=')';
	ans[k++]='\n';
	ans[k++]='}';
	}
(default:) {
		i=0;
		while(elsedef[i]!='\0')
		{
			ans[k++]=elsedef[i];
			ans[k++]='{';
		}
	}
(break;) {
           ans[k++]='}';
		ans[k++]='\n';
	}
[{}] ;
.  { ans[k++]=yytext[0];}
\n  ;
%%
int main()
{
yylex();
if(ans[k-2]!='}')
	ans[k++]='}';
printf("%s",ans);
return 1;
}
	
