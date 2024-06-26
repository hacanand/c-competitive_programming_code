#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>

using namespace std;

int main()
{
    int tcn;
    cin >> tcn;

    for (int _ = 0; _ < tcn; ++_)
    {
        int N;
        cin >> N;

        vector<vector<int>> graph(N);
        vector<int> values(N);

        for (int i = 0; i < N; ++i)
        {
            cin >> values[i];
        }

        for (int i = 0; i < N - 1; ++i)
        {
            int a, b;
            cin >> a >> b;
            graph[b - 1].push_back(a - 1);
            graph[a - 1].push_back(b - 1);
        }

        int min_value_index = distance(values.begin(), min_element(values.begin(), values.end()));

        vector<int> order;
        vector<bool> visited(N, false);
        order.push_back(min_value_index);
        visited[min_value_index] = true;

        queue<int> bfs;
        bfs.push(min_value_index);

        while (!bfs.empty())
        {
            int node = bfs.front();
            bfs.pop();

            for (int neighbor : graph[node])
            {
                if (!visited[neighbor])
                {
                    visited[neighbor] = true;
                    bfs.push(neighbor);
                    order.push_back(neighbor);
                }
            }
        }

        vector<int> ans = vector<int>(order.begin() + 1, order.end());
        reverse(ans.begin(), ans.end());

        for (int i = 0; i < ans.size(); i++)
        {
            ans[i]++;
        }

        cout << ans.size() << endl;
        for (int i = 0; i < ans.size(); i++)
        {
            cout << ans[i] << " ";
        }
        cout << endl;
    }

    return 0;
}