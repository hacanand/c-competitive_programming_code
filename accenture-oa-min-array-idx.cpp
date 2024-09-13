#include<bits/stdc++.h>
using namespace std;
int main()
{   
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n;i++)
        cin >> arr[i];
    int idx=min_element(arr.begin(), arr.end())-arr.begin();
    cout << idx <<" "<< arr[idx]<<endl;
    return 0;
}