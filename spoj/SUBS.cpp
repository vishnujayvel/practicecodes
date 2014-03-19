#include<iostream>
#include<cstring>
#include<algorithm>
#include<string>
#include<cstdio>
using namespace std;

bool subseqmatch(string str,string pattern){
	int slen=str.size();
	int plen=pattern.size();
	int k=0;
	for(int i=0;i<slen;i++)
	   if(str[i]==pattern[k])
	      k++;
	if(k==plen)
	  return 1;
	else
	  return 0;
  }
  
 string stringexp(string x,int y){
	 string res="";
	 int len=x.size();
	 for(int i=0;i<len;i++){
		 for(int j=0;j<y;j++)
		    res+=x[i];
		}
   return res;
	}

int main(){
	string x,y;
	int t;
	scanf("%d",&t);
	while(t--){
		cin>>x>>y;
		int high=y.size()/x.size(),mid;
		int low=0;
		while(low<=high){
			mid=low+(high-low)/2;
			if(subseqmatch(y,stringexp(x,mid))){
			   low=mid+1;
		   }
		   else
		   high=mid-1;
	   }
	   cout<<high<<endl;
   }
}
		   

