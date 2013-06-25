/*Given two lists of strings return a list of strings that is an intersection of both of the lists.
Analyze running time and space complexity.
Give Test Case scenarios.*/
#include<iostream>
#include<map>
#include<string.h>
#include<set>
using namespace std;

int main(){
	string list1[]={"hello",
                      "hi",
					  "cool",
					  "vishnu"};
    string list2[]={"awesome",
	                 "code",
                     "hello",
					   "hi",
					   "cool"};
   map<string,bool> m;
   set<string> list3;
   for(int i=0;i<4;i++)
       m[list1[i]]=true;
   for(int i=0;i<5;i++)
       if(m[list2[i]]==true)
          list3.insert(list2[i]);
   set<string>::iterator it;
   for(it=list3.begin();it!=list3.end();it++)
          cout<<*it<<endl;
           
					  
}
