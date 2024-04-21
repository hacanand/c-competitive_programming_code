class Solution
{
public:
    bool bfs(int node, int destination, vector<int, vector<int>> &graph, vector<int> &vis)
    {
        if (node == destination)
            return true;
        vis.push_back(node);
        for (auto neighbour : graph[node])
        {
            if (find(vis.begin(), vis.end() != vis.end()))
            {
                if (dfs(neighbour, destination, graph, vis))
                {
                    return true;
                }
            }
        }
        return false;
    }
    bool validPath(int n, vector<vector<int>> &edges, int source, int destination)
    {
        vector<int, vector<int>> graph;
        int n = edges.size();
        int m = edges[0].size();
        vector<int> vis;
        for (auto &edge : edges)
        {
            int u = edge[0];
            int v = edge[1];
            graph[u] = v;
            graph[v] = u;
        }
        return dfs(source, destination, graph, vis);
    }
};