#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define in_vec(v) vector<int> v; for (int i = 0; i < n; i++) {int x; cin >> x; v.push_back(x);}
#define out(n) cout << n << "\n";
#define loop(n) for (int i = 0; i < n; i++)
#define repi(x, a, b) for (int i = x; i < a; i+=b)
#define r_loop(n) for (int i = n - 1; i >= 0; i--)
#define for_each(n) for (auto &i : n)
#define in(n) cin >> n;
#define sort(x) sort(x.begin(), x.end());
#define r_sort(x) sort(x.rbegin(), x.rend());
#define b_find(n, x) lower_bound(n.begin(), n.end(), x) ;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output1.txt", "w", stdout);
#endif

    
        ll n, k, q;
        vector<ll> temp(200000+1, 0);
       vector<ll> bt(200000+1, 0);
        cin >> n >> k >> q;
        loop(n){
            ll x, y;
            cin >> x >> y;
            temp[x]++;
            temp[y+1]--;
        }
        ll sum = 0;
        loop(200001 ){
            sum += temp[i];
            bt[i] = sum;
            if(bt[i] >= k){
                bt[i] = 1;
            } else {
                bt[i] = 0;
            }
        }
        repi(1, 200001, 1){
            bt[i] += bt[i-1];
        }
        while(q--){
            ll x, y;
            cin >> x >> y;
            ll ans = bt[y];
            if(x-1>=0){
                ans -= bt[x-1];
            }
            cout << ans << "\n";
        }
          
    
    return 0;
}
