#include<iostream>
using namespace std;
void reverse_array(int arr[],int start,int end)
{
  if(start>=end)
    return;
  swap(arr[start],arr[end]);
  reverse_array(arr,start+1,end-1);

}
int main()
{
    int arr[] = {35,23,1,56,71,81};
    int n = sizeof(arr)/sizeof(arr[0]);

    cout << "Array: ";
    for(int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;

    reverse_array(arr, 0, n-1);

    cout << "Reversed array: ";
    for(int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;

    return 0;
}