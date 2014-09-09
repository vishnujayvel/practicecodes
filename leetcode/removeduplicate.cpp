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
 int removeDuplicates(int A[], int n) {
        int m=n;
        /*for(int i=0;i<n;i++){
            int temp=A[i],c=0;
            for(int j=i+1;A[j]==temp&&j<n;j++){
                c++;   
            }
            int k;
            for(k=i+1;k<n-c;k++){
                A[k]=A[k+c];
                
            }
            for(int j=k;j<n;j++)
               A[j]='\0';
            n=n-c;
        }*/
        int i=1,j=0;
        for(;i<n;){
			if(A[i]==A[j])
			    i++;
			 else{
				 A[++j]=A[i++];
			  }
		  }
    }
  int main(){
	int n;
int A[100];
cin>>n;
for(int i=0;i<n;i++)
  cin>>A[i];
removeDuplicates(A,n);
for(int i=0;i<n;i++)
  cout<<A[i]<<" ";
  
  }
