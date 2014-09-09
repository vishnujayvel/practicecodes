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

const char* str[]={"-78","-33","196","+","-19","-","115","+","-","-99","/","-18","8","*","-86","-","-","16","/","26","-14","-","-","47","-","101","-","163","*","143","-","0","-","171","+","120","*","-60","+","156","/","173","/","-24","11","+","21","/","*","44","*","180","70","-40","-","*","86","132","-84","+","*","-","38","/","/","21","28","/","+","83","/","-31","156","-","+","28","/","95","-","120","+","8","*","90","-","-94","*","-73","/","-62","/","93","*","196","-","-59","+","187","-","143","/","-79","-89","+","-"};
const char* tr[]={"12","33333334","1"};
    vector<string> input;
class Solution {
public:
    int evalRPN(vector<string> &tokens) {
        stack<int> s;
        int len=tokens.size();
     //   int len1=tokens[0].size();
        
        for(int i=0;i<len; i++){
            
//cout<<"yes";
            if(isdigit(tokens[i][0])||isdigit(tokens[i][1])){
                s.push(atoi(tokens[i].c_str()));
                cout<<"pushing "<<atoi(tokens[i].c_str())<<endl;
            }
            else{
                int temp=s.top();
                s.pop();
                cout<<tokens[i][0]<<" "<<s.top()<<" "<<temp<<endl;
                switch(tokens[i][0]){
                    case '+': temp=temp+s.top();
                              break;
                    case '-': temp=s.top()-temp;
                              break;
                    case '*': temp=s.top()*temp;
                              break;
                    case '/':if(temp!=0) cout<<"yes"; 
							  temp=s.top()/temp;
                              break;
                }
                s.pop();
                cout<<" pushing "<<temp<<endl;
                s.push(temp);
                
            }
                
        }
        return s.top();
    }
};
int main(){
	Solution S;
	vector<string> input(str, str+(sizeof(str))/sizeof str[0]);
	cout<<S.evalRPN(input);
	//cout<<sizeof tr/sizeof tr[0];
	
	
}
