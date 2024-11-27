#include<iostream>
using namespace std;
int main(){

    int v, w;
    cin >> v >> w;
    if(2>w and w%2!=0 and v>=w)
        cout << "INVALID INPUT<<endl";
    else{
        w = w / 2;
        w = w - v;
        v = v - w;
        cout << "TW " << v << " " << "FW " << w<<endl;
    }
    return 0;
}