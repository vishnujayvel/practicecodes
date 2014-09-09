%{
#include<string.h>
int d=0,k=0,opt=0,opd=0,id=0;
char data[10][50],key[10][50],operator[10][50],iden[10][50],operand[10][50];
%}

datatypes       int|float|double|struct|void
keywords        if|for|while|switch|const|continue|goto|return|break|case|default|goto|continue|#include
operators       [-+*/%<>=|!&~^)(]
identifiers     [a-zA-Z]+[0-9]?[_]?
%%
{datatypes}     {
				int i;
				int flag=0;
				for(i=0;i<d;i++){
					if(strcmp(yytext,data[i])==0){
						flag=1;
						break;
					}
				}
				if(flag==0){
					strcpy(data[d++],yytext);
					}
				}
{keywords}      {
				int i;
				int flag=0;
				for(i=0;i<k;i++){
					if(strcmp(yytext,key[i])==0){
						flag=1;
						break;
					}
				}
				if(flag==0){
				strcpy(key[k++],yytext);
				}
				}
{operators}     {
				int i;
				int flag=0;
				for(i=0;i<opt;i++){
					if(strcmp(yytext,operator[i])==0){
						flag=1;
						break;
					}
				}
				if(flag==0){
					strcpy(operator[opt++],yytext);
				}
				}
{identifiers}   {
				int i;
				int flag=0;
				for(i=0;i<id;i++){
					if(strcmp(yytext,iden[i])==0){
						flag=1;
						break;
					}
				}
				if(flag==0){
				strcpy(iden[id++],yytext);
				}
				}
{identifiers}(\(\))     {printf("Functions= %s \n",yytext);}
[0-9]+  {strcpy(operand[opd++],yytext);}
.       |
\n      ;
%%

int yywrap(){
	return 1;
}
int main(){
	int i;
	yylex();
	printf("\nData Types\n");
	for(i=0;i<d;i++)
        printf("%s\n",data[i]);
	printf("\nKeywords\n");
	for(i=0;i<k;i++)
	    printf("%s\n",key[i]);
	printf("\nOperators\n");
	for(i=0;i<opt;i++)
	   printf("%s\n",operator[i]);
	printf("\nidentifiers\n");
	for(i=0;i<id;i++)
	   printf("%s\n",iden[i]);
	printf("\nOperands\n");
	for(i=0;i<opd;i++)
	   printf("%s\n",operand[i]);
	return 1;
}


