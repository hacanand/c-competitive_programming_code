#include <iostream>
#include <vector>
#include <algorithm>
#include <unordered_map>

using namespace std;

int main()
{
    int test_cases;
    cin >> test_cases;

    while (test_cases--)
    {
        int a;
        cin >> a;

        vector<int> arra(a);
        int prev = 0;
        int i = 0;
        unordered_map<int, int> mp;
        for (i = 0; i < a; i++)
        {
            cin >> arra[i];
            mp[arra[i]]++;
        }

        sort(arra.begin(), arra.end());

        
        
        for ( i=0; i < a; i++)
        {
            if (arra[i] - prev <=1)
            {prev = arra[i];
                
            }
           else break;
        }
       
        if (i == a)
        {
            if (mp.size() % 2 != 0)
            {
                cout <<   "Alice"<< endl;
            }
            else
            {
                cout <<"Bob" << endl;
            }
        }
        else if (  i % 2 == 0 || a == 1 || mp.size() == 1)
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