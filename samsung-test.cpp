#include <iostream>
#include <vector>
#include <climits>
using namespace std;
void calculatePrefixSums(const vector<int> &nums, vector<int> &prefixSums)
{
    int n = nums.size();
    int currSum = 0;
    for (int i = 0; i < n; ++i)
    {
        currSum += nums[i];
        prefixSums[i] = currSum;
    }
}
void calculateMaxSubarraySumFromLeft(const vector<int> &nums, vector<int> &maxSums)
{
    int n = nums.size();
    int currSum = 0, currMax = INT_MIN;
    for (int i = 0; i < n; ++i)
    {
        currSum += nums[i];
        if (currSum > currMax)
        {
            currMax = currSum;
        }
        maxSums[i] = currMax;
        if (currSum < 0)
        {
            currSum = 0;
        }
    }
}
void calculateMaxSubarraySumFromRight(const vector<int> &nums, vector<int> &maxSums)
{
    int n = nums.size();
    int currSum = 0, currMax = INT_MIN;
    for (int i = n - 1; i >= 0; --i)
    {
        currSum += nums[i];
        if (currSum > currMax)
        {
            currMax = currSum;
        }
        maxSums[i] = currMax;
        if (currSum < 0)
        {
            currSum = 0;
        }
    }
}
void calculateMinSubarraySumFromLeft(const vector<int> &nums, vector<int> &minSums)
{
    int n = nums.size();
    int currSum = 0, currMin = INT_MAX;
    for (int i = 0; i < n; ++i)
    {
        currSum += nums[i];
        if (currSum < currMin)
        {
            currMin = currSum;
        }
        minSums[i] = currMin;
        if (currSum > 0)
        {
            currSum = 0;
        }
    }
}
void calculateMinSubarraySumFromRight(const vector<int> &nums, vector<int> &minSums)
{
    int n = nums.size();
    int currSum = 0, currMin = INT_MAX;
    for (int i = n - 1; i >= 0; --i)
    {
        currSum += nums[i];
        if (currSum < currMin)
        {
            currMin = currSum;
        }
        minSums[i] = currMin;
        if (currSum > 0)
        {
            currSum = 0;
        }
    }
}
int maxDifference(const vector<int> &nums)
{
    int n = nums.size();
    vector<int> leftMax(n), rightMax(n), leftMin(n), rightMin(n);
    calculateMaxSubarraySumFromLeft(nums, leftMax);
    calculateMaxSubarraySumFromRight(nums, rightMax);
    calculateMinSubarraySumFromLeft(nums, leftMin);
    calculateMinSubarraySumFromRight(nums, rightMin);
    int maxDiff = INT_MIN;
    for (int i = 0; i < n - 1; ++i)
    {
        if (rightMax[i + 1] - leftMin[i] > maxDiff)
        {
            maxDiff = rightMax[i + 1] - leftMin[i];
        }
        if (leftMax[i] - rightMin[i + 1] > maxDiff)
        {
            maxDiff = leftMax[i] - rightMin[i + 1];
        }
    }
    return maxDiff;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> nums(n);
        for (int i = 0; i < n; ++i)
        {
            cin >> nums[i];
        }
        cout << maxDifference(nums) << endl;
    }
    return 0;
}