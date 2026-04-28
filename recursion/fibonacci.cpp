//space optimized 
#include<iostream>
using namespace std;
int fib(int n)
{
  if(n<=1)
    return n;
  int a=0,b=1,next;
  for(int i=2;i<=n;i++)
  {
    next = a+b;
    a=b;
    b=next;
  }
  return b;
}
int main()
{
  int num;
  cout<<"Enter any positive number : ";
  cin>>num;
  
  if(num<0)
  {cout<<"\nInvalid input";return 0;}  

  cout<<"Fibonacci of "<<num<<" is "<<fib(num)<<endl;
  return 0;
}