#include<bits/stdc++.h>
using namespace std;

void bfs(vector<int>adj[],int n,int src){
    vector<int>dist(n,INT_MAX);
    dist[src]=0;
    queue<int>q;
    q.push(src);
    while(!q.empty()){
        int node = q.front();
        q.pop();
        for(auto it:adj[node]){
            if(dist[node]+1<dist[it]){
                dist[it]=dist[node]+1;
                q.push(it);
            }
        }
    }
}

int main()
{
    int n;
    cin >> n;
    vector<int>adj[n];
    for(int i=0;i<n;i++){
        int u,v;
        cin >> u >> v;
        adj[u].push_back(v);
    }
    bfs(adj,n,0);
    return 0;
}