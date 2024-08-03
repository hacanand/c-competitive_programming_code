#include<iostream>
#include<string>
#include<vector>
#include <algorithm>
#include <numeric>
using namespace std;
int main(){


    string s = "1538023";
    int n=s.length();
    for (int i = 0; i < n;i++){
        for (int j = i; j < n;j++){
            string sub = s.substr(i, j - i + 1);
            int len = sub.length();
            int num = stoi(sub);
            int sum = 0;
            int sum1 = 0;
            sum=accumulate(sub.begin(), sub.end(), 0);
            for (int k = 0; k < len/2;k++){
                sum1 += sub[k] ;
            }
            if(sum/2==sum1){
                cout << sub << endl;
                return 0;
            }
        }
    }
    return 0;
}