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
#define out(n) cout << n << "\n"
#define loop(n) for (int i = 0; i < n; i++)
#define repi(x, a, b) for (int i = x; i < a; i += b)
#define r_loop(n) for (int i = n - 1; i >= 0; i--)
#define for_each(n) for (auto &i : n)
#define in(n) cin >> n;
#define sort(x) sort(x.begin(), x.end());
#define r_sort(x) sort(x.rbegin(), x.rend());
#define b_find(n, x) lower_bound(n.begin(), n.end(), x);

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output1.txt", "w", stdout);
#endif
    int t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        ll a[n];
        loop(n){
            cin >> a[i];
        }
        ll m;
        cin >> m;
        ll sum = 0;
        loop(m){
            ll x;
            cin >> x;
            sum += x;
        }
        out(a[sum % n]);
    }

    return 0;
}
