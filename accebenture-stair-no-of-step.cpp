#include<bits/stdc++.h>
using namespace std;
int main()
{   
    int n;
    cin>>n;
    vector<int> v(n+1,0);
    v[0]=0;
    v[1]=1;
    v[2]=2;
    for(int i=3;i<=n;i++)
    {
        v[i]=v[i-1]+v[i-2];
    }
    cout<<v[n]<<endl;
    return 0;
}