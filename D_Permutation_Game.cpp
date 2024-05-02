#include <bits/stdc++.h>
using namespace std;
#define ll long long
void solve()
{

    ll n, k, pb, ps;
    cin >> n >> k >> pb >> ps;
    pb--;
    ps--;
    vector<ll> a(n);vector<bool> vs(n);
    vector<ll> s;vector<bool> vb(n);
    vector<ll> b;
    vector<ll> p(n);
   
    
   

    for (int i = 0; i < n; i++)
    {
        cin >> p[i];
        p[i]--;
    }
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    

    while (!vb[pb])

    {
        b.push_back(a[pb]);
        vb[pb] = 1;
        pb = p[pb];
    }
    int x=b.size();
   
    while (!vs[ps])

    {
        s.push_back(a[ps]);
        vs[ps] = 1;
        ps = p[ps];
    }

    ll aopguio = 0, aljdsf = 0, poiuq = 0, oiuroi = 0;
    int x1 = s.size();
    for (int i = 0; i < x && i < k; i++)
    {
        ll y = poiuq + b[i] * (k - i);
        aopguio = max(aopguio, y);
        poiuq += b[i];
    }

    for (int i = 0; i < x1 && i < k; i++)
    {   ll z = oiuroi + s[i] * (k - i);
        aljdsf = max(aljdsf, z);
        oiuroi += s[i];
    }
    cout << (aopguio == aljdsf ? "Draw" : (aopguio > aljdsf ? "Bodya" : "Sasha")) << endl;
}

signed main()
{

    ll testCase = 1;
    cin >> testCase;
    for(int i=0;i<testCase;i++)

    {
        solve();
    }
    return 0;
}
