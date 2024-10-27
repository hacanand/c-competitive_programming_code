#include <bits/stdc++.h>
using namespace std;

void topoSort(vector<int> adj[], vector<int> indegree, vector<int> topoArray)
{
    queue<int> q;
    for (int i = 0; i < indegree.size(); i++)
    {
        if (indegree[i] == 0)
        {
            q.push(i);
        }
        while (!q.empty())
        {
            int node = q.front();
            q.pop();
            topoArray.push_back(node);
            for (auto it : adj[node])
            {
                indegree[it]--;
                if (indegree[it] == 0)
                {
                    q.push(it);
                }
            }
        }
    }
}
    int main()
    {
        int n;
        cin >> n;
        vector<int> adj[n];
        vector<int> indegree(n);
        vector<int> topoArray(n);
        for (int i = 0; i < n; i++)
        {
            int u, v;
            cin >> u >> v;
            adj[u].push_back(v);
            indegree[v]++;
        }
        topoSort(adj, indegree, topoArray);
        vector<int> dist(n, INT_MAX);
        dist[0] = 0;
        while(!topoArray.empty()){
            int node = topoArray.back();
            topoArray.pop_back();
            if(dist[node]!=INT_MAX){
                for(auto it:adj[node]){
                    if(dist[node]+1<dist[it]){
                        dist[it]=dist[node]+1;
                    }
                }
            }

        }
        return 0;
    }