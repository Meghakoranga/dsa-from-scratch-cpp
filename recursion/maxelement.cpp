#include<iostream>
using namespace std;
int maxelement(int arr[],int n)
{
  if(n==0)
    return arr[0];
  return max(arr[0],maxelement(arr+1,n-1));
  
}
int main()
{
  int arr[]={93,4,9,56,78};
  int size=sizeof(arr)/sizeof(arr[0]);

  cout<<"maximum value in array is : "<<maxelement(arr,size)<<endl;
  return 0;
}