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
char arr[51][51];
int red=0,blue=0;
int n,k;
int redcount=0,bluecount=0;
void init(){
	redcount=0;
	bluecount=0;
}	
void check(){
	red=0;
	blue=0;
	//init();
	int g=0;
	REP(i,n){
		REP(j,n){
			//vertical
			init();
			if(arr[i][j]=='R'){
				g=i;
				g++;
				redcount++;
				//cout<<i<<" "<<j<<endl;
				while(g<=n-1){
					if(arr[g][j]=='R'){
						
				//cout<<g<<" "<<j<<endl;
						redcount++;
					}
					else
						break;
					g++;
				}
				if(redcount==k){
					 red=1;
				//	cout<<"2";
				 }
			}
			
			if(arr[i][j]=='B'){
				g=i;
				g++;
				bluecount++;
				while(g<=n-1){
					if(arr[g][j]=='B')
						bluecount++;
					else
						break;
					g++;
				}
				if(bluecount==k){
					 blue=1;
					 //cout<<"1";
				 }
			}
	init();
	//horizontal
			if(!red){
			if(arr[i][j]=='R'){
				g=j;
				g++;
				redcount++;
				while(g<=n-1){
					if(arr[i][g]=='R')
						redcount++;
					else
						break;
					g++;
				}
				if(redcount==k){
					 red=1;
					// cout<<"3";
				 }
			}
		}
		
		
		if(!blue){
			if(arr[i][j]=='B'){
				g=j;
				g++;
				bluecount++;
				while(g<=n-1){
					if(arr[i][g]=='B')
						bluecount++;
					else
						break;
					g++;
				}
				if(bluecount==k){
					 blue=1;
					 //cout<<"2";
				 }
			}
		}
	
	
int f=0;
init();
			//diagonal right
			if(!red){
			if(arr[i][j]=='R'){
				f=i;
				g=j;
				f++;
				g++;
				redcount++;
				while(f<=n-1&&g<=n-1){
					if(arr[f][g]=='R')
						redcount++;
					else
						break;
					f++;	
					g++;
				}
				if(redcount==k){
					 red=1;
					 //cout<<"4";
				 }
			}
		}
				if(!blue){
			if(arr[i][j]=='B'){
				f=i;
				g=j;
				f++;
				g++;
				bluecount++;
				while(f<=n-1&&g<=n-1){
					if(arr[f][g]=='B')
						bluecount++;
					else
						break;
					f++;	
					g++;
				}
				if(bluecount==k){
					 blue=1;
					 //cout<<"3";
				 }
			}
		}
		
		init();
		//diagonal left
			if(!red){
			if(arr[i][j]=='R'){
			//	cout<<i<<" "<<j<<"\n";
				f=i;
				g=j;
				f++;
				g--;
				redcount++;
				while(f<=n-1&&g>=0){
				//	cout<<"continues\nlets see"<<arr[f][g]<<" "<<f<<" "<<g<<"\n";
					if(arr[f][g]=='R'){
					//	cout<<"with"<<f<<" "<<g<<"\n";
						redcount++;
					}
					else
						break;
					f++;	
					g--;
				}
				if(redcount==k){
					 red=1;
					
				 }
			}
		}
				if(!blue){
			if(arr[i][j]=='B'){
				f=i;
				g=j;
				f++;
				g--;
				bluecount++;
				while(f>=0&&g>=0){
					if(arr[f][g]=='B')
						bluecount++;
					else
						break;
					f++;	
					g--;
				}
				if(bluecount==k){
					 blue=1;
					
				 }
			}
		}
	}
}
		

		
		
	
	
}				
int main(){
	int t;
	scanf("%d",&t);
	FOR(q,1,t+1){
		scanf("%d %d",&n,&k);
		
		REP(i,n){
		
				scanf("%s",arr[i]);
		
		}
		REP(i,n){
			int x=n-1;
			for(int j=n-1;j>=0;j--){
				if(arr[i][j]!='.'){
					arr[i][x]=arr[i][j];
					x--;
				}
			}
				while(x>=0){
					arr[i][x]='.';
					x--;
				}
			
		 }
	check();
	printf("Case #%d: ",q);
	if(red&&blue)
		printf("Both");
	else if(red)
		printf("Red");
	else if(blue)
		printf("Blue");
	else
		printf("Neither");
	printf("\n");

		
}
}

