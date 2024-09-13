#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int k;
    cin >> k;
    set<int> s(arr.begin(), arr.end());
    for (int i = 0; i < arr.size(); i++)
    {
        int x = k - arr[i];
        if (s.find(x) != s.end())
        {
            cout << arr[i] << " " << x << endl;
            s.erase(arr[i]);
        }
    }
    return 0;
}