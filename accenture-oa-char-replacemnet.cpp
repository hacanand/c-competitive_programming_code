#include<bits/stdc++.h>
using namespace std;
int main()
{   
    string s;
    char ch1, ch2;
    cin >> s >> ch1 >> ch2;
    for (int i = 0; i < s.size();i++){
        if(s[i]==ch1)
            s[i] = ch2;
        else if(s[i]==ch2)
            s[i] = ch1;
    }
    cout << s << endl;
    return 0;
}