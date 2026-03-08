//largest number in an array 
#include<iostream>
#include<vector>
using namespace std;
int main()
{
    int n;
    cout<<"enter the size of the array:";
    cin>>n;
    vector <int> arr(n);
    cout<<"enter the array elements:";
    for (int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int largest=arr[0];
for (int i=0;i<n;i++)
{if (arr[i]>largest)
      largest=arr[i];
   } 
   cout<<"\nlargest number is :"<<largest<<"\n"; 
 return 0;
}