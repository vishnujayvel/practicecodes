#include<iostream>
using namespace std;

char grid[1000][1000];
int flag[1000][1001]={0},r,c;
int count=0,prev_count=0;

void floodfill(int i,int j){
	if(i>=0&&j>=0&&i<r&&j<c)
	if(flag[i][j]==0){
		flag[i][j]=count;
		
		switch(grid[i][j]){
			case 'E':floodfill(i,j+1);
                     break;
           case 'W':floodfill(i,j-1);
                     break;
           case 'N':floodfill(i-1,j);
                    break;
           case 'S':floodfill(i+1,j);
                    break;
           
        }
        flag[i][j]=count;
	}
	else{
		count=flag[i][j];
		return;
	}
	    
}

int main(){
	cin>>r>>c;
	for(int i=0;i<r;i++)
	 cin>>grid[i];
	 for(int i=0;i<r;i++){
	 	for(int j=0;j<c;j++){
	 		if(flag[i][j]==0){

	 			count=prev_count+1;
	 			floodfill(i,j);
	 			if(prev_count<count)
	 			    prev_count++;
	 			
	 		}
	 	}
	 }
	 cout<<prev_count<<endl;
}


