#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, m;
    cin >> n >> m;
    vector<int> arr1(n), arr2(m);
    for (int i = 0; i < n; i++)
    {
        cin >> arr1[i];
    }
    for (int i = 0; i < m; i++)
    {
        cin >> arr2[i];
    }
    unordered_map<int, int> mp;

    vector<int> inter;
    vector<int> unin;
    for (int i = 0; i < n; i++)
    {
        mp[arr1[i]]++;
    }
    for (auto i : arr2)
    {
        if (mp.find(i) != mp.end())
        {
            inter.push_back(i);
            mp.erase(i);
        }
    }
    for (int i = 0; i < m; i++)
    {
        mp[arr2[i]]++;
    }
    
    for (auto i : mp)
    {
        unin.push_back(i.first);
    }
    if(inter.size()==0)
        cout << -1 << endl;
    else{
    for (int i = 0; i < inter.size(); i++)
    {
        cout << inter[i] << " ";
    }
    cout << endl;
    }
    if(unin.size()==0)
        cout << -1 << endl;
    else{
    for (int i = 0; i < unin.size(); i++)
    {
        cout << unin[i] << " ";
    }
    }
    return 0;
}