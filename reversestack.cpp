#include<iostream>
#include<stack>
using namespace std;
stack<int> s;
/* insertAtBottom removes all elements and pushes x and then pushes back the
 removed element to the stack
   in the given stack if top points to 1 and if we call insertAtBottom(s,1)
    1  --- top
    2
    3
    4  
    then stack will be modified as
    2 --- top
    3
    4
    1 
    Similarly rest of the elements are reversed.
    The recursion goes till the stack becomes empty
   */
 
void insertAtBottom(stack<int> s,int x){
	if(s.empty()){
		s.push(x);
	}
	else{
		int temp=s.top();
		s.pop();
		insertAtBottom(s,x);
		s.push(temp);
	}
}
/* for the stack 1 2 3 4
  recursion goes like this reverse(s) where s={1,2,3,4}
  ---> reverse(s) where s={2,3,4}
  ---> reverse(s) where s={3,4}
  ---> reverse(s) where s={4}
  --->reverse(s)  where s={}
     Now insertAtBottom(4) then insertAtBottom(3),.... are called 
     and atlast the stack is reversed
  */
void reverse(stack<int> s){
	if(s.empty())
	  return;
	  else{
		  int temp=s.top();
		  s.pop();
		  reverse(s);
		  insertAtBottom(s,temp);
	  }
  }
  
 void display(stack<int> s){
	 while(!s.empty()){
		 int t=s.top();
		 s.pop();
		 cout<<t<<endl;
	 }
 }
	  
		  

int main(){

for(int i=1;i<=4;i++){
    s.push(i);
    }
    reverse(s);
    display(s);
}
 
    
   
