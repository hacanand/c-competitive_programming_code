#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n, m;
    cin >> n >> m;
    int sum = 0;
    for (int i = n;i<=m;i++){
        int flag = 0;
        for (int j = 2;j<=sqrt(i);j++){
            if(i%j==0){
                flag = 1;
                break;
            }
        }
        if(flag==0){
            sum += i;
            // cout<<i<<endl;
        }
    }
    cout << sum << endl;
        return 0;
}