#include<bits/stdc++.h>
using namespace std;
int main()
{   int n;
    cin>>n;
    int temp=n;
    vector<int> v={4,7,44,47,74,77,444,447,474,477,744,747,774,777};
    while(n>0){
        int dig=n%10;
        if(dig!=4 and dig!=7){
            cout<<"NO"<<endl;
            // cout<<dig<<endl;
            return 0;
        }
        n=n/10;
    }
    for(int i=0;i<v.size();i++){
        if(temp%v[i]==0){
            cout<<"YES"<<endl;
            return 0;
        }
    }
    cout<<"NO"<<endl;
    return 0;
}