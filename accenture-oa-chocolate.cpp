#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector<int> v(n);
    for(int i=0;i<n;i++)
    {
        cin>>v[i];
    }
    int m;
    cin>>m;
    sort(v.begin(),v.end());
    +
    int min_diff=INT_MAX;
    for (int i = 0; i <= n - m;i++){
        min_diff=min(min_diff,v[i+m-1]-v[i]);
    }
    cout<<min_diff;
        return 0;
}