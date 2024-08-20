#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin >> s;
    int sum = 0;
    for(int i = 0; i < s.size(); i++){
        if(s[i] == '1'){
            sum += pow(2, s.size() - i - 1);
        }
    }
    for (int i = 0;i<s.size();i++){
        if(s[i]=='1')
        s[i]='0';
        else
        s[i]='1';
    }
    
    //cout<<s<<endl;
    int sum2 = 0;
    for(int i = 0; i < s.size(); i++){
        if(s[i] == '1'){
            sum2 += pow(2, s.size() - i - 1);
        }
    }

    cout << sum <<" " <<sum2<< endl;

    return 0;
}
