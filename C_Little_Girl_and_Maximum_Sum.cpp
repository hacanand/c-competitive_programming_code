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
#define b_find(v, x) lower_bound(v.begin(), v.end(), x);

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
        ll n, m;
        cin >> n >> m;
        vector<ll> a(n);
        loop(n)
        {
            in(a[i]);
        }
        sort_vec(a);
        rev_vec(a);
        vector<ll> freq(n, 0);
        while (m--)
        {
            ll l, r;
            cin >> l >> r;
            l--;
            r--;
            freq[l]++;
            if (r + 1 < n)
            {
                freq[r + 1]--;
            }
        }
        ll sum = 0;
        vector<pair<ll, ll>> v;
        loop(n)
        {
            sum += freq[i];
            freq[i] = sum;
            v.push_back({sum, i});
        }
        sort_vec(v);
        rev_vec(v);
        ll t[n];
        ll main_sum = 0;
        loop(n)
        {
            ll sum = v[i].first;
            ll index = v[i].second;
            t[index] = a[i];
            main_sum += (sum * a[i]);
        }
        cout << main_sum << "\n";
    

    return 0;
}
