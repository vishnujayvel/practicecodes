nl [\n]
%{
    int i,j,k;
    char init[50],cond[50],increment[50],change[100];
%}
%%
for\(.*;.*;.*\)\{(.|{nl})*\} {
		i=0;
                j=0;
		while(yytext[i]!='(')
			i++;
		i++;
		while(yytext[i]!=';')
			init[j++]=yytext[i++];
		init[j]='\0';
		i++;
		printf("\n%s;\nwhile(",init);
		j=0;	
		while(yytext[i]!=';')
		       cond[j++]=yytext[i++];
		cond[j]='\0';
		i++;
		j=0;
		printf("%s){",cond);
		while(yytext[i]!=')')
			increment[j++]=yytext[i++];
		i=i+2;
		increment[j]='\0';
		j=0;
		while(yytext[i]!='}')
			change[j++]=yytext[i++];
		printf("%s\n%s;}",change,increment);

}
%%
int yywrap(){
 return 1;
}
int main(){
   yylex();
}

