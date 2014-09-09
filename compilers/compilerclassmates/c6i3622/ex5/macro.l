%{

char p,str[600];
int index1=-1,k=-1;
 char a[50][50],b[500][500];
%}

%%

#define  { 
		p=input();
		while(p==' ')
			p=input();
		
	while(p!=' '){
		str[++k]=p;
		p=input();	
	}
 str[++k]='\0';
 	   printf("macro %s\n",str);
       	strcpy(a[++index1],str);
       k=-1;

  p=input();
  while(p==' ')
  p=input();
   
      while(p!='}')
     {
  	if(p=='\\')
 	{
 		p=input();
		if(p=='\\')
		continue;
	 	
	}

          str[++k]=p;
  	p=input();
     }
	str[++k]='}';
   str[++k]='\0';
  printf("body %s\n",str);
  strcpy(b[index1],str);
	p=input();	
	k=-1;
}
 
. ;

\n ;
%%

int main()
{
 yylex();
int i;
for(i=0;i<=index1;i++){
 printf("void %s",a[i]);
	printf("%s",b[i]);
	printf("\n\n");
	}
 return 0;
} 
