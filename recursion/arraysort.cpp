#include<iostream>
using namespace std;
bool isSorted(int arr[], int n)
{
  if(n<=1)
    return true;
  if(arr[0]>arr[1])
  return false;

  return isSorted(arr+1,n-1);
}
int main()
{
  int arr[]={1,2,5,23,8};
  int n=sizeof(arr)/sizeof(arr[0]);
  cout<<"given array : ";
  for(int i=0;i<n;i++)
  {cout<<arr[i]<<" ";}
  
  cout<<"\nThe array is sorted :"<<(isSorted(arr,n)?"True":"False")<<endl;
  return 0;
}