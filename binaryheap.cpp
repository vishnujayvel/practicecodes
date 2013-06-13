#include<iostream>
using namespace std;

struct Heap{
	int *array;
	int count;//no. of elements in the array
	int capacity;

};
//creating heap

struct Heap* createHeap(int capacity){
	
	struct Heap *h=new Heap();
	if(h==NULL){
		cout<<"Memory error";
		return 0;
	}
	else{
		cout<<"Heap created";
	}
	h->count=0;
	h->capacity=capacity;
	h->array=new int[capacity]();
	if(h->array==NULL){
		cout<<"Memory error";
		return 0;
	}
	return h;
}

int insert(struct Heap *h,int data){
	int i;
	cout<<"\nInserting data";
	if(h->count==h->capacity&&h->count!=0)
	  cout<<"NO more space";
    else{
    	h->count++;
    	i=h->count-1;
    	while(i>=0&&data>h->array[(i-1)/2]){
    		
    		h->array[i]=h->array[(i-1)/2];
    		if(i==0)
			  break;
			  else
			  i=(i-1)/2;
    	}
    	h->array[i]=data;
    	cout<<endl<<i<<" ="<<data;
    	cout<<"\ninserted "<<data;
    }
}
int getMaximum(struct Heap *h){
	if(h->count==0)
	  return -1;
     return h->array[0];
}	
int main(){
	Heap *h=createHeap(5);
	insert(h,1);
	insert(h,2);
	insert(h,3);
	cout<<"Hello";
	cout<<"\nmaximum element is "<<getMaximum(h);
	cout<<h->array[3];
}
	
	
	
	
	

