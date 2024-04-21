#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n, s;
        cin >> n >> s;
        int x = 0;
         vector<int> a(n);
        if(n==1){
            cout<<s<<endl;
            continue;
        }
        if (s == 0)
        {
            for (int i = 0; i < n; ++i)
            {
               cout<<0<<" ";
                
            }
            cout<<endl;
            continue;
        }
        else
        {   int po = 1;
            int i = 0;
            while(i+po<=s){
                i+=po;
                po <<= 1;
            }
            a[x++]=i;
            a[x++]=s-i;
            //cout<<i<<" "<<s-i<<" ";
            n-=2;
            while(n--){
                //cout<<0<<" ";
                a[x++]=0;
            }
            for(int i=0;i<x;i++){
                cout<<a[i]<<" ";
            }
            cout<<endl;
        }
    }

    return 0;
}