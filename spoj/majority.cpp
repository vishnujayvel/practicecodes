#include<iostream>
#include<cstdio>
#include<map>
using namespace std;

int main(){
	int arr[3000],lucky;
cout<<"ssf";
for(int i=2;i<3001;i++){
	cout<<i;
       if(arr[i]==0)
           lucky=i;
        else
           continue;
        for(int j=lucky+lucky;j<3001;j=j+lucky){
            arr[j]=-1;
        }
 }
 
    for(int i=2;i<3001;i++)
    cout<<arr[i]<<" sfsf";
    }

/*	int t,n,candidate,f;
	map<int,int>count;
	scanf("%d",&t);
	while(t--){
		f=0;
		scanf("%d",&n);
		int arr[n];
		for(int i=0;i<n;i++){
		  scanf("%d",&arr[i]);
		  
		  count[arr[i]]++;
	  }
	map<int,int>::iterator it;
	for(it=count.begin();it!=count.end();it++){
	  if(it->second>n/2){
	     candidate=it->first;
	     f=1;
	     break;
	 }
	}
	  if(f==1)
	    printf("YES %d\n",candidate);
	  else
	    printf("NO\n");
		
}
}

*/
