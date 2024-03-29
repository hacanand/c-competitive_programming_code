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
#define sort_vec(x) sort(x.begin(), x.end());
#define rsort_vec(x) sort(x.rbegin(), x.rend());
#define rev_vec(x) reverse(x.begin(), x.end());
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
    // int t;
    // cin >> t;
    // while (t--)
    // {
    //     }
    ll n, m, k;
    cin >> n >> m >> k;
    ll a[n];
    loop(n)
    {
        cin >> a[i];
    }
    vector<vector<ll>> v;
    repi(1, m + 1, 1)
    {
        ll x, y, z;
        cin >> x >> y >> z;
        x--;
        y--;
        v.push_back({x, y, z});
    }
    vector<ll> ps(m+1, 0);
    repi(1, k + 1, 1)
    {
        ll x, y;
        cin >> x >> y;
        x--;
        y--;
        ps[x]++;
        ps[y + 1]--;
    }
    ll sum = 0;
    ll ans = 0;
    vector<ll>t(n+1, 0);
    repi(0, m , 1)
    {
        sum += ps[i];
        v[i][2] *= sum;
        t[v[i][0]] += v[i][2];
        t[v[i][1] + 1] -= v[i][2];
    }
    sum = 0;
    loop(n)
    {
        sum += t[i];
        t[i] = sum;
        cout<<t[i]+a[i]<<" ";
    }
    cout<<"\n";
    return 0;
}
