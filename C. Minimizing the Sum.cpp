#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int minSumAfterOperations(vector<int> &nums, int k)
{
    int n = nums.size();

    // Sort the array to prioritize reducing larger elements.
    sort(nums.begin(), nums.end(), greater<int>());

    // Perform operations greedily.
    for (int i = 0; i < k; ++i)
    {
        // Replace the current largest element with its smaller neighbor.
        if (i + 1 < n)
        {
            nums[i] = nums[i + 1];
        }
    }

    // Calculate the final sum.
    int sum = 0;
    for (int num : nums)
    {
        sum += num;
    }

    return sum;
}

int main()
{
    int t;
    cin >> t;
    while(t--){
    int n, k;
    cin >> n >> k;

    vector<int> nums(n);
    for (int i = 0; i < n; ++i)
    {
        cin >> nums[i];
    }

    int minSum = minSumAfterOperations(nums, k);
    cout << minSum << endl;
}
    return 0;
}