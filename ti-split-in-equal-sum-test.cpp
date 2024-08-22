#include <bits/stdc++.h>
using namespace std;

void splitArrayForEqualSum(vector<int> &arr, int n, vector<bool> &curr_elements, int no_of_selected_elements, vector<bool> &soln, int &min_diff, int sum, int curr_sum, int curr_position)
{
    if (curr_position == n)
        return;
    if ((n / 2 - no_of_selected_elements) > (n - curr_position))
        return;
    splitArrayForEqualSum(arr, n, curr_elements, no_of_selected_elements, soln, min_diff, sum, curr_sum, curr_position + 1);
    no_of_selected_elements++;

    curr_sum = curr_sum + arr[curr_position];
    curr_elements[curr_position] = true;
    if (no_of_selected_elements == n / 2)
    {
        if (abs(sum / 2 - curr_sum) < min_diff)
        {
            min_diff = abs(sum / 2 - curr_sum);
            soln = curr_elements;
        }
    }
    else
    {
        splitArrayForEqualSum(arr, n, curr_elements, no_of_selected_elements, soln, min_diff, sum, curr_sum, curr_position + 1);
    }

    curr_elements[curr_position] = false;
}

void splitArray(vector<int> &arr)
{
    int n = arr.size();
    vector<bool> curr_elements(n, false);
    vector<bool> soln(n, false);
    int min_diff = INT_MAX;
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += arr[i];
        curr_elements[i] = soln[i] = false;
    }
    splitArrayForEqualSum(arr, n, curr_elements, 0, soln, min_diff, sum, 0, 0);
    for (int i = 0; i < n; i++)
    {
        if (soln[i])
        {
            cout << arr[i] << " ";
        }
    }
    cout << "\n";
    for (int i = 0; i < n; i++)
    {
        if (!soln[i])
        {
            cout << arr[i] << " ";
        }
    }
    cout << "\n";
}

int main()
{
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    splitArray(arr);
    return 0;
}
