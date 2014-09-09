#include <iostream>
using namespace std;

int solve(int a, int b){
  int result = 1;

  while (b){
    if (b&1){
      result *= a;
    }
    b >>=1 ;
    a *= a;
  }

  return result;
}
int main()
{   int m,a,b;
cin>>a>>b;
    int c=0;
    cout<<expo(a,b);
    return 0;
}
