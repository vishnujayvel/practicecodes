
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
void printans(string quo,int carry){
    	quo='0'+quo;
    	int add=carry;
    	for(int i=quo.length()-1;i>=0;i--){
    		int x=quo[i]-'0';
    		x+=add;
    		if(x>9){
    		x=0;
    		add=1;
    		}
    		else
    			add=0;
    		quo[i]=x+'0';
    	}
    	int i=0;
    	while(i<quo.length() && quo[i]=='0')
    		i++;
    	bool f=0;
    	for(;i<quo.length();i++){
	 		f=1;
    		printf("%c",quo[i]);
    	}
    	if(!f)
    		printf("0");
    	printf("\n");
    }
int main(){
	string str;
	while(1){
		cin>>str;
		if(str[0]=='-')
			break;
		string quo;
		int rem=0,num,carry=0;
		for(int i=0;i<str.length();i++){
			num=(carry*10)+str[i]-'0';
			quo+=(num/9+'0');
			carry=num%9;
		}
		if(carry>0)
    		carry=1;
		printans(quo,carry);
	}
}
		
			
