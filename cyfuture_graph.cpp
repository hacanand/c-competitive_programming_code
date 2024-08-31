#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;
    vector<int> a(m + 1), b(m + 1);
    for (int i = 1; i <= m; i++)
    {
        cin >> a[i];
    }
    for (int i = 1; i <= m; i++)
    {
        cin >> b[i];
    }

    vector<vector<pair<int, int>>> graph(n + 1); // Initialize graph
    for (int i = 1; i <= n; i++)
    {
        graph[a[i]].push_back(make_pair(b[i], i));
        graph[b[i]].push_back(make_pair(a[i], i));
    }

    vector<int> ans(n + 1, -1); // Initialize ans array

    for (int i = 1; i <= n; i++)
    {
        queue<pair<int, int>> q;
        vector<bool> visited(n + 1, false);
        q.push(make_pair(1, 0)); // Start BFS from town 1
        int count = 0;
        int mini = INT_MAX;

        while (!q.empty())
        {
            auto p = q.front();
            q.pop();
            int node = p.first;
            cout << "node_q : " << node << endl;
            // int road = p.second;

            if (node == n and count != 0)
            {
                cout << "count_n : " << count << endl;

                mini = min(count, mini);
                ans[i] = mini; // Store the minimum number of roads
            }

            for (auto x : graph[node])
            {
                if (!visited[x.first] && x.second != i)
                { // Exclude the current road
                    visited[x.first] = true;
                    q.push(make_pair(x.first, x.second));

                    cout << "count_if : " << count << endl;
                }
            }
            count++;
        }
    }

    for (int i = 1; i <= n; i++)
    {
        cout << ans[i] << " ";
    }
    cout << endl;

    return 0;
}
