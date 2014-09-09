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
int arr1[4][4],arr2[4][4];
int a1,a2;
int arr[4];
void printIntersection(int arr1[], int arr2[])
{
  int i = 0, j = 0;
  int ans,c=0;
  while(i < 4 && j < 4)
  {
    if(arr1[i] < arr2[j])
      i++;
    else if(arr2[j] < arr1[i])
      j++;
    else 
    {
      ans=arr1[i];
      i++;
      c++;
    }
  }
  
  if(c==1)
     printf("%d\n",ans);
  else if(c>1)
     printf("Bad magician!\n");
  else
     printf("Volunteer cheated!\n");   
}
int main(){
	int t;
	scanf("%d",&t);
	for(int ca=1;ca<=t;ca++){
		scanf("%d",&a1);
		REP(i,4){
			REP(j,4){
				
				scanf("%d",&arr1[i][j]);
		       }
		   }
		 REP(i,4)
		    arr[i]=arr1[a1-1][i];
		sort(arr,arr+4);
		scanf("%d",&a2);
		REP(i,4)
			REP(j,4)
				scanf("%d",&arr2[i][j]);
		sort(arr2[a2-1],arr2[a2-1]+4);
		printf("Case #%d: ",ca);
		printIntersection(arr,arr2[a2-1]);
	}
}
			
