#include<iostream.h>
#include<Conio.h>
int main(){
    int n=3,temp,last=2,i,j;//order of matrix
     int arr[][]={{1,2,3},{4,5,6},{7,8,9}};
     int transpose[n][n];
     for( i=0;i<n;i++){
             for( j=0;j<n;j++){
                     transpose[i][j]=arr[j][i];
             }
    }
    for(i=0;i<n/2;i++){
                       
                       for(j=0;j<n;j++){
                                        temp=transpose[j][i]];
                                        transpose[j][i]=transpose[j][last];
                                        transpose[j][last]=temp;
                                        }
                                        last--;
                                        
                       }
   for(i=0;i<n;i++){
                    for(j=0;j<n;j++){
                                   cout<<transpose[i][j]<<' ';
                                   }
                                   cout<<'\n';
                    }
}
                                   
                                        
