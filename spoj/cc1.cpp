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
#include <string>
using namespace std;
#define REP(i,n) for(int i=0; i<n; i++)
#define FOR(i,st,end) for(int i=st;i<end;i++)
#define db(x) cout << (#x) << " = " << x << endl;
#define mp make_pair
#define pb push_back
string int_to_string(const int& port) {
    stringstream ss;
    ss << port;
    return ss.str();
}
int main(){
	string str;
	while(cin>>str){
		int len=str.size();
		char ch;
		int c=0;
		string res="",temp;
		REP(i,len){
			if((i+1)<len&&str[i]==str[i+1])
            {
                c=2;
                ch=str[i];
                i=i+2;
                while(str[i]==ch&&i<len)
                {
                    i++;
                    c++;
                }
                i=i-1;
                if(c>3)
                   res+=(int_to_string(c)+'!'+ch);
                else if(c==2){
					temp=ch;
                   res+=(temp+temp);
			      // cout<<"double"<<i;
			   }
			   else{
				   temp=ch;
				   res+=(temp+temp+temp);
			   }
            }
            else{
				res+=str[i];
			}
			
		}
		  cout<<res<<endl;
	  }
  }
            
