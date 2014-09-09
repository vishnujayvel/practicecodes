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
bool isNumber(const char *s) {
        int dotc=0;
        int dote=0;
        int aftere=0;
        int num=0;
        for(int i=0;s[i];i++){
            if(s[i]>='0'&&s[i]<='9'){
                num=1;
                continue;
            
            }
                else if(s[i]=='.'){
                dotc++;
                cout<<"dot";
                if(dotc>1)
                    return 0;
                   if((s[i+1]>='0'&&s[i+1]<='9')||s[i+1]=='\0'||s[i+1]==' '){}
                    else
                    return 0;
                     
            }
            else if(s[i]=='e'){
                //cout<<"dot incre";
                if(s[i-1]>='0'&&s[i-1]<='9'){
                dote++;
                if(dote>1)
                    return 0;
                    if((s[i+1]>='0'&&s[i+1]<='9')||s[i+1]=='-'){}
                    else
                    return 0;
                }
                else
                return 0;
                     
            }
            else if(s[i]=='-'){
                if(i==0||s[i-1]=='e'){
                    if(s[i+1]>='0'&&s[i+1]<='9'){}
                    else
                    return 0;
                     
                }
                
                else
                return 0;
            }
            else if(s[i]==' '){
                  if(i==0||s[i+1]=='\0'||s[i+1]==' '||(num==0&&dote==0)||(s[i+1]>='0'&&s[i+1]<='9'&&num!=1&&dote!=1)){ cout<<dote<<"yes";}
                  else{
                 cout<<"coz";
                  return 0;
                
                  }
                  
            }
            }
       if(num)
        return 1;
        else
        return 0;
    }
int main(){
cout<<isNumber("1 ");
}
