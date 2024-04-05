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
#define fast_io ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

int dp[100013],k;
int solve(int n){
    if(n==0)
        return 1;
    if(n<0)
        return 0;
    if(dp[n]!=-1)
        return dp[n];
    return dp[n] = (solve(n-1)+solve(n-k))%mod;
}

int main()
{
    fast_io
    int t;
    cin >> t>>k;
    memset(dp, -1, sizeof(dp));

    
        int pre[100013]; pre[0]=solve(0);
        for (int i = 1; i < 100013;i++){
            pre[i] =(pre[i-1]+ solve(i))%mod;
        }
        while(t--){
            int a, b;
            cin >> a >> b;
            int sum = (pre[b] - pre[a - 1])%mod;
            if(sum<0)
                sum += mod;
            
            cout << sum << "\n";
        }
        
    

    return 0;
}
