#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int temp = n;
    int sum=0;
    while(n)
    {
        sum+=(n%10)*(n%10)*(n%10);
        //cout<<sum<<endl;
        n/=10;
    }
    if(sum==temp)
    {
        cout<<"Armstrong Number";
    }
    else
    {
        cout<<"Not an Armstrong Number";
    }
    return 0;
}