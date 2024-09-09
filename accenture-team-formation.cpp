#include<bits/stdc++.h>
using namespace std;
int main()
{   int n,m;
    cin>>n>>m;
    int total = n + m;
    int count = 0;
    int sum = total / 4;
    count=min(sum,min(n,m));
    cout<<count<<endl;
    return 0;
}