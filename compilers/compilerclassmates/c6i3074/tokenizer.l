%{
int kw=0,dtype=0,ident=0,relop=0,spch=0,op=0,unaryop=0,whsp=0,num=0;
char kwrd[25][15],dtypea[25][15],identa[25][15],relopa[25][15],spcha[25][15],unaryopa[25][15],opa[25][15],numa[25][15];
void print(char s1[25][15],int nos);
int i=0,j=0,k=0,l=0,o=0,m=0,n=0,p=0;
%}
%%
"if"|"else"|"elseif"|"break"|"include"|"void"|"printf"|"scanf"|"do"|"for"|"while"|"switch"|"case"|"default"|"main"|"static"|"const"|"define" {kw++;

                                                              strcpy(kwrd[i++],yytext);                                                                                                                                              }
"char"|"int"|"float"|"double"   {dtype++;strcpy(dtypea[j++],yytext);}
"<="|">="|"=="|"!="|<|>|<>      {relop++;strcpy(relopa[k++],yytext);}
[+\-\*\/\=]     {op++;strcpy(opa[l++],yytext);}
[;\"\%,{}()\[\]\&#\.]   {spch++;strcpy(spcha[n++],yytext);}
[a-zA-Z][A-Za-z0-9\_]*  {ident++;strcpy(identa[m++],yytext);}
[ \n\t] {whsp++;}
"++"|"--"       {unaryop++;strcpy(unaryopa[o++],yytext);}
[0-9]*  {num++;strcpy(numa[p++],yytext);}
%%
main()
{
yylex();
printf("\nKeywords:%d\n",kw);print(kwrd,kw);
printf("\nDatatypes:%d\n",dtype);print(dtypea,dtype);
printf("\nRelational operators:%d\n",relop);print(relopa,relop);
printf("\nOperators:%d\n",op);print(opa,op);
printf("\nIdentifiers:%d\n",ident);print(identa,ident);
printf("\nSpecial characters:%d\n",spch);print(spcha,spch);
printf("\nUnary operators:%d\n",unaryop);print(unaryopa,unaryop);
printf("\nNumbers:%d\n",num);print(numa,num);
printf("\nWhitespaces:%d\n",whsp);
}
void print(char s1[25][15],int nos)
{
for(i=0;i<nos;i++)
{
printf("\n%s",s1[i]);
}
}


