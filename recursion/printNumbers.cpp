#include<iostream>
using namespace std;
void print(int n)
{
  if (n<=0)
    return;
  print(n-1);
  cout<<n<<" ";
}
int main()
{
  int num;
  cout<<"enter any number : ";
  cin>>num;
  print(num);
  return 0;
}