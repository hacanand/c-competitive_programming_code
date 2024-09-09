#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n, m;
    cin>>n>>m;
    vector<int> v;
    for(int i=0;i<n;i++)
    {
        int x;
        cin>>x;
        v.push_back(x);
    }
    sort(v.begin(), v.end());
    int min_diff = INT_MAX;
    for (int i = 0; i <= n - m;i++){
        min_diff=min(min_diff,v[i+m-1]-v[i]);
    }
    cout << min_diff << endl;
    return 0;
}