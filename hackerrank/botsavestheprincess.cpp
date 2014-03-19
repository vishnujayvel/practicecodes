#include <iostream>
#include <cmath>
#include <vector>
using namespace std;

void displayPathtoPrincess(int n, vector <string> grid){
    //your logic here
  int r=grid.size(),c=grid[0].size(),x1,x2,y1,y2;
	for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
             if(grid[i][j]=='m')
               		x2=i,y2=j;
          	  else if(grid[i][j]=='p')
                    x1=i,y1=j;
                
        }
    }
            //cout<<"Princess "<<x1<<" "<<y1<<"\nbot "<<x2<<" "<<y2;
            int xdiff=x2-x1,ydiff=y2-y1;
  
            if(xdiff>0){
              	for(int i=0;i<xdiff;i++)
                  cout<<"UP"<<endl;
            }
            else if(xdiff<0){
              for(int i=0;i<abs(xdiff);i++)
                  cout<<"DOWN"<<endl;
            }
             if(ydiff>0){
              	for(int i=0;i<ydiff;i++)
                  cout<<"LEFT"<<endl;
            }
            else if(ydiff<0){
              for(int i=0;i<abs(ydiff);i++)
                  cout<<"RIGHT"<<endl;
            }
 
  
}
int main(void) {

    int m;
    vector <string> grid;

    cin >> m;

    for(int i=0; i<m; i++) {
        string s; cin >> s;
        grid.push_back(s);
    }

    displayPathtoPrincess(m,grid);

    return 0;
}
