#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> inpu()
{
    int a, b, c;
    cin >> a >> b >> c;
    return {a, b, c};
}

int main()
{
    int t;
    cin >> t;

    for (int i = 0; i < t; i++)
    {
        vector<int> ans = inpu();
        int res = 0;

        while (true)
        {
            sort(ans.begin(), ans.end(), greater<int>()); // Sort in descending order
            int a = ans[0];
            int b = ans[1];
           int c = ans[2];

            if (a == 0 || b == 0)
            {
                break;
            }
            else
            {
                b--;
                a--;
                res++;
            }
            ans[1] = b;
            ans[2] = c;
            ans[0] = a;
        }

        if (ans[0] % 2 == 1 || ans[1] % 2 == 1 || ans[2] % 2 == 1)
        {
            cout << "-1" << endl;
        }
        else
        {
            cout << res << endl;
        }
    }
    return 0;
}