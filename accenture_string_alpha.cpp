#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin >> s;
    int count = 0;
    string l;
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == '0' and count > 0)
        {
            l += ('A' + count);
            count = 0;
        }
        else
        {
            count++;
        }
    }
    cout << l << endl;
    return 0;
}