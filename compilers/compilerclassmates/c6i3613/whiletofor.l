%{
int k=0,i=0,p1=0,check=0,p2=0,p3=0;
char p;
char ans[100],fordef[]="for(",inp[20],part1[10],part2[10],part3[100];
%}


%%
([a-z]=)	{ 	
			while(yytext[i]!='\0'){
				part1[p1++]=yytext[i++];	
			}
			p=input();
			while(p!=';'){
				part1[p1++]=p;
				p=input();	
				}
		 }
(while\()	{
		i=0;
		while(fordef[i]!='\0')
			ans[k++]=fordef[i++];	
		i=0;
		while(part1[i]!='\0')
			ans[k++]=part1[i++];
		ans[k++]=';';
		p=input();
		part1[0]=p;
		while(p!=')'){
		
			ans[k++]=p;
			p=input();
			}	
		ans[k++]=';';
	
	}


.	{if(check!=0)
		{
			
			if(yytext[0]==part1[0]|| yytext[0]==part2[0]){
				p=input();
				part2[p2++]=yytext[0];
				while(p!=';')
				{
					part2[p2++]=p;
					p=input();
				}
			}
			else 
				part3[p3++]=yytext[0];
		check=0;
		part2[p2]=')';
		}
	else
		part3[p3++]=yytext[0];	
	}
\n	{check++;}
%%

int main()
{
yylex();
printf("%s",ans);
printf("%s\n",part2);
printf("%s\n",part3);
return 1;
}
