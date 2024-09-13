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
    int k;
    cin>>k;
    for (int i = 0; i < k;i++){
        int tmp = v[0];
        for (int j = 0; j < n - 1;j++){
            v[j] = v[j + 1];
        }
        v[n - 1] = tmp;
    }
    for(auto i:v)
        cout << i << " ";
        return 0;
}