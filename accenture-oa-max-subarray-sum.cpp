#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    // vector<int> dp(n);
    // dp[0] = arr[0];
    // for (int i = 1; i < n; i++)
    // {
    //     dp[i] = max(arr[i], dp[i - 1] + arr[i]);
    // }
    // cout << *max_element(dp.begin(), dp.end()) << endl;

    // kadane's algorithm


    // int max_sum = INT_MIN, sum = 0;
    // for (int i = 0; i < n; i++)
    // {
    //     sum = max(arr[i], sum + arr[i]);
    //     max_sum = max(max_sum, sum);
    // }
    // cout << max_sum << endl;


    // prefix sum approach

    // vector<int> pre(n, 0);
    // pre[0] = arr[0];
    // for (int i = 1; i < n;i++){
    //     pre[i]=pre[i-1]+arr[i];
    // }
    // int res = INT_MIN;
    // int max_sum = 0;
    // for (int i = 0; i < n;i++){
    //     res=max(res,pre[i]- max_sum);
    //     max_sum = min(max_sum,pre[i]);
    // }
    // cout << res << endl;
    
    return 0;
}