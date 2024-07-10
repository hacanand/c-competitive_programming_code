#include <bits/stdc++.h>
using namespace std;
#define int long long

bool check_prime(int n)
{

    for (int i = 2; i * i <= n; i++)
    {
        if (n % i != 0)
            return true;
    }

    return false;
}

int find_square(int n)
{

    vector<int> arr;

    while (arr.size() < 2)
    {
        if (check_prime(n))
            arr.push_back(n);
        n++;
    }

    return arr[0] * arr[1];
}

signed main()
{
    // your code goes here
    int t;
    cin >> t;
    while (t--)
    {

        int n;
        cin >> n;
        if (n == 1)
            n++;

        cout << find_square(n) << endl;
    }

    return 0;
}