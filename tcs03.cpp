#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;
int main(){
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n;i++){
        cin >> arr[i];
    }
    unordered_map<int, int> mp;
    for(int i:arr){
        mp[i]++;
    }
    for(auto i:mp){
        cout << i.first << " " << i.second << endl;
    }
    return 0;
}