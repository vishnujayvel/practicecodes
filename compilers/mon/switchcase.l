%{
	int i,j,k,len;
	int count=1;
	char var;
	char val;
%}
%%
switch\(.*\)\{ {
	                i=0;
			while(yytext[i]!='('){
				i++;
			}
			var=yytext[i+1];
	        }
case.*: { 
		//	while(yytext[i]!=' '){
				i++;
		//	}
		//	i++;
		//	j=0;
			while(yytext[i]!=':')
			i++;
			val=yytext[i=1];
			//val[j]='\0';
			if(count!=1){
				printf("elseif(%c==%c){",var,val);
			}
			else{
				printf("if(%c==%c){",var,val);
				count++;
			}
		}
break; { printf("\n}"); }
default: { printf("else{");
	}
\} {
	
    printf("\n}");
   }
.  {
	ECHO;
   }
\n { ECHO;
  }
%%
int main(){
	yylex();
}

				
		
