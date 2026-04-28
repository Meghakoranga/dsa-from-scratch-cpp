#include<iostream>
#include<vector>
using namespace std;
int fib(int n,vector <int>&dp)
{
  if(n==0)return 0;
  if(n==1)return 1;

  dp[0]=0;
  dp[1]=1;
  for(int i=2;i<=n;i++)
  {dp[i]=dp[i-1]+dp[i-2];}
  return dp[n];
}
int main()
{
  int num;
  cout<<"enter any positive number : ";
  cin>>num;

  if(num<0)
  {cout<<"\nEnter only positive numbers\n";return 0;}

  vector<int> dp(num+1);

  cout<<"Fibonacci : "<<fib(num,dp)<<endl;
  return 0;
}