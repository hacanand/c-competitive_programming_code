#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define loop(n) for (long long i = 0; i < n; i++)
#define rloop(n) for (long long i = n - 1; i >= 0; i--)
#define fori(n) for (auto &i : n)

// int minCoins(int coins[], int m, int n){
//     if(n == 0)
//     {
//         return 0;

//     }
//     int res = INT_MAX;
//     for(int i = 0; i < m; i++){
//         if(coins[i] <= n){
//             int sub_res = minCoins(coins, m, n - coins[i]);
//             if(sub_res != INT_MAX && sub_res + 1 < res)
//             {
//                 res = sub_res + 1;
//             }
//         }

//     }
//     return res;
// }
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
        ll n;
        cin >> n;
        ll ans = n;
        for (int l = 0; l < 5; l++)
        {
            for (int k = 0; k < 5; k++)
            {
                for (int j = 0; j < 5; j++)
                {

                    for (int i = 0; i < 5; i++)
                    {
                        ll maxi = i * 1 + j * 3 + k * 6 + l * 10;
                        ll extra = n - maxi;
                        if (extra>= 0 && (extra) % 15 == 0)
                        {
                            ans = min(ans, i + j + k + l + (extra) / 15);
                        }
                    }
                }
            }
        }

        cout << ans << endl;
    }
    return 0;
}
//         int coins[] = {1,3,6,10,15} ;
//         int m = sizeof(coins) / sizeof(coins[0]);
//         int n;
//         cin >> n;
//         int result = minCoins(coins, m, n);
//         if(result == INT_MAX)
//         {
//             cout << "-1" << "\n";
//         }
//         else
//         {
//             cout << result << "\n";
//         }
//     }
//     return 0;
// }


