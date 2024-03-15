#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define loop(n) for (long long i = 0; i < n; i++)
#define rloop(n) for (long long i = n - 1; i >= 0; i--)
#define fori(n) for (auto &i : n)

int main()
{

#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output1.txt", "w", stdout);
#endif

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        string s;
        if(n%2!=0){
            cout<<"NO"<<"\n";
        }
        else{
            cout<<"YES"<<"\n";
          for(int i=0;i<n;i+=2){
              s=s+("AAC");
            
        }  
        cout<<s<<"\n";
        } 
    }
    return 0;
}
