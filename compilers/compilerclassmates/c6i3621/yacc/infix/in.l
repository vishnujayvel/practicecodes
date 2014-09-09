%{
int tos=-1,op_tos=-1,flag;
 char op[20],arr[20];
#include <stdlib.h>
#include "y.tab.h"
FILE *fp,*yyin;
void yyerror(char *);
%}
%%
[a-zA-Z][\n]? { yymore(); if(op_tos>-1 && flag!=1)
		{	
			op_tos--;
			if(yytext[1]=='\n' && op_tos==-1 && tos==-1)
			{ 
			 return(1);		
			}
			else
			{
				yyerror("invalid");
			}
			
		}
	   else ++tos;	}
[+\-\/\*][\(]? { yymore(); if(yytext[1]='(') { flag=1; }
		else flag=0;
		if(tos>-1) tos--;
		++op_tos;
		}
%%

