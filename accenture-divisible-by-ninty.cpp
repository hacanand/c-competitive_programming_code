#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> v(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        int count_0 = 0;
        int count_5 = 0;
        for (int i = 0; i < n; i++)
        {
            if (v[i] == 0)
            {
                count_0++;
            }
            else
            {
                count_5++;
            }
        }
        if (count_0 == 0)
        {
            cout << "-1" << endl;
        }
        else if (count_5 < 9)
        {
            cout << "0" << endl;
            
        }
        else
        {
           // cout<<count_5<<endl;
            count_5 -= count_5 % 9;
            for (int i = 0; i < count_5; i++)
            {
                cout << "5";
            }
            for (int i = 0; i < count_0; i++)
            {
                cout << "0";
            }
            cout << endl;
        }
    }
    return 0;
}