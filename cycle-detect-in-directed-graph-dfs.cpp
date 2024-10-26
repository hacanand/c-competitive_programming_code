#include<bits/stdc++.h>
using namespace std;

bool dfs(int node,vector<int>adj[],vector<int>&vis,vector<int>&dfsVis){
    vis[node] = 1;
    dfsVis[node] = 1;
    for(auto it:adj[node]){
        if(!vis[it]){
            if(dfs(it,adj,vis,dfsVis))
                return true;
        }else if(dfsVis[it]==1)
            return true;

        dfsVis[node] = 0;
    }
    return false;
}

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
    }

    return 0;
}