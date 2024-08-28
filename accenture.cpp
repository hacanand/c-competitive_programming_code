#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin >> s;
    char c;
    cin >> c;
     map<char, int> m;
    for(int i = 0; i < s.size(); i++){
        m[s[i]]++;
    }
    if(m.find(c) != m.end()){
        cout << m[c] << endl;
    }else{
        cout << "Not found" << endl;
    }
    return 0;
}