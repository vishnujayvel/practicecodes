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
// Returns true if arr[] can be partitioned in two subsets of
// equal sum, otherwise false

    bool part[1000000][100];
bool findPartiion (int arr[], int n)
{
    int sum = 0;
    int i, j;
   
    // Caculcate sun of all elements
    for (i = 0; i < n; i++)
      sum += arr[i];
     
    if (sum%2 != 0) 
       return false;
   
     
    // initialize top row as true
    for (i = 0; i <= n; i++)
      part[0][i] = true;
       
    // initialize leftmost column, except part[0][0], as 0
    for (i = 1; i <= sum/2; i++)
      part[i][0] = false;    
      
     // Fill the partition table in botton up manner
     for (i = 1; i <= sum/2; i++) 
     {
       for (j = 1; j <= n; j++) 
       {
         part[i][j] = part[i][j-1];
         if (i >= arr[j-1])
           part[i][j] = part[i][j] || part[i - arr[j-1]][j-1];
       }       
     }   
      
    /* // uncomment this part to print table
     for (i = 0; i <= sum/2; i++) 
     {
       for (j = 0; j <= n; j++) 
          printf ("%4d", part[i][j]);
       printf("\n");
     } */
      
     return part[sum/2][n];
}    
 
// Driver program to test above funtion
int main()
{
  int n,arr[100];
  cout<<"Enter n\n";
  cin>>n;
  cout<<"Enter the elements\n";
  REP(i,n) 
    cin>>arr[i];
  if (findPartiion(arr, n) == true)
     printf("Can be divided into two subsets of equal sum");
  else
     printf("Can not be divided into two subsets of equal sum");
       int sum=0;
       REP(i,n){
		    sum+=arr[i];
		}
       int halfsumcloser = sum / 2;
            for (; ! part[halfsumcloser][n]; halfsumcloser--);
            cout<<"Min "<<(sum - halfsumcloser) - halfsumcloser;
  getchar();
  return 0;
}
