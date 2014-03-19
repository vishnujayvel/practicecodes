#include<iostream>
#include<cstdio>
#include<cmath>
#include<cstring>
#include<climits>
#include<algorithm>
using namespace std;
void swap(int &a,int &b){
	int temp=a;
	a=b;
	b=temp;
}
int main(){
	int row[1234],col[5678];
	for(int i=0;i<1234;i++)
	   row[i]=i;
	 for(int j=0;j<5678;j++)
	   col[j]=j;
	char c;
	int x,y,v;
	while(cin>>c){
		switch(c){
		case 'R': 
	          cin>>x>>y;
	          swap(row[x-1],row[y-1]);
	          break;
	    case 'C':
	         cin>>x>>y;
	         swap(col[x-1],col[y-1]);
	         break;
	    case 'Q':
	         cin>>x>>y;
	         printf("%d\n",row[x-1]*5678+col[y-1]+1);
	         break;
	    case 'W':
	         cin>>v;
	         x=(v-1)/5678;
	         y=(v-1)%5678;
	         for(int i=0;i<1234;i++){
				 if(row[i]==x)
				       printf("%d ",i+1);
				   }
		    for(int i=0;i<5678;i++){
				if(col[i]==y)
				       printf("%d\n",i+1);
			}
			break;
		}
	}
}
