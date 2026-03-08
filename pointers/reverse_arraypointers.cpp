#include<iostream>
using namespace std;
void reverseArray(int* arr, int size)
{
int *start=arr,*end=arr+size-1,temp;
for(int i=0;i<size/2;i++)
{
    temp=*start;
    *start=*end;
    *end=temp;
    start++;
    end--;
    
}
//display of array
for (int i=0;i<size;i++)
{
    cout<<arr[i]<<" ";
}
}
int main()
{
    int n;
    cout<<"enter the size of array";cin>>n;
    int* arr = new int[n]; //or vector<int> arr(n)
    for (int i=0;i<n;i++)
    {cin>>arr[i];}
    reverseArray(arr,n);

    delete[] arr;

    return 0;
}