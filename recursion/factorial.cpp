#include<iostream>
using namespace std;
int factorial(int num)
{
  if (num<0)
  {
    cout<<"invalid input \n";
    return -1;
  }
  //base case
  if(num<=1)
    return 1;
    
  return num * factorial(num-1);
}
int main()
{
  int num;
  cout<<"Enter any number : ";
  cin>>num;
  cout<<"\nFactorial of "<<num<<" : "<<factorial(num);
  return 0;
}