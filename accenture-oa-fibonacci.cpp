#include<bits/stdc++.h>
using namespace std;
int main()
{   
    int n, m;
    cin >> n >> m;
    int sum = 0;
    vector<int> fib;
    fib.push_back(0);
    fib.push_back(1);
    for (int i = 2;i<=m;i++){
        fib.push_back(fib[i-1]+fib[i-2]);

    }
    for (int i = n;i<=m;i++){
        sum += fib[i];
    }
    cout << sum << endl;
    return 0;
}