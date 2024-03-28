#include <bits/stdc++.h>
using namespace std;
void solve()
{
    vector<int> v = {1, 14641, 10, 11, 100, 10101, 13431, 101, 1110, 110, 111, 121, 1000, 1001, 1010, 1011, 1100, 1101, 1111, 1210, 1221, 10100, 1331, 10000, 10010, 10011, 11100, 10110, 10111, 10201, 11000, 11001, 11010, 11011, 11101, 11110, 11111, 11121, 11211, 12100, 12111, 12210, 12221, 12321, 13310, 10001, 100000};
    bool flag = false;
    int n;
    cin >> n;
    
    for (auto c : v)
    {
        if (n == c)
        {
            flag = true;
            break;
        }
    }
    if (!flag)
    {
        cout << "NO" << endl;
    }
    else
    {
        cout << "YES" << endl;
    }
}

int main()
{
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        solve();
    }
}