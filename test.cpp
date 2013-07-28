#include <iostream>
using namespace std;

void getDuplicate(int arr[],int size)
{
    int pos = 0;
    int desiredPos = 0;
    while(pos < size)
    {
        if(arr[pos] <= 0){
            pos++;
            //continue;
		}
        desiredPos = arr[pos] -1;
        if(arr[desiredPos] > 0)
        {
            arr[pos] = arr[desiredPos];
            arr[desiredPos] = -1;
        }
        else
        {
            arr[desiredPos]--;
            arr[pos] = 0;
            pos++;
        }
    }
}

void display(int arr[], int size)
{
    for(int i=0; i<size; i++)
    {
        cout<<"\nElement = "<<i+1<<"\tFrequency = "<<arr[i]*-1;
    }
}
int main()
{
    int arr[] = {1,5,3,2,8,5,6,5};
    int size = sizeof(arr)/sizeof(arr[0]);
    getDuplicate(arr,size);
    display(arr,size);
}
