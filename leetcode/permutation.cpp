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
#include <stdio.h>
using namespace std;
#define REP(i,n) for(int i=0; i<n; i++)
#define FOR(i,st,end) for(int i=st;i<end;i++)
#define db(x) cout << (#x) << " = " << x << endl;
#define mp make_pair
#define pb push_back
vector<vector<int> >ans;
 vector<string> letterCombinations(string digits) {
       vector<string> dummy;
       dummy.pb("");
       if(digits=="")
          return dummy;
        vector<vector<char> >phone(10);
        phone[0].push_back(' ');
        int c=97;
        for(int i=2;i<=9;i++){
            if(i==7||i==9){
				for(int j=c;j<c+4;j++)
                    phone[i].push_back(j);
            c+=4;
            continue;
		}
            for(int j=c;j<c+3;j++)
                    phone[i].push_back(j);
            c+=3;
            
        }
        /*REP(i,phone.size()){
			cout<<i<<" ";
			REP(j,phone[i].size())
			    cout<<phone[i][j];
			cout<<endl;
		}*/
		vector<string> v1,v2;
		int active=2;
		int n=digits[0]-'0';
		//cout<<"n is "<<n;
		//cout<<"phone[n] size"<<phone[1].size();
		REP(i,phone[n].size()){
			//cout<<"calling4";
			string temp="";
			temp+=phone[n][i];
			v1.push_back(temp);
		}
		FOR(i,1,digits.size()){
			string temp="";
			n=digits[i]-'0';
			if(active==2){
				//cout<<"calling2"<<v1.size();
					for(vector<string>::iterator it=v1.begin();it!=v1.end();it++){
					//		cout<<"calling";
							REP(j,phone[n].size()){
						//		cout<<"inserting "<<*it+phone[n][j]<<endl;
									v2.push_back(*it+phone[n][j]);
								}
							}
				active=1;
				v1.clear();
			}
			else{
			//	cout<<"calling3 else part";
				for(vector<string>::iterator it=v2.begin();it!=v2.end();it++){
				//			cout<<"calling1";
							REP(j,phone[n].size()){
					//			cout<<"inserting "<<*it+phone[n][j]<<endl;
									v1.push_back(*it+phone[n][j]);
								}
				}
				active=2;
				v2.clear();
			}
				     
		}
		//cout<<"v1 is "<<v1.size()<<" v2 is "<<v2.size();
		if(v1.size()==0){
			//REP(i,v2.size())
				//cout<<v2[i]<<endl;
				return v2;
		}
		else{
			//REP(i,v1.size())
			//	cout<<v1[i]<<endl;
			return v1;
		}
	}
int main(){
	int n;
	string str="";
	letterCombinations(str);

	
}
		  

