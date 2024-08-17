#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, m;
    cin >> n >> m;
    vector<int> talent(m);
    for(int i = 0; i < m; i++){
        cin >> talent[i];
    }
    unordered_set<int>mp;
    for (int i = 0; i < m;i++){
        mp.insert(talent[i]);
        if(mp.size()==n){
            cout << i + 1 << endl;
            return 0;
        }
    }
}