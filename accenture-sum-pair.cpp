#include <bits/stdc++.h>
using namespace std;
int main()
{
    int sum, n;
    cin >> n >> sum;

    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        v.push_back(x);
    }
    unordered_set<int> s;
    // (v.begin(), v.end());
    for (int i = 0; i < v.size(); i++)
    {
        if (s.find(sum - v[i]) != s.end())
        {
            cout << v[i] << " " << sum - v[i] << endl;
        }
        s.insert(v[i]);
    }

    return 0;
}