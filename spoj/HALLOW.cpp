#include <vector>
#include <list>
#include <map>
#include <set>
#include <deque>
#include <queue>
#include <stack>
#include <bitset>
#include <algorithm>
#include <functional>
#include <numeric>
#include <utility>
#include <sstream>
#include <iostream>
#include <iomanip>
#include <cstdio>
#include <cmath>
#include <cstdlib>
#include <ctime>
#include <cstring>
#include <climits>
#include <stdlib.h>
using namespace std;
#define REP(i,n) for(int i=0; i<n; i++)
#define FOR(i,st,end) for(int i=st;i<end;i++)
#define db(x) cout << (#x) << " = " << x << endl;
#define mp make_pair
#define pb push_back
int c,n,l,r;
int arr[100005],seen[100005];
/*Sweets that every neighbor can give A0,A1,....,An-1.

we want to pick some of As so we have the sum mod n equals zero
From the pigeonhole principle we know that there is always a solution which contain some consecutive elements (WHY ?? )

lets make cumulative array that contain in index i the sum of all elements from index 0 to index i
i claim that if we get the mod of c for each element on the array, either you will find mod zero 
* ( so here is the solution from the start to this element) or one of the mods at least will appear more than one
*  time "pigeonhole principle" so between these any two appearances of this mod is the solution :)
*/
int main(){
	
while(1){
	int f=0,sum=0;
	scanf("%d %d",&c,&n);
	memset(seen,-1,sizeof seen);
	seen[0]=0;//mod 0 visited before getting any treat
	if(c==0)
	   return 0;
	REP(i,n){
	  scanf("%d",&arr[i]);
    }
    REP(i,n){
		sum+=arr[i];
		sum%=c;
		if(seen[sum]!=-1){
			l=seen[sum];
			r=i;
			f=1;
			break;
		}
		else{
			seen[sum]=i+1;
		}
	}
		if(f){
			//cout<<"L "<<l<<" R "<<r<<endl;
			FOR(j,l+1,r+2)
			  printf("%d ",j);
	   }
	   else{
		   printf("no sweets");
	   }
	   printf("\n");
	}
			
	
	
}

