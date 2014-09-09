%{
 #include<stdio.h>
int num=1;
 void yyerror(char *);

%}
%token VAR,NUM,INTEGER
%left '+''-'
%left '*''/'
%%

pro: VAR '=' expr '\n' { printf("%c = %c%d\n",$1,$3,num-1);} 
   ;

expr: expr '+' expr { 
   		if(num==1)
	        {	printf("t%d=%c + %c\n",num,$1,$3);num++; $$='t';}
		else
			
		
		{
		if($3=='t')
		{printf("t%d=%c + %c%d\n",num,$1,$3,num-1);num++; $$='t';}
		else	
		   
		{printf("t%d=%c%d + %c\n",num,$1,num-1,$3);num++; $$='t';}
		}
	}
    | expr '-' expr {
			if(num==1)
			{ printf("t%d=%c - %c\n",num,$1,$3,num); num++; $$='t';}
		  else
			

		{
 		if($3=='t')
	{	printf("t%d=%c - %c%d\n",num,$1,$3,num-1);num++; $$='t';}
		else
				
		{printf("t%d=%c%d - %c\n",num,$1,num-1,$3);num++; $$='t';}
		   }
}

    | expr '*' expr { if(num==1)
		{	printf("t%d=%c * %c\n",num,$1,$3);num++;$$='t'; }
			
		else		
				
	
		{printf("t%d=%c * %c%d\n",num,$1,$3,num-1);num++; $$='t';}
			
			}
    | expr '/' expr { if(num==1)
			{printf("t%d=%c / %c\n",num,$1,$3);num++; $$='t'; }
		  else
			{
	if($3=='t')
		 
		{printf("t%d=%c / %c%d\n",num,$1,$3,num-1);num++; $$='t';
			}
	else
  
		{printf("t%d=%c%d / %c\n",num,$1,num-1,$3);num++; $$='t';}
		  }
}
    | VAR           { }
    ;	
%%
int main()
{
yyparse();
return 1;
}
void yyerror(char *s)
{
 printf("Err..\n");
}
