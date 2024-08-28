#include<bits/stdc++.h>
using namespace std;
int main()
{   
    string s;
    cin >> s;
    string l;
    cin >> l;
    string r, T;
    for (auto c:s){
        r += tolower(c);
    }
    for (auto c:l){
        T+= toupper(c);
    }
    cout << r << "  " << T << endl;
    return 0;
}