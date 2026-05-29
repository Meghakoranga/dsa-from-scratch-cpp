#include<iostream>
using namespace std;
void permutation_string(string s,int index)
{
  if(index>=s.length())
    {
      cout<<s<<" ";return;
    }
  for(int i=index;i<s.length();i++)
  {     
    swap(s[index],s[(i)]);
    permutation_string(s,index+1);
    swap(s[index],s[i]);


  }
}
int main()
{
  string s="abc";
  permutation_string(s,0);
  cout<<endl;
  return 0;
}