#include <bits/stdc++.h>
using namespace std;

class Solution
{

public:
    bool isCycle(int v, vector<int> adj[], vector<bool> &visited)
    {
        queue<pair<int, int>> q;
        q.push({v, -1});
        visited[v] = true;
        while (!q.empty())
        {
            int node = q.front().first;
            int parent = q.front().second;
            q.pop();
            for (auto vtx : adj[node])
            {
                if (!visited[vtx])
                {
                    visited[vtx] = true;
                    q.push({vtx, node});
                }
                else if (vtx != parent)
                    return true;
            }
        }
        return false;
    }
};

int main(){
    int n;
    cin >> n;
    vector<int> adj[n];
    for (int i = 0; i < n; i++)
    {
        int u, v;
        cin >> u >> v;
        adj[v].push_back(u);
        adj[u].push_back(v);
    }
    for(int i=)
}