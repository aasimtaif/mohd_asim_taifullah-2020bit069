#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s[] = {"flower", "flow", "flight"};
    string comm;
    int j = 0;
    for (int i = 0; i < 4; i++)
    {
        if (s[0][i] == s[1][i] and s[1][i] == s[2][i])
        {
            comm.push_back(s[0][i]);
        }
    }
    return 0;
}