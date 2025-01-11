#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s, d;
    cin >> s >> d;
    cout<<s<<d<<endl;
    vector<string> city = {"TH", "GA", "IC", "HA", "TE", "LU", "NI", "CA"};
    vector<int> dist = {800, 600, 750, 900, 1400, 1200, 1100, 1500};
    double sum = 0;
    int sr=0, dst=0;
    for (int i = 0; i < city.size(); i++)
    {
        if(city[i]==s)
            sr = i;
        if(city[i]==d)
            dst = i;
    }
    cout<<sr<<dst<<endl;
    if (sr==0 or dst==0)
    {
        cout<<"Invalid Input"<<endl;
        return 0;
    }
    if(sr<dst){
    for(int i=sr;i<dst;i++)
    {
        sum+=dist[i];
    }
    }
    else{
        for (int i = sr;i<city.size();i++)
        {
            sum+=dist[i];
        }
        for (int i = 0; i < dst; i++)
        {
            sum+=dist[i];
        }
    }
    cout<<sum<<endl;
    double res=0.005*sum;
    cout<<res<<endl;
    cout<<ceil(res)<<endl;
    return 0;
}