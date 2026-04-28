#include<iostream>
#include<vector>
using namespace std;
int fib(int n,vector <int>&dp)
{
  dp[0]=0;
  dp[1]=1;
  for(int i=2;i<=n;i++)
  {dp[i]=dp[i-1]+dp[i-2];}
  return dp[n];
}
int main()
{
  int num;
  vector <int> dp(num+1);
  cout<<"enter any positive number : ";
  cin>>num;
  cout<<"Fibonacci : "<<fib(num,dp)<<endl;
  return 0;
}