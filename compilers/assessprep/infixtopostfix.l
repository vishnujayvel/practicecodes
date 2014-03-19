%{
	char stack[100];
	int tos=0;
	void push(char);
	void pop();
	char top();
	int priority(char);
%}
%%
[a-zA-Z]? { printf("%c",yytext[0]);}
[\+\-\*\/\(\)] {char op=yytext[0]; 
		if(tos==0||op=='(')
			push(op);
		 
		else if(op==')'){
			while(top!='('&&top!='-1')
				printf("%c",top()),pop();
		}
		else if(priority(op)>priority(top()))
		push(op);
		else if(priority(op)<=priority(top())){
			while(priority(op)<=priority(top()))
				printf("%c",top()),pop();
			push(op);
		}
		
		}
[\n] 		{
			while(tos>=0)
				printf("%c",top()),pop();
		
			
		}
%%
void push(char c){
	stack[tos++]=c;
}
void pop(){
	tos--;
}
char top(){
	if(tos<0)
		return -1;
	return stack[tos-1];
}
int priority(char c){
switch(c){
case '(':return 0;
case ')':return 0;
case '+':return 1;
case '-':return 1;
case '*':return 2;
case '/':return 2;
}
}
int main(){
   yylex();
}
