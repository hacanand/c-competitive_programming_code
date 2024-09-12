#include<bits/stdc++.h>
using namespace std;
int main()
{   
    string s;
    cin >> s;
    int digit = 0, alpha = 0;
    for(int i = 0; i < s.size(); ++i)
    {
         if(isdigit(s[i]))
         {
             digit++;
         }
         else if(isalpha(s[i]))
         {
             alpha++;
         }
    }
    cout << "Digits: " << digit << endl;
    cout << "Alphabets: " << alpha << endl;
    return 0;
}