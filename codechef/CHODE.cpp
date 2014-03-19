#include<iostream>
#include<cstdio>
#include<cmath>
#include<vector>
#include<map>
#include<string>
#include<algorithm>
#include<cstring>
using namespace std;

bool myFunc(const pair<char,int> firstE,const pair<char,int> secondE){
	if(firstE.second!=secondE.second)
	   return firstE.second>secondE.second;
	 else{
		 return firstE.first>secondE.first;
	 }
 }
int main(){
  int t;
  scanf("%d",&t);
  string freq;
  string msg;
  while(t--){
	  cin>>freq;
	  getline(cin,msg);
	  map<char,int>m,m1;
	  
	  int len=msg.size();
	  for(int i=0;i<len;i++){
		  if((msg[i]>='a'&&msg[i]<='z')||(msg[i]>='A'&&msg[i]<='Z'))
	    m[msg[i]]++;
	}
	  vector< pair<char,int> >list(m.begin(),m.end());
      sort(list.begin(),list.end(),myFunc);	 
      int vectorLen=list.size();
       //cout<<"vectorLEn "<<vectorLen;
      //for(int i=0;i<list.size();i++)
        //cout<<endl<<i<<list[i].first<<" ";
        //cout<<"end";
        int k=25;
      for(int i=0;i<list.size();i++)
          m1[list[i].first]=freq[k--];
        //  cout<<endl;
      // for(map<char,int>::iterator it=m1.begin();it!=m1.end();it++){
        //  cout<<it->first<<" ";
         // printf("%c",it->second);
	  //}
	  //cout<<"MSG IS "<<msg;
      for(int i=0;i<len;i++){
		  bool upper=0;
		  if(msg[i]>='A'&&msg[i]<='Z'){
		    upper=1;
		 
		// cout<<"upper detected so "<<msg[i];
		 //   cout<<"ERROR";
		}
		  //cout<<"finding "<<i<<msg[i]<<" ";
		  map<char,int>::iterator fin=m1.find(msg[i]);
		  if(fin!=m1.end()){
			  if(upper)
                printf("%c",fin->second-32);
               else
                printf("%c",fin->second);
			}
		 else
		   printf("%c",msg[i]);
       }
      printf("\n"); 
  }
}  
	  
  
	
