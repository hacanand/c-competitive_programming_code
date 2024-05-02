#include <bits/stdc++.h>
#include <iostream>
using namespace std;
#define int long long
#define endl "\n"
#define mod 1000000007
int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t ;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        set<int> seta;
        vector<string> s(n);
        for (int i = 0; i < n; i++)
        {
            cin >> s[i];
            int flag = 0, flag2 = 0;
            for (int j = 0; j < k; j++)
            {
                if (s[i][j] == '1')
                {
                    flag2 = j;
                    flag++;
                }
            }
            if (flag == 1)
            {
                seta.insert(flag2);
            }
        }
        if (seta.size() == k)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
    return 0;
}
