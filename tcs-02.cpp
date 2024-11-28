#include<iostream>
using namespace std;
int main(){
    string s;
    int ha=0, st=0;
    cin >> s;
    for(auto i:s){
        if(i=='*')
            st++;
        else
            ha++;
    }
    cout << st - ha << endl;
    return 0;
}