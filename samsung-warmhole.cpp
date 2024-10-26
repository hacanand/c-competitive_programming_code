#include <iostream>
using namespace std;

#define inf 1e9;
int findmin(int visited[],int dist[]){
    int node;
    int val = inf;
    for (int i = 0; i < 2 * n + 2;i++){
        
    }
}
void dijkestra(int graph[100][100], int n)
{
    int visited[2 * n + 2];
    int dist[2 * n + 2];
    for (int i = 0; i < 2; i++)
    {
        visited[i] = 0;
        dist[i] = inf;
    }
    dist[0] = 0;
    for (int i = 0; i < 2 * n + 1; i++)
    {
        int u = findmin(visited, dist);
        visited[u] = i;
        for (int j = 0; j <= 2 * n + 2; j++)
        {
            if (dist[u] != inf &&visited[u][v]==0 && graph[u][v]!=-1 &&dist[u]+graph[u][v]<dist){

            }
        }
    }
    cout << dist[1] << endl;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int graph[100][100];
        for (int i = 0; i < 2 * n + 2; i++)
        {
            for (int j = i + 1; j < 2 * n + 2; j++)
            {
                graph[i][j] = -1
            }
        }
        int x[2 * n + 2], y[2 * n + 2];
        for (int i = 0; i < 2; i++)
        {
            cin >> x[i] >> y[i];
        }
        for (int i = 2; i < 2 * n + 2; i++)
        {
            int cost;
            cin >> x[i] >> y[i] >> x[i + 1] >> y[i + 1] >> cost;
            graph[i][i + 1] = cost;
            graph[i + 1][i] = cost;
        }
        for (int i = 0; i < 2 * n + 2; i++)
        {
            for (int j = i + 1; j < 2 * n + 2; j++)
            {
                if (i > 2 && i % 2 == 0)
                    continue;
                graph[i][j] = abs(x[i] - x[j]) + abs(y[i] - y[j]);
                graph[j][i] = abs(x[i] - x[j]) + abs(y[i] - y[j]);
            }
        }
        dijkestra(graph, n);
    }
}