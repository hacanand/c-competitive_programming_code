#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main()
{
    string str;
    getline(cin, str);

    int maxi = INT_MIN;
    string tmp = "";

    for (char ch : str)
    {
        if (ch - '0' <= 9 && ch - '0' >= 0)
        {
            tmp = tmp + ch;
        }
        else
        {
            if (!tmp.empty())
            {
                maxi = max(maxi, stoi(tmp));
                // cout << tmp<<" ";
                tmp = "";
            }
        }
    }

    if (!tmp.empty())
    {
        maxi = max(maxi, stoi(tmp));
    }

    cout << maxi << endl;

    return 0;
}