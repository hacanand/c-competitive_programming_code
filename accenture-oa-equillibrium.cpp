#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    vector<int> pre(n + 1, 0);
    for (int i = 1; i <= n; i++)
    {
        pre[i] = pre[i - 1] + v[i - 1];
    }
    for (int i = 0; i < n; i++)
    {
        int left_sum = pre[i + 1];
        int right_sum = pre[n] - pre[i + 1];
        if (left_sum == right_sum)
        {
            cout << i << endl;
            return 0;
        }
    }

    return -1;
}