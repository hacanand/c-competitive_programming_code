#include <iostream>
#include <string>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int x, y;
        cin >> x >> y;
        string s, t;
        cin >> s >> t;
        int n = s.length(), m = t.length();
        unordered_map<char, int> mp;
        int p = 0;
        for (int i = 0; i < m; i++){
             mp[t[i]]++;
        }
           
        for (int i = 0; i < n; i++)
        {
            if (mp[s[i]] > 0)
            {
                mp[t[i]]--;
                p++;
            }
            else
            {
                break;
            }
        }
        cout << p << endl;
    }
    return 0;
}
