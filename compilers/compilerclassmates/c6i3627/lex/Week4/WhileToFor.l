alpha	[a-zA-Z]
digit	[0-9]
num	{digit}+
id	{alpha}({alpha}*|{digit}*)*
while	"while"
blank	[\t ]
blanks	{blank}*
bracket	"("|")"
comp	"<"|">"|">="|"<="|"=="
iter	"+"|"-"|"++"|"--"
anything ({alpha}*{digit}*{blanks}*)*
delim	";"
nl	[\n]
iloop	{while}{blanks}{bracket}{blanks}{num}{blanks}{bracket}{nl}"{"
init	"int"{blanks}{id}{blanks}"="{blanks}{num}{blanks}{delim}
%{
	char id[10],temp[30],chkid[10],iter[10],comp[10],rest[500],init[10];
	//bzero(rest,500);
	int i=0,j=0,k=0,l=0;
%}
%%
{init}	{bzero(init,10);
	 strcpy(init,yytext);}
{while}{blanks}{bracket}{blanks}{id}{blanks}{comp}{blanks}{digit}{blanks}{bracket}	{bzero(temp,30);
											 bzero(id,10);
											 strcpy(temp,yytext);
											 //printf("line 23 %s\n",temp);
											 while(temp[i]!='(')
												i++;
											 i++;
											 k=i;
											 //printf("line 28\n");
											 while(temp[i]==' ')
												i++;
											 //printf("line 32 %d\n",i);
											 while(temp[i]!=' ' && temp[i]!='<' && temp[i]!='>' && temp[i]!='=')
											 {
												id[j]=temp[i];
												//printf("%d %d",i,j);
												i++;j++;
											 }
											 //printf("line 37 %shello\n",id);
											 while(temp[k]!=')')
											 {
												comp[l]=temp[k];
												l++;k++;
											 }
											 //printf("line 44 %s\n",comp);
											 }
{id}{blanks}{iter}{anything}{delim}	{bzero(chkid,10);
					 bzero(temp,30);
					 strcpy(temp,yytext);
					 i=0;j=0;
					 //printf("line 50 %s\n",temp);
					 while(temp[i]!=' ' && temp[i]!='+' && temp[i]!='-')
					 {
						chkid[j]=temp[i];
						i++;j++;
					 }
					 //printf("line 56 %s\n",chkid);
					 if(strcmp(id,chkid)==0)
					 {
						bzero(iter,10);
						strcpy(iter,temp);
						//printf("line 61 %s\n",iter);
						iter[strlen(iter)-1]='\0';
					 }
					 else
						strcat(rest,temp);
					 }
"}"					 {if(strlen(id)==0)
					  {
						printf("for(;;)\n{");
					  }
					  else
					  	printf("for(%s; %s; %s)",init,comp,iter);
					  printf("\n%s\n}",rest);
					  printf("%s",init);
					 }
{iloop}	;
.	{strcat(rest,yytext);}
%%
int yywrap()
{
return 1;
}
int main()
{
yylex();
return 0;
}
