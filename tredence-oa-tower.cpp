#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    stack<int> s;
    vector<int> disk(n);
    for (int i = 0; i < n; i++)
    {
        cin >> disk[i];
    }
    for (auto &i : disk)
    {
        if (s.empty())
        {
            s.push(i);
            cout << "" << endl;
        }
        else
        {
            if (s.top() <= i)
            {
                s.push(i);
                cout << "" << endl;
            }
            else
            {
                while (!s.empty())
                {
                    cout << s.top() << " ";
                    s.pop();
                }

                s.push(i);
            }
        }
    }
    while (!s.empty())
    {
        cout << s.top() << " ";
        s.pop();
    }
    return 0;
}