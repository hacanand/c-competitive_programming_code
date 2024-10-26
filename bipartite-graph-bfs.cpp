#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<int> adj[n];
    for (int i = 0; i < n; i++)
    {
        int u, v;
        cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    //     vector<int> color(n, -1);
    //     queue<int> q;
    //     bool isBipartite = true;
    //     for (int i = 0; i < n; i++)
    //     {
    //         if (color[i] == -1)
    //         {
    //             q.push(i);
    //             color[i] = 0;
    //             while (!q.empty())
    //             {
    //                 int node = q.front();
    //                 q.pop();
    //                 for (auto it : adj[node])
    //                 {
    //                     if (color[it] == -1)
    //                     {
    //                         color[it] = 1 - color[node];
    //                         q.push(it);
    //                     }
    //                     else if (color[it] == color[node])
    //                     {
    //                         isBipartite = false;
    //                         break;
    //                     }
    //                 }
    //             }
    //         }
    //     }
    //     if (isBipartite)
    //     {
    //         cout << "Graph is Bipartite";
    //     }
    //     else
    //     {
    //         cout << "Graph is not Bipartite";
    //
    //     }
    //     return 0;
    // }

    // using dfs

    // bool isBipartite(vector<int> adj[], int n, int node, vector<int> &color)
    // {
    //     if (color[node] == -1)
    //         color[node] = 1;
    //     for (auto it : adj[node])
    //     {
    //         if (color[it] == -1)
    //         {
    //             color[it] = 1 - color[node];
    //             if (!isBipartite(adj, n, it, color))
    //                 return false;
    //         }
    //         else if (color[it] == color[node])
    //             return false;
    //     }
    //     return true;
    // }
    // bool checkBipartite(vector<int> adj[], int n)
    // {
    //     vector<int> color(n, -1);
    //     for (int i = 0; i < n; i++)
    //     {
    //         if (color[i] == -1)
    //         {
    //             if (!isBipartite(adj, n, i, color))
    //                 return false;
    //         }
    //     }
    //     return true;
    // }
