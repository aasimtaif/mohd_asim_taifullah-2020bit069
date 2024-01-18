#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;

    cout << "String" << endl;
    cin >> s;
    int n = s.length();
    for (int i = 0; i < n / 2; i++)
    {
       
        if (s[i] != s[n - 1 - i])
        {
            cout << "given string isnt palindrome " << endl;
            return 0;
        }
    }
    cout << "given string is palindrome " << endl;

    return 0;
}