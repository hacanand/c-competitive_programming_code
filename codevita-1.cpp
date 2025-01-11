#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    int numLines;
    cin >> numLines;
    vector<vector<pair<int, int>>> paths(numLines);
    map<pair<int, int>, vector<int>> pointTracker;

    for (int i = 0; i < numLines; i++)
    {
        int x1, y1, x2, y2;
        cin >> x1 >> y1 >> x2 >> y2;

        int dx = x2 - x1, dy = y2 - y1;
        int steps = max(abs(dx), abs(dy));
        int stepX = (dx == 0) ? 0 : dx / abs(dx);
        int stepY = (dy == 0) ? 0 : dy / abs(dy);t

        for (int j = 0; j <= steps; j++)
        {
            int curX = x1 + stepX * j;
            int curY = y1 + stepY * j;
            paths[i].emplace_back(curX, curY);
            pointTracker[{curX, curY}].emplace_back(i);
        }
    }

    string lineInput;
    cin.ignore();
    getline(cin, lineInput);
    getline(cin, lineInput);
    unordered_map<string, int> limitMap;

    int pos = 0, lineLength = lineInput.size();
    while (pos < lineLength)
    {
        size_t delimiterPos = lineInput.find(':', pos);
        if (delimiterPos == string::npos)
            break;
        string key = lineInput.substr(pos, delimiterPos - pos);
        pos = delimiterPos + 1;
        size_t spacePos = lineInput.find(' ', pos);
        if (spacePos == string::npos)
            spacePos = lineLength;
        int value = stoi(lineInput.substr(pos, spacePos - pos));
        limitMap[key] = value;
        pos = spacePos + 1;
    }

    string query;
    cin >> query;

    ll totalCost = 0;

    for (const auto &entry : pointTracker)
    {
        if (entry.second.size() >= 2)
        {
            int commonSize = entry.second.size();
            int minCost = INT_MAX;

            for (int segId : entry.second)
            {
                const auto &currentPath = paths[segId];
                auto it = find(currentPath.begin(), currentPath.end(), entry.first);
                int index = distance(currentPath.begin(), it);
                int leftDistance = index;
                int rightDistance = currentPath.size() - index - 1;
                int cost = (leftDistance > 0 && rightDistance > 0) ? min(leftDistance, rightDistance) : max(leftDistance, rightDistance);
                minCost = min(minCost, cost);
            }
            totalCost += static_cast<ll>(commonSize) * minCost;
        }
    }

    if (limitMap.find(query) != limitMap.end() && totalCost >= limitMap[query])
    {
        cout << "Yes\n";
    }
    else
    {
        cout << "No\n";
    }

    int validItems = 0, totalItems = limitMap.size();
    for (const auto &entry : limitMap)
    {
        if (totalCost >= entry.second)
        {
            validItems++;
        }
    }

    double successRate = static_cast<double>(validItems) / totalItems;
    cout << fixed << setprecision(2) << successRate;

    return 0;
}