#include<iostream>
//frequency of numbers 1 to n is stores in 0 to n-1
//to avoid confusion between frequency and the number place the frequency as negative number
//so if arr[pos]<0 increment pos
using namespace std;
void findFrequency(int arr[],int n){
	int pos=0;
	int correctPos=0;
	while(pos<n){ 
		
		if(arr[pos]<=0){//if arr[pos] is negative or 0 it refers to frequency of the number pos+1 
		   pos++;//so just pass to the next element
		   continue;
	   }
	   correctPos=arr[pos]-1; //this is the position where frequency of arr[pos] is stored
	   
		if(arr[correctPos]>0){//if satisfies the place(correctPos) where the frequency of arr[pos] has to be stored
		// has an element!.So store that element in arr[pos] then make arr[correctPos]=-1
			arr[pos]=arr[correctPos];
			arr[correctPos]=-1;
		}else{//if a frequency is encountered just decrement it
		//remember, to get the original frequency of pos just multiply -1 with arr[pos-1]
			arr[correctPos]--;
			arr[pos]=0;
			pos++;
		}
	}
}
		

int main(){
	int arr[]={1,5,3,2,8,5,6,5};
	findFrequency(arr,8);
	for(int i=0;i<8;i++)
	cout<<i+1<<' '<<-1*arr[i]<<endl;
}

	
	
