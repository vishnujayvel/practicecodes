%{
        int i=0,j=0,k=0,l=0,m=0,n=0,o=0;

 char p,buf[2][100],a[100],b[100],c[100],d[1000],d1[100];
%}
%%
#define[^\}]*  { strcpy(a,yytext);for(i=8;i<strlen(a);i++)
                {b[j++]=a[i]; }
			
			while(b[k]!=' ')
			c[m++]=b[k++];
		for(i=strlen(c)+1;i<strlen(b);i++)
		{	
			if(b[i]=='/')
			{
				d[l++]=';';			
				continue;
			}
			d[l++]=b[i];
			
			
		}
	        printf("\nvoid %s",c);
		printf("\n%s\n}",d);	 }

. ;
%%
int main()
{
yylex();
return 0;
}

