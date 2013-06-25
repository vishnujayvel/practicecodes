#include<iostream>
using namespace std;
typedef struct heap{
	int *array;
	int count;
	int capacity;
	
}heap;

heap* createHeap(int capacity){
	heap* h=new(struct heap);
	h->count=0;
	h->capacity=capacity;
	h->array=new int[capacity];
	return h;
}

void insert(heap* h,int data){
	int i;
	if(h->count==h->capacity)
	    cout<<"\nheap overload";
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
   
}
void display(heap *h){
	if(h->count!=0){
		for(int i=0;i<h->count;i++){
			cout<<h->array[i]<<' ';
		}
	}
}
int main(){
	heap *h=createHeap(10);
	insert(h,31);
	insert(h,10);
	insert(h,15);
	insert(h,100);
	display(h);
	
}

