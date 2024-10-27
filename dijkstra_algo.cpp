#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<pair<int,int>> adj[n];
    for(int i=0;i<n;i++){
        int u,v,w;
        cin >> u >> v >> w;
        adj[u].push_back({v,w});
        adj[v].push_back({u,w});
    }
    int src;
    cin >> src;
    priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;
    vector<int> dist(n+1, INT_MAX);
    dist[src] = 0;
    pq.push({0, src});
    while(!pq.empty()){
        int node=pq.top().second;
        int distance=pq.top().first;
        pq.pop();
        for(auto it:adj[node]){
            if(distance+it.second<dist[it.first]){
                dist[it.first] = distance + it.second;
                pq.push({dist[it.first],it.first});
            }
        }
    }
    
    return 0;
}