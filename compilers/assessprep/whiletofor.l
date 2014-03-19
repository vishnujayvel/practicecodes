%{
 int i,j,k;
 int lastlinefound=0;
  char cond[50],incr[50],body[50][50];
%}
nl [\n]
%%
while\(.*\)(\n)*\{(.|\n)*\} {
		i=0;
		j=0;
		while(yytext[i]!='(')
  			i++;
		i++;
		printf("for(;");
		while(yytext[i]!=')')
			cond[j++]=yytext[i++];
		i++;
		printf("%s;",cond);
		if(yytext[i]=='{')
			i++;
                if(yytext[i+1]=='{')
			i+=2;

		k=0;
		while(1){
		j=0;
		
		while(yytext[i]!='\n'){
 			if(yytext[i]=='}'){
				lastlinefound=1;
				break;
			}
			body[k][j++]=yytext[i++];
			//printf("insideeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeee");
		}
		i++;	
			if(lastlinefound==1){
				printf("%s){",body[k-1]);
				break;
			}
		k++;
		}
		for(j=0;j<k-1;j++)
			printf("%s\n",body[j]);
		printf("\n}");
}
			
. {}
%%
int yywrap(){
 	return 1;
}
int main(){
  yylex();
}

