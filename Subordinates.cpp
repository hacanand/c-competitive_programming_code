#include <bits/stdc++.h>
using namespace std;
#define MAXN 202020
vector<int> subtree_size(MAXN,0);
int calculate(vector<vector<int>> &adj, int node)
{
    if (adj[node].size() == 0)
    {
        return 1;
    }
    else
    {

        for (auto child : adj[node])
        {
            subtree_size[node] += calculate(adj, child);
            //cout << subtree_size[node];
        }
    }
    return subtree_size[node] + 1;
}
int main()
{
    int n;
    cin >> n;
    vector<vector<int>>adj(n+1);

    for (int i = 2; i <= n; i++)
    {
        int x;
        cin >> x;
        adj[x].push_back(i);
    }
    calculate(adj, 1);
    for (int i = 1; i <= n; i++)
    {
        cout << subtree_size[i] << " ";
    }
    return 0;
}

// #include <bits/stdc++.h>
// using namespace std;
// #define MAXN 202020

// vector<vector<int>> adj(MAXN);
// vector<int> subtree_size(MAXN);

// int calc(int node)
// {
//     if (adj[node].size() == 0)
//     {
//         return 1;
//     }
//     else
//     {
//         for (int i = 0; i < adj[node].size(); i++)
//         {
//             subtree_size[node] += calc(adj[node][i]);
//         }
//     }
//     return subtree_size[node] + 1;
// }

// int main()
// {
//     int n;
//     cin >> n;
//     for (int i = 2; i <= n; i++)
//     {
//         int boss;
//         cin >> boss;
//         adj[boss].push_back(i);
//     }
//     calc(1);
//     for (int i = 1; i <= n; i++)
//     {
//         cout << subtree_size[i] << " ";
//     }
//     return 0;
// }