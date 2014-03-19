%{
	int i,j,k;
	char funcname[50],par[50],body[50];
%}
%%
#define.* {	i=7;
		//while(yytext[i]!=' ')
		//	i++;
		printf("void* ");
		j=0;
		while(yytext[i]!=')')
			funcname[j++]=yytext[i++];
		
		funcname[j]=')';
		i++;
		printf("%s{\n",funcname);
		while(i<yyleng)
			printf("%c",yytext[i++]);
		printf("\n}");
	}
%%
int main(){
		yylex();
		return 0;
	}

		
		
