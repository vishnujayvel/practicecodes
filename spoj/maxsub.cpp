#include<iostream>
#include<cstdio>
#include<deque>
#include<algorithm>
#include<math.h>

#define MOD 1000000009


using namespace std;
typedef long long int L;
int main(){
int t;
L n;
scanf("%d",&t);
while(t--){
    scanf("%lld",&n);
    L arr[51000],sum=0LL;
    L cnt=1LL;
    L zeroCount=0LL;
    int allNegative=1;

    for(int i=0;i<n;i++){
        scanf("%lld",&arr[i]); 
        if(arr[i]>0){
            sum+=(long long)arr[i];
            allNegative=0;
        }
        else if(arr[i]==0){
			allNegative=0;
			zeroCount++;
		}
    }
        sort(arr,arr+n);
        if(sum==0){//this is to check if there is no +ve num
					  if(allNegative==1){//if array contains only -ve numbers
						sum=arr[n-1];
						for(int j=n-2;j>=0;j--){
							if(sum==arr[j])
							  cnt++;
							 else
							  break;
						 }
					 }else{//if there exist 0's
						 
							 L num=1;
							for(L k=0;k<zeroCount;k++){
								num=(L)(num*2)%MOD;// num of subset is 2^zeroCount-1
							}//decrementing 1 from 2^zeroCount since we should exclude null set according to the prob
							cnt=num-1;
					  }
          }
          else{//if the array contains +ve numbers
			   L num=1;
							for(L k=0;k<zeroCount;k++){
								num=(L)(num*2)%MOD;// num of subset is 2^zeroCount
							}
							cnt=num;
		}
			  
          cnt=cnt%MOD;
    printf("%lld %lld\n",sum,cnt);
}

}
