#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    for(int i=0;i<s.length();i++)
    {
        if(s[i]=='a')
        {
            s[i]='b';
        }
        else if(s[i]=='b')
        {
            s[i]='a';
        }
    }
    cout<<s;
    return 0;
}