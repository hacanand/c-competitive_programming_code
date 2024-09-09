#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s, t;
    cin >> s >> t;
    int i = 0, j = 0;
    int n = s.size(), m = t.size();
    while(i<n && j<m)
    {
        if(s[i] == t[j])
        {
            i++;
            j++;
        }
        else
        {
            j++;
        }
    }
    cout<<i+1<<endl;
    return 0;
}