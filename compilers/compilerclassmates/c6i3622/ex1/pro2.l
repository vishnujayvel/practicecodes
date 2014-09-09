%{
  int c=0,vc=0,k=0;
  char s[100];
  void func(char []);
%}

letter [a-zA-Z]
vowel [aeiouAEIOU]
notachar [ \t\n.,;:]

%%

{vowel} { vc++; func(yytext); }
{letter} { func(yytext); }
{notachar} { s[k]='\0';
              if(vc>=2){ c++; printf("%s\n",s); }
              k=0;vc=0;
	   }

%%
main()
{ 
  yylex();
  printf("No of words with more than 2 vowels %d\n",c);
}

void func(char cha[])
{
 s[k++]=cha[0];
}
