#include<iostream>
using namespace std;
int binarySearch(int arr[], int start, int end, int target)
{
  if(start>end)
    {return -1;}

  int mid=start+(end-start)/2;
  if(arr[mid]==target)
    return mid;

  if(target<arr[mid])
    {return binarySearch(arr, start, mid-1, target);}

  return binarySearch(arr, mid+1, end, target);
 
}
int main()
{
  int arr[]={3,24,25,36,87};

  int result=binarySearch(arr,0,(sizeof(arr)/sizeof(arr[0]))-1,87);

  if(result==-1)
    cout<<"Element not found\n";
  else
  cout<<"Element found at index : "<<result<<endl; 
  
  return 0;
}