%{
int c=0,vc=0;
%}
%%
[aeiouAEIOU] {vc++;yymore(); }
[a-zA-Z] {yymore();}
[ \n\t] {if(vc>=2){ c++;printf("%s\n",yytext);}
	vc=0;
	}
%%
int main()
{
yylex();
printf(" The no of words with atleast two vowels is %d ", c);
return 0;
}
