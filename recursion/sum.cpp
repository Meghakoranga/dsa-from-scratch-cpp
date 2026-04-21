#include<iostream>
using namespace std;
int sum(int n)
{
    if(n < 0)
    {
        cout << "Invalid input\n";
        return -1;
    }

    if(n == 0)
        return 0;

    return n + sum(n - 1);
}
int main()
{
  int num;
  cout<<"enter any number : ";
  cin>>num;
  cout<<"Sum of first "<<num<<" numbers : "<<sum(num);
  return 0;
}