#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin >> s;
    reverse(s.begin(), s.end());
    stack<char> st;
    stack<char> temp;
    for (auto i : s)
        st.push(i);
    while (!st.empty())
    {
        if (!temp.empty() && temp.top() == 'A')
        {
            temp.pop();
            int res = temp.top() - '0' & st.top() - '0';
            temp.pop();
            st.pop();
            temp.push(res + '0');
        }
        else if (!temp.empty() && temp.top() == 'B')
        {
            temp.pop();
            int res = temp.top() - '0' | st.top() - '0';
            temp.pop();
            st.pop();
            temp.push(res + '0');
        }
        else if (!temp.empty() && temp.top() == 'C')
        {
            temp.pop();
            int res = temp.top() - '0' ^ st.top() - '0';
            temp.pop();
            st.pop();
            temp.push(res + '0');
        }
        else
        {
            temp.push(st.top());
            st.pop();
        }
    }
    if (!temp.empty())
    {
        cout << temp.top() << endl;
    }
    return 0;
}