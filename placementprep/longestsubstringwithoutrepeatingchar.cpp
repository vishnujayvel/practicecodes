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
typedef long long int ll;
string longestsubstr(string str){
	int n=str.size();
	int i=0,j=0;
	int longstart=0,longend=0;//start and end pointer of the longestsubstring
	bool visited[300]={0};//have a visited array to check if the character is already visited
	int maxlen=-999;//current maximum length of the substring
	//i is the start pointer of the temporary substring and j is the end pointer of the temporary substring
	//traverse the string till you encounter a character that repeats
	while(j<n){
		if(visited[str[j]]){//if the character is visited already
			if(j-i>maxlen){// if j-i is greater than maxlen till now 
			maxlen=j-i;// make j-i as maxlen. the substring starting from position i to j-1(inclusive) is the currentlongest substring 
			longstart=i;
			longend=j-1;
			}
			//This is very important part of the algorithm which makes this logic linear in time
			//if repeated character is encountered at j it means that the same character is encountered somewhere inbetween i and j
			//have an iteration with i as index variable and iterate till the character str[j] is encountered. This will be found at an index < j
			while(str[i]!=str[j]){
				visited[str[i]]=false;
				i++;
			}
			//if you think intuitively you will know that all substrings that start before or at i will be less than the current maximum
			//so continue searching for longest substring by pointing head at i+1
			// since we have processed till index j now. increment j.
			i++;
			j++;
		}
		else{//if the character is not visited yet
			visited[str[j]]=true;
			j++;
		}
	}
	//This part is important as well. When j reaches n and the loop breaks the substring with length n-i is another candidate for 
	//longest substring
	if(n-i>maxlen){
			maxlen=n-i;
			longstart=i;
			longend=n-1;
	}
		return str.substr(longstart,maxlen);
}
int main(){
	int t;
	string s;
	scanf("%d",&t);
	while(t--){
	cin>>s;
	cout<<longestsubstr(s)<<endl;
	}
}

		
