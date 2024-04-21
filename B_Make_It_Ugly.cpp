#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define in_vec(v)               \
    vector<int> v;              \
    for (int i = 0; i < n; i++) \
    {                           \
        int x;                  \
        cin >> x;               \
        v.push_back(x);         \
    }
#define out(n) cout << n << "\n";
#define loop(n) for (int i = 0; i < n; i++)
#define repi(x, a, b) for (int i = x; i < a; i += b)
#define r_loop(n) for (int i = n - 1; i >= 0; i--)
#define for_each(n) for (auto &i : n)
#define in(n) cin >> n;
#define sort(x) sort(x.begin(), x.end());
#define r_sort(x) sort(x.rbegin(), x.rend());
#define b_find(n, x) lower_bound(n.begin(), n.end(), x);
#define mod 1000000007
#define fast_io                       \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);

int main()
{
    fast_io int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> res;
        // map<int, int> mp;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            res.push_back(x);
            // mp[x]++;
        }
        if (equal(res.begin() + 1, res.end(), res.begin()))
        {
            cout << -1 << endl;
            continue;
        }
        int ans = n;
        int isx = 0;
        int x = res[0];

        for (int i = 0; i < n; i++)
        {
            if (res[i] == res[0])
            {
                isx++;
            }
            else
            {
                ans = min(ans, isx);
                isx = 0;
            }
        }
        ans = min(ans, isx);

        cout << ans << endl;
    }

    return 0;
}
