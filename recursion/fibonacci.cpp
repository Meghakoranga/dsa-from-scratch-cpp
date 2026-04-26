#include<iostream>
using namespace std;
int fib(int n)
{
  if(n<0)
  {  cout<<"Invalid Number \n";
    return 0;
  }
  if (n<=1)
    return n;

  return (fib(n-1)+fib(n-2));  //T.C=O(2^n)
}
int main()
{
  int num;
  cout<<"Enter the number ";
  cin>>num;
  cout<<"\nFibonacci of the number : "<<num <<" is "<<fib(num)<<endl;

  return 0;
}