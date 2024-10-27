#include<bits/stdc++.h>
using namespace std;

void mstPrim(vector<pair<int,int>> adj[],int n){
    vector<int> parent(n,-1);
    vector<int> key(n,INT_MAX);
    vector<bool> mstSet(n,false);
    priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>> pq;
    key[0] = 0;
    pq.push({0,0});
    while(!pq.empty()){
        int u = pq.top().second;
        pq.pop();
        mstSet[u] = true;
        for(auto it:adj[u]){
            int v = it.first;
            int weight = it.second;
            if(mstSet[v]==false && weight<key[v]){
                parent[v] = u;
                pq.push({key[v],v});
                key[v] = weight;
            }
        }
    }
    for (int i = 1; i < n;i++){
        cout << parent[i] << " - " << i << endl;
    }
}

int main()
{
    return 0;
}