%{
#include<string.h>
int n=0,v=0,d=0,param=0,cl=0;
char name[10],var[10],p,defn[1000];
%}
%%
(#define)	{	
			p=input();
			p=input();
			printf("void* ");
			while(p!=' ')
			{
				printf("%c",p);
				name[n++]=p;
				p=input();
				
				if(p=='('){
					param=1;
					break;
				}			
			}
			if(param==1)
			{
				
				while(p!=')'){
					if(p=='(')
						printf("(void* ");
					else if(p==',')
						printf(",void* ");
					else	
					printf("%c",p);
					var[v++]=p;
					p=input();
				}
				printf("%c",p);
			}
			else
				printf("()");
		
			
				while(p<60)	
				p=input();
				
			if(p=='{')
				cl=1;
			if(cl==1){
			
			while(p!='}'){
				if(p!='\\'){
					defn[d++]=p;
				}
				p=input();
				if(p=='}'){
					printf("return ");
					cl=0;
				}
				if(p=='\n' || cl==0)
					printf("%s",defn);
				
			}
			}
			else{
			printf("{ return ");
			
			while(p!='\n')
			{
				defn[d++]=p;
				printf("%c",p);
				p=input();
			}
			defn[d++]=p;
			printf("}");
			}
			printf("%c",p);
		}
.	;
\n	;
%%

int main()
{
yylex();
//printf("void* %s (void * %s) %s}",name,var,defn);
return 1;
}
