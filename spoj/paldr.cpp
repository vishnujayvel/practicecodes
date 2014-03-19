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
char str[1000005];
bool isPalin(string input){
	return (input == string(input.rbegin(), input.rend()));
}
int main(){
   int t;
   fgets(str, 1000005, stdin);
   sscanf(str, "%d", &t);
   while(t--){
	//printf("scanning");   
   fgets(str,1000005, stdin);
   //printf("scanned %s",str);
   int len = strlen(str);
   str[--len] = '\0';   // get rid of '\n'
   if (str[len-1] == '\r') str[--len] = '\0';
	    int c;
	    c=0;
	    if(len==0){
			printf("YES\n");
			continue;
		}
	    string temp;
	    REP(i,len){
			
			
			temp="";
			FOR(j,i,len){
				temp+=str[j];
				if((i-j+1)%2!=0){
				   
			   }else{
				   if((i!=j)&&isPalin(temp)){
					   //cout<<temp<<" ";
					   c++;
					   i=j;
					   break;
				   }
				}
			}
		}
		if(temp!=""){
			if((temp.size()%2==0)&&isPalin(temp)){
			}else{
				printf("NO\n");
				//cout<<temp;
				continue;
			}
		}
		if(c>=2)
		   printf("YES\n");
		 else
		   printf("NO\n");
	   }
	   
	}

