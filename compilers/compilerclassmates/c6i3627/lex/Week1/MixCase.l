%{
int ucount=0,lcount=0,count=0;
%}
lower [a-z]
upper [A-Z]
space [\n\t ]
%%
{lower} lcount++;
{upper} ucount++;
{space} {if(lcount>0 && ucount>0) count++;
	 ucount=0;
	 lcount=0;
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
