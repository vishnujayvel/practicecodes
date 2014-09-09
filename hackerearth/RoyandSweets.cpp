#include <iostream>
#include <map>
#include <cstdio>
using namespace std;

int main()
{ 	int n,s,q;
    scanf("%d",&n);
    map<int,int>m;
    for(int i=0;i<n;i++){
    	scanf("%d%d",&s,&q);
    	m[s]=m[s]+q;
    }
    int g;
    int arr[1000005];
    scanf("%d",&g);
    int maxr=0;
    int r=0;
    for(int i=0;i<g;i++){
    	maxr=0;
      scanf("%d",&arr[i]);
      for(map<int,int>::reverse_iterator it=m.rbegin();it!=m.rend();it++){
            if(it->first>=arr[i]&&it->second>=arr[i]){
            	maxr=max(maxr,(it->second/arr[i])*100);	
            }
            else
            break;	
      	 
      }
      r+=maxr;
    }
    printf("%d\n",r);
    
    
}

