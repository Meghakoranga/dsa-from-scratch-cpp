#include<iostream>
using namespace std;
bool isSorted(int arr[], int n,int start)
{
  if(start==n-1)
    return true;
  if(arr[start]<=arr[start+1])
    return isSorted(arr,n,start+1);
  return false;
}
int main()
{
  int arr[]={1,2,5,6,8};
  int n=sizeof(arr)/sizeof(arr[0]);
  cout<<"given array : ";
  for(int i=0;i<n;i++)
  {cout<<arr[i]<<" ";}
  
  cout<<"\nThe array is sorted :"<<(isSorted(arr,n,0)?"True":"False")<<endl;
  return 0;
}