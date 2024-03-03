#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define loop(n) for (long long i = 0; i < n; i++)
#define rloop(n) for (long long i = n - 1; i >= 0; i--)
#define fori(n) for (auto &i : n)

int main()
{
    static auto x = []()
    {
        std::ios::sync_with_stdio(false);
        cin.tie(nullptr);
        return nullptr;
    }();
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
      vector<int> a(n);
        loop(n)
        {
            cin >> a[i];

        }
        sort(a.begin(), a.end());

       
        ll max_value = 0;
        max_value = abs(a[0] - a[n - 2])  + abs(a[1] - a[n - 1])+ abs(a[1] - a[n - 2])+abs(a[0] - a[n - 1]) ;
        ;

        cout << max_value << "\n";
    }
    
    return 0;
}
