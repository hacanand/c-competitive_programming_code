#include <iostream>
#include <vector>
#include <limits>

using namespace std;

int maxSubArraySum(  vector<int> &nums)
{
    int maxSoFar = INT_MIN;
    int maxEndingHere = 0;

    for (int num : nums)
    {
        maxEndingHere = max(0, maxEndingHere + num);
        maxSoFar = max(maxSoFar, maxEndingHere);
    }

    return maxSoFar;
}

int main()
{
    int n;
    cin >> n;
    vector<int>nums(n);
    for (int i = 0; i < n;i++){
        cin >> nums[i];
    }
        int maxSum = maxSubArraySum(nums);

    cout  << maxSum << endl;

    return 0;
}