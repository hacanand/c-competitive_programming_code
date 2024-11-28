#include<iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    int sum = 0;
    if(n<=0){
        cout << "False" << endl;
    return 0;
    }
    for (int i = 1; i <= n / 2; i++)
    {
        if(n%i==0)
            sum += i;
    }
    if(sum==n)
        cout << "True" << endl;
    else
        cout << "False" << endl;
    return 0;
}
