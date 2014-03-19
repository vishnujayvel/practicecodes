#include<iostream>
#include<cstdio>
#include<string>
using namespace std;

int main(){
int firstNumber=0;
     int secondNumber=1;
     int sequenceNumber=0;
 
      int n;
      cin>>n;
      for (int i=1; i<=n+1;i++)
      {
 
        sequenceNumber += firstNumber;
       
       cout<<i<<" "<<sequenceNumber<<"\n ";
        firstNumber = secondNumber;
        secondNumber = sequenceNumber;
      }
      cout<<"ans "<<sequenceNumber;
  }
