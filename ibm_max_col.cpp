#include <bits/stdc++.h>
using namespace std;

int main(){
    int n,k;
    cin >> n>>k;
    vector<int> a(n);
    for (int i = 0; i < n;i++){
        cin >> a[i];
    }
    int max_col = 0;
    set<int> s(a.begin(), a.end());
    for(auto i:s){
        if(i<=k)
            max_col++;
    }
    cout<<max_col;
    return 0;
}