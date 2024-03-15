#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define loop(n) for (long long i = 0; i < n; i++)
#define rloop(n) for (long long i = n - 1; i >= 0; i--)
#define fori(n) for (auto &i : n)
  
int main()
{

#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output1.txt", "w", stdout);
#endif

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int f = 1;
        vector<int>a(n);
        for (int i = n - 1; i > 0 && f; i--)
            if (a[i] > a[i + 1])
                if (a[i] / 10 > a[i] % 10 || a[i] % 10 > a[i + 1])
                    f = 0;
                else
                    a[i] /= 10;
        if (f)
            cout << "YES\n";
        else
            cout << "NO\n";
    }
    return 0;
}
