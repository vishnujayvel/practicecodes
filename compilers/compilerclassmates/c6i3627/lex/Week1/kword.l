%{
int count1=0,flag1=0,flag2=0,count2=0;
%}
smallk k
bigk K
space [ \t\n]
letter [a-zA-Z]
number [0-9]
%%
{space}{bigk}({letter}|{number})* flag1=1;
{space}{smallk}({letter}|{number})* flag2=1;
{space} {if(flag1==1)
		count1++;
	else if (flag2==1)
		count2++;
	 flag1=0;
	 flag2=0;}
. ;
%%
int yywrap()
{
return 1;
}
main()
{
yylex();
printf("Count:%d",count1+count2);
}
