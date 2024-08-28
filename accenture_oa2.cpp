#include<bits/stdc++.h>
using namespace std;
 
int main(){
    string s;
    cin >> s;
    vector<string> st(5);
    for (int i = 0; i < 5; i++){
        cin >> st[i];
    }
    int score = 0;
    map<int, string> m;
    for(int i = 0; i < 5; i++){
        if(st[i] == s){
            continue;
    }
    else{
        int count = 0;
        int minLen=min(st[i].length(), s.length());
        for(int j = 0; j < minLen; j++){
            if(st[i][j] == s[j]){
                count++;
            }
            else{
                break;
            }
        }
        m[count] = st[i];
    }
}
    cout << m.rbegin()->second<< endl;
    return 0;
}
