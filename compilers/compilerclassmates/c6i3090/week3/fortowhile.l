%{
	int i,j,k;
	int while_in=0,bool_in=0,init_in=0,incr_in=0;
	char stack[50];
%}
%%
for\(  {while_in=1;}
[a-z]=[0-9]\; {	
		if(while_in)
		{
			i=0;
			while(yytext[i]!=';')
			{
				printf("%c",yytext[i]);
				i++;
			}
			printf(";\n while(" );
			init_in=1;
		}
	      }
[a-z](>|<)[0-9]\; { 
			if(while_in&&init_in)
			{
				i=0;
				while(yytext[i]!=';')
				{
					printf("%c",yytext[i]);
					i++;
				}
				printf(")");
				bool_in=1;
			}
		}
[a-z]=[a-z]\+[0-9]\)  {
			 if(while_in&&init_in&&bool_in)
			{
				i=0;
				while(yytext[i]!=')')
				{
					stack[i]=yytext[i];
					i++;
				}
				stack[i++]=';';
			}
		      }
.*\}	           {
			i=0;
			while(yytext[i]!='}')
			{
				printf("%c",yytext[i]);
				i++;
			}
			printf("%s\n",stack);
			printf("}\n");
		}

%%
/*int yywrap()
{
	return 1;
}*/
 main()
{
	yylex();
	return 0;
}
