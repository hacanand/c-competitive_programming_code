#include<bits/stdc++.h>
using namespace std;
int main()
{   
    int n;
    cin>>n;
    set<int> s;
    while(n!=1 && s.find(n)==s.end())
    {
        s.insert(n);
        int sum=0;
        while(n)
        {
            sum+=(n%10)*(n%10);
            n/=10;
        }
        n=sum;
    }
    if(n==1)
    {
        cout<<"Happy Number";
    }
    else
    {
        cout<<"Not a Happy Number";
    }
    
    return 0;
}