// #include <bits/stdc++.h>
// using namespace std;

// int solve(vector<int> &nums, int d)
// {
//     int n = size(nums);
//     unordered_map<int, int> counter;
//     int pairs = 0;
//     for (int k = 2; k < n; k++)
//     {
//         int key = nums[k] % d;
//         counter[key]++;
//     }
//     for (int j = 1; j < n; j++)
//     {
//         if (j >= 2)
//         {
//             counter[nums[j] % d]--;
//         }
//         for (int i = 0; i < j; i++)
//         {
//             int match = (d - (nums[i] + nums[j]) % d) % d;
//             pairs += counter.count(match) ? counter[match] : 0;
//         }
//     }
//     return pairs;
// }
// int main()
// {

//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);
//     int n;
//     cin >> n;
//     int d;
//     cin >> d;
//     vector<int> ans(n);
//     for(int i=0;i<n;i++)
//     {
//         cin >> ans[i];
//     }
//      cout<<solve(ans, d);

//     return 0;
// }

 


