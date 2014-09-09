%{
int count=0,vcount=0;
%}
vowel [aeiouAEIOU]
space [ \t\n]
%%
{vowel} vcount++;
{space} {if (vcount >=2) count++;
	 vcount=0;
	}
. ;
%%
int yywrap()
{
return 1;
}
main()
{
yylex();
printf("Count:%d\n",count);
}
