#include <bits/stdc++.h>
using namespace std;
int main(){
    string s1, s2;
    vector<char>v1={};
    cin >> s1 >> s2;
    int n = s1.size();
    for(int i = 0; i < n; i++){
        if(s1[i] != s2[i]){
            v1.push_back(s2[i]);
        }
    }
    for(auto i : v1){
        cout << i;
    }
    cout << endl;
    return 0;            
}