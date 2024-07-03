#include <bits/stdc++.h>
using namespace std;
#define int long long

int32_t main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k, h;
        cin >> n >> k >> h;

        int count = 0;

        for (int a = 1; a <= n; a++)
        {
            int b_max = n;
            for (int i = 0; i < k; i++)
            {
                if (i == 0)
                {
                    if (a < h)
                    {
                        b_max = 0; // No valid b for i=0 if a < h
                        break;
                    }
                }
                else
                {
                    // Calculate max b for this i
                    int new_b_max = (a * (i + 1) - h + i - 1) / i;
                    b_max = min(b_max, new_b_max);
                }
            }

            if (b_max >= 1)
            {
                count += b_max;
            }
        }

        cout << count << endl;
    }
    return 0;
}