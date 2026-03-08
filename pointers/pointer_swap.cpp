#include<iostream>
using namespace std;
void swapnumbers(int *a, int *b)
{
    int c=*a;
    *a=*b;
    *b=c;
    cout<<"\nswapped numbers  are : num1="<<*a<<" num2="<<*b<<"\n";

}
int findSmallest(int* arr, int size)
{
    int temp=*arr,*ptr;
    ptr=arr;
    for(int i=0;i<size;i++)
    {
       if(temp>*ptr)
        {temp=*ptr;}
       ptr++;
    }
    return temp;
    }
int main()
{
    int num1,num2;
    cout<<"Enter the numbers with  space in between :";
    cin>>num1>>num2;
    swapnumbers(&num1,&num2);
    int n;
    cout<<"enter the size of array";cin>>n;
    int* arr = new int[n]; //or vector<int> arr(n)
    for (int i=0;i<n;i++)
    {cin>>arr[i];}
    int smallest=findSmallest(arr,n);
    cout<<"smallest number in array is :"<<smallest;
    
    delete[] arr;

    return 0;
}