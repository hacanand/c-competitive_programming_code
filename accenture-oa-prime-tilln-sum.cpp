#include<bits/stdc++.h>
using namespace std;

bool isPrime(int n){
    if(n==0 or n==1){
        return false;
    }
    for(int i=2;i<=sqrt(n);i++){
        if(n%i==0){
            return false;
        }
    }
    return true;
}
int main()
{
    int n;
    cin>>n;
    if(n==0 or n==1){

    cout<<0<<endl;
    return 0;
    }
    int sum=0;

    for(int i=2;i<=n;i++ ){
        if(isPrime(i)){
            
            sum+=i;
        }
    }
    cout<<sum<<endl;
    return 0;
}