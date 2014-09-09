%{
int c=0;
int s=0;
%}

%%

[a-z] s++;
[A-Z] c++;

%%

int main()
{
 yylex();
 printf("Small case %d\nCaps %d\n",s,c);
}
