#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    vector<int> arr(10);
    arr[0] = 1;
    arr[1] = 0;
    arr[2] = 0;
    arr[3] = 0;
    arr[4] = 1;
    arr[5] = 0;
    arr[6] = 1;
    arr[7] = 0;
    arr[8] = 2;
    arr[9] = 1;
    int ans = 0;
    while(n){
        ans += arr[n%10];
        n /= 10;
    }
    cout << ans << endl;
    return 0;
}