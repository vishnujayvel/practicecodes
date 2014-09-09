%{
	int bool_in=0;
	char exp[30];
%}
%%

switch\([a-zA-Z0-9]\)\{    {printf("if(");
				i=0;
			
