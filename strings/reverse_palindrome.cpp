#include<iostream>
#include<string>
using namespace std;
int main()
{
    string s;
    cout<<"Enter any string \n";
    getline(cin,s);
    string s1=s;
    int i=0,j=s.length()-1;
    while(i <j)
    {
        swap(s[i],s[j]);
         i++;
         j--;

    }
    cout<<"\nreversed string:"<<s<<"\n>";
    if (s1==s)
    {cout<<"\nthis string is a palendrome \n";}
    else
    cout<<"\nnot a palendrome \n";
    return 0;
}
