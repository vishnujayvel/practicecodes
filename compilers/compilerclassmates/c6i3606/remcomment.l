%{
	int single=0, many=0;
%}
%%
[//] {single=1;}
['/']['*'] {many =1;}
[\n] { if(single) single =0;
	else printf("%s", yytext);
	}
[a-zA-z0-9] {
	if(single){ }
	else if(many){ }
	else {printf("%s", yytext);}
	}
['*']['/'] { if(many) many=0;
		else printf("%s", yytext);
	}
%%
main()
{
	yylex();
}
