#include<iostream>
#include<algorithm>
using namespace std;

void swap(long long int &a,long long int &b){
    long long int t=a;
	a=b;
	b=t;
}
int main(){
	int t;
	long long int n;
	cin>>t;
	int count;
	while(t--){
		count=0;
		cin>>n;
		long long int arr[n+1];
		int one=0,two=0,three=0,flag=0;
		for(long long int i=0;i<n;i++){
		
		      cin>>arr[i];
		      if(arr[i]==1){
		      
		       one++;
		            //cout<<count-1<<" "<<i;
		        }
             else if(arr[i]==2){
             two++;
                    //cout<<count-1<<" "<<i;
                }
             else if(arr[i]==3)
             three++;
             else
             flag=1;// if flag=0 arr contains only 1,2,3
        }
        
        for(int i=0;i<one;i++)
               cout<<"1 ";
              if((two==1 && three==1 && n==2)||(flag!=1 && two==1 && three==1))
              {
                  cout<<"2 3\n";
              }
              else
              {
         
            //cout<<"\n sorting from arr["<<count<<"]="<<arr[count];
        sort(arr,arr+n);
   
  
        for(long long int i=n-1;i>=0;i-- ){
        
        if(arr[i]!=1)
		cout<<arr[i]<<' ';
	}
		          
		  
        
		
  	}
  	cout<<endl;  
  }
}

