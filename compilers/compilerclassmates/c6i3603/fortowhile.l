%{
int i,j,k;
int while_in=0,init_in=0,bool_in=0;
char stack[50];
%}
%%
for\( { while_in=1; }
[a-z]=[0-9]\; { if(while_in)
		{
			i=0;
			while( yytext[i]!=';')
			{
				printf("%c",yytext[i]);
				i++;
			}
			printf(";\nwhile(");
			init_in=1;
		}
	}
[a-z](>|<)[0-9] { if(while_in && init_in)
		  {
			i=0;
			while( yytext[i]!=';')
			{
				printf("%c",yytext[i]);
				i++;
			}
			printf(")\n{\n");
			bool_in=1;
		}
	}
[a-z]=[a-z]\+[0-9]\) {
 if(while_in && init_in && bool_in)
{
	i=0;
	while( yytext[i]!=')')
	{
	//	printf("%c",yytext[i]);
		stack[i]=yytext[i];
		i++;
	}
	//printf(";\n}");
}
}
.*\} {
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
int main()
{
yylex();
}

