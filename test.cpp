#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    int n;
    cout << "Enter the number of dominoes: ";
    cin >> n;

    vector<int> x(n), l(n);

    cout << "Enter the positions (x_i) of the dominoes:\n";
    for (int i = 0; i < n; ++i)
    {
        cin >> x[i];
    }

    cout << "Enter the heights (l_i) of the dominoes:\n";
    for (int i = 0; i < n; ++i)
    {
        cin >> l[i];
    }

    vector<int> maxReach(n);

    for (int i = 0; i < n; ++i)
    {
        // Calculate the range of dominoes that fall due to pushing the i-th domino
        int endRange = x[i] + l[i];

        // The maximum reach is the end of the range
        maxReach[i] = endRange;
    }

    cout << "Maximum reach for each domino:\n";
    for (int i = 0; i < n; ++i)
    {
        cout << "Domino " << i + 1 << ": " << maxReach[i] << endl;
    }

    return 0;
}