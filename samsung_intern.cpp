#include <bits/stdc++.h>
using namespace std;

int sumatkthlevel(string tree, int k)
{
    int level = -1;
    int sum = 0;
    int n = tree.length();
    for (int i = 0; i < n; i++)
    {
        if (tree[i] == '(')
        {
            level++;
        }
        else if (tree[i] == ')')
        {
            level--;
        }
        else
        {
            if (level == k)
            {
                int num = 0;
                sum += (tree[i] - '0');
            }
        }

    }
    return sum;
}
int main()
{
    string tree = "(0(5(6()())(4()(9()())))(7(1()())(3()())))";
    int k = 2;
    cout << sumatkthlevel(tree, k) << endl;
    return 0;
}