#include<iostream>
using namespace std;

void subsequences(const string &s, string output, int index)
{
  if(index >= s.length())
   { cout<<output<<",";
    return;}
  //include
  subsequences(s,output+s[index],index+1);
  //exclude
  subsequences(s,output,index+1);
}

int main()
{
  string s,output;
  int index;
  s="ab";output="";
  subsequences(s,output,0);
  cout<<endl;
  return 0;
}