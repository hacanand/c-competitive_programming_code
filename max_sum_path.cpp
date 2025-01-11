#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void dfsMaxSum(int sum, int k, vector<int> &a, vector<vector<int>> &edges, int node, int &maxSum)
{
    sum += a[node - 1];
    bool isLeaf = true;

    for (int neighbor : edges[node])
    {
        isLeaf = false;
        dfsMaxSum(sum, k, a, edges, neighbor, maxSum);
    }

    // If it's a leaf node and the sum is not divisible by k, update maxSum
    if (isLeaf && sum % k != 0)
    {
        maxSum = max(maxSum, sum);
    }
}

int main()
{
    int n;
    cin >> n;

    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    vector<vector<int>> edges(n + 1); // Adjust size for 1-based indexing
    for (int i = 0; i < n - 1; i++)
    {
        int u, v;
        cin >> u >> v;
        edges[u].push_back(v);
    }

    int k;
    cin >> k;

    int maxSum = -1;
    dfsMaxSum(0, k, a, edges, 1, maxSum);

    cout << maxSum << endl;

    return 0;
}
