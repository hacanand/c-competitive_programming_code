#include <bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin >> s;
    int score = 0;
    int count = 0;
    for(char &i:s){
        if(count==3){
            break;
        }
        if(s=='T'){
            score += -1;
            count = 0;
        }
        else{
            score += 2;
            count++;
        }
    }
    cout << score << endl;
    return 0;
}