#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s1;
    getline(cin, s1);
    // string s2 = s1;
    // reverse(s2.begin(), s2.end());
    // for (int i = 0; i < s1.length();i++){
    //     if(s1[i]!=s2[i]){
    //         cout << -1;
    //         return 0;
    //     }
    // }
    // cout << 1 << endl;

    // reverse the word

    vector<string> str;
    string tmp;
    for (int i = 0; i < s1.size();i++){
        if(s1[i]!=' ')
        tmp += s1[i];
        else{
            reverse(tmp.begin(), tmp.end());
            str.push_back(tmp);
           // cout << tmp;
            str.push_back(" ");
            tmp = "";

        }
    }
    str.push_back(tmp);
    for(auto i:str){
        cout << i;
    }

        return 0;
}