#include<iostream>
#include<string>
using namespace std;
void reverse(string &s, int i, int j)
{
  if(i>=j)
    return ;
  swap(s[i],s[j]);
  return reverse(s,i+1,j-1);
}

int main()
{
  string s;
  cout<<"Original String : ";
  getline(cin,s);
 
  reverse(s,0,s.length()-1);
  cout<<"reversed string : "<<s<<endl;
  
  return 0;
}