#include<iostream>
#include<cstdio>
#include<algorithm>
using namespace std;
int arr[31];
int main(){
	arr[0]=1;//3X0  solution:{null} so one way of filling it
	arr[1]=0;//3X1
    arr[2]=3;
    arr[3]=0;
    for(int i=4;i<31;i++)
      arr[i]=4*arr[i-2]-arr[i-4];
      while(1){
		  int n;
		  scanf("%d",&n);
		  if(n==-1)
		     break;
		  printf("%d\n",arr[n]);
	  }
  }
