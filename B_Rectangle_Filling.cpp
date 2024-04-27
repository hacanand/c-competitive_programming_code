#include <iostream>
#include <vector>
#include <algorithm>
#include <unordered_map>

using namespace std;

int main()
{
    int test_cases;
    cin >> test_cases;

    for (int _ = 0; _ < test_cases; _++)
    {
        int a;
        cin >> a;

        vector<int> arr(a);
        unordered_map<int, int> mp;
        for (int i = 0; i < a; i++)
        {
            cin >> arr[i];
            mp[arr[i]]++;
        }

        sort(arr.begin(), arr.end());

        int i = 0;
        int prev = 0;
        for (; i < a; i++)
        {
            if (arr[i] - prev > 1)
            {
                break;
            }
            prev = arr[i];
        }

        if (i == a)
        {
            if (mp.size() % 2 == 0)
            {
                cout << "Bob" << endl;
            }
            else
            {
                cout << "Alice" << endl;
            }
        }
        else if (a == 1 || i % 2 == 0 || mp.size() == 1)
        {
            cout << "Alice" << endl;
        }
        else
        {
            cout << "Bob" << endl;
        }
    }

    return 0;
}