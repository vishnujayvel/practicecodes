#include<iostream>
#include<cstdio>
#include<map>
#include<vector>
#include<list>
#include<string>
using namespace std;
int score(string str){
    int s=str.size();
	if(s<=4)
	   return 1;
	 else if(s==5)
	   return 2;
	 else if(s==6)
	   return 3;
	 else if(s==7)
	   return 5;
	 else
	  return 11;
  }
int main(){
	int n;
	char str[100],c;
	scanf("%d",&n);
	getchar();
	map<string,int> m;
	map<int,list<string> > playerTable;
	//getchar();
   for(int i=0;i<n;i++){
	   while(1){
	    scanf("%s",str);
	    c=getchar();
	    playerTable[i].push_front(str);
	    m[str]++;
	    if(c=='\n')
	     break;
	    
	  }
  }
     int max=0,playerPoints=0;
    for(int i=0;i<n;i++){
		playerPoints=0;
		for(list<string>::iterator it=playerTable[i].begin();it!=playerTable[i].end();it++){
			if(m[*it]==1)
			  playerPoints+=score(*it);
		  }
		  if(playerPoints>max)
		      max=playerPoints;
		  }
		  printf("%d\n",max);
	  }
