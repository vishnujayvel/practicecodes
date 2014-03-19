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

 
using namespace std;
void reverseWords(string &s) {
        int f=0;
		for(int i=0;i<s.length();i++){
		    if(s[i]!=' ')
		       f=1;
		       
		}
		 if(f==0){
		   s="";
		   return ;
		 }
		 int l=0;
		 string s1=s;
		 while(s[l]==' '){
		 
		   cout<<"stripping "<<l<<s[l]<<endl;
		     s1=s.substr(l+1);
		 
		   cout<<"."<<s<<endl;
		   l++;
		 }
		 s=s1;
		   
		 int r=s.length()-1;
		 while(s[r]==' '&&r>=0){
		     cout<<"stripping from back"<<r<<s[r]<<endl;
		     s[r]='\0';
		     cout<<s;
		     r--;
		 }
		 
        reverse(s.begin(),s.end());
        int len=s.length();
        string str="",temp="";
        for(int i=0;i<len;i++){
            if(s[i]!=' '){
               /// cout<<temp<<endl;
                temp+=s[i];
			}
            else{
				reverse(temp.begin(),temp.end());
				str+=temp;
				str+=" ";
				temp="";
			}
                    
        }
        reverse(temp.begin(),temp.end());
				str+=temp;
				
        s=str;
    }
int main()
{
    string str="1  ";
    reverseWords(str);
    cout<<endl<<str<<".";
}
