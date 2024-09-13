#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s1;
    string s2;
    getline(cin, s1);
    getline(cin, s2);

    int n = s1.length();
    int m = s2.length();
    for (int i = 0; i < n - m + 1;i++){
        if(s1.substr(i,m)==s2)
        {
            cout << i << " ";
            break;
        }
    }

        return 0;
}