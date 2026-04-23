#include<iostream>
#include<string>
using namespace std;

bool isPalindrome(string &s, int i, int j)
{
    if(i >= j)
        return true;

    if(s[i] != s[j])
        return false;

    return isPalindrome(s, i+1, j-1);
}

int main()
{
    string s;
    cout << "Enter string: ";
    getline(cin, s);

    cout << "Is palindrome: "
         << (isPalindrome(s, 0, s.length()-1) ? "True\n" : "False\n");

    return 0;
}