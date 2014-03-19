#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

      long long int n;
long long int solve(long long int c,long long int n){
    if(c>=n)
        return 0;
        cout<<c+1<<" "<<c*2<<endl;
     return ((c==0)?solve(c+1,n)+1:(min(solve(c+1,n)+1,solve(c*2,n)+1)));                                                      
}

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int t;
    scanf("%d",&t);
    while(t--){
      scanf("%lld",&n);
      printf("%lld\n",solve(0,n));
      
    }
  
  
  return 0;
}
