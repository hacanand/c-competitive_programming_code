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
       string st;
        cin >> st;

        ll f = 0;
        int i = 0;
      ll  res = 0;

       while(i < st.size())
        {
            if (st[i] == '1')
            {
               f++; 
            }
            else if (f)
            {
                res += (f + 1);
            }
            i++;
        }
        cout << res << endl;
    }

    return 0;
}