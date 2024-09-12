#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; ++i)
    {
        cin >> arr[i];
    }
    int task;
    cin >> task;
    vector<int> maxReach(task);
    for(int i = 0; i < task; ++i)
    {
        cin >> maxReach[i];
    }
    sort(arr.begin(), arr.end());
    for (int i = 0; i < task; ++i)
    { //
        int no_of_greaters = upper_bound(arr.begin(), arr.end(), maxReach[i]) - arr.begin();
        cout << n  - no_of_greaters << endl;
    }
    return 0;
}