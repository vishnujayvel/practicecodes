#include<iostream>
using namespace std;
int ElementWithMoreThanHalfOccurences(int array[], int length)
{
    int count=0, element,i;
    element = array[0];
    count = 1;
    for(i=1;i<length;i++)
    {
        if(element==array[i])
        {
            count += 1;
        }
        else
        {
            if(count==0)
            {
                element = array[i];
                count = 1;
            }
            else
                count -= 1;
        }
    }
    return element;
}
int main(){
	int n;
	cout<<"number of elements\n";
	cin>>n;
	cout<<"\nenter the elements\n";
	int arr[n];
	for(int i=0;i<n;i++)
	  cin>>arr[i];
	cout<<ElementWithMoreThanHalfOccurences(arr,9);
}
