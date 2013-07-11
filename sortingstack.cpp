//time complexity O(n^2)
/*Assuming that the only data structure allowed here is the Stack,
 then you could use 2 Stacks.

 Iterate until the original stack is empty and in each iteration,
 pop an element from the original stack, while the top element 
 in the second stack is smaller than the removed element,
 pop the second stack and push it to the original stack.
 Now you can push the element you originally popped off the
 original stack to the second stack.
 if the top element in the 2nd stack is greater than the removed element
 just push the removed element from the stack1 to stack2
 
 Ex:
   initially
    s1:100,2,76,3
    s2:null
    
    s1:2,76,3
    s2:100
    
    s1:76,3
    s2:2,100
    
    s1:2,3
    s2:76,100
    
    s1:3
    s2:2,76,100
    
    s1:2
    s2:3,76,100
    
    s1:null
    s2:2,3,76,100
 
    */
#include<iostream>
#include<stack>
using namespace std;

int main(){
	stack<int> s1,s2;
	s1.push(3);
	s1.push(76);
	s1.push(2);
	s1.push(100);
	s2.push(s1.top());
	s1.pop();
	int value;
	while(!s1.empty()){
		value=s1.top();
		s1.pop();
		while(value>s2.top()){
			s1.push(s2.top());
			s2.pop();
		}
			s2.push(value);
			
		}
	
	while(!s2.empty()){
		cout<<s2.top()<<' ';
		s2.pop();
	}
	
	
}
