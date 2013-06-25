#include<iostream>
using namespace std;
int main(int argc, char const *argv[])
{
       int a[10]={0,0,1,0,0,0,1,1,1};
       
       int pos=-1;
       //sort
       for (int i = 0; i < 9; i++)
       {
               if(a[i]==1)
                       pos=i;

               if(a[i]==0 && pos!=-1){
                       //swap
                       int temp=a[i];
                       a[i]=a[pos];
                       a[pos]=temp;

                       i=pos;
               }

       }  
        for(int i=0;i<9;i++)
               cout<<"\n"<<a[i];
	      
}
