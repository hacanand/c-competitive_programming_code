#include<iostream>
#include<vector>
#include<algorithm>
#include<stack>
#include<climits>
using namespace std;

int main(){
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n;i++){
        cin >> arr[i];
    }
    stack<int> s;
    int maxSum = 0;
    int maxPos = INT_MIN, minNeg = INT_MIN;
    int pos = 1;
    int j = 0;
    while(arr[j]<0){
        j++;
        if(arr[j]>0)
            break;
    }
    for ( ; j < n;)
    {
        if (arr[j] > 0)
        {
       
            while (arr[j] > 0)
            {
                maxPos = max(maxPos, arr[j]);
                j++;
                if(arr[j]<0)
                    break;
                
            }
            s.push(maxPos);
            maxPos = INT_MIN;
        }
         if(arr[j]<0)
        {
           
            while (arr[j] < 0)
            {
                minNeg = max(minNeg, arr[j]);
                j++;
                if (arr[j] > 0)
                    break;
            }
            s.push(minNeg);
            minNeg = INT_MIN;
        }
    }
    vector<int> a;
    while (!s.empty())
    {
        maxSum += s.top();
        a.push_back(s.top());
        s.pop();
    }
    reverse(a.begin(), a.end());
    for (int i : a)
        cout << i << " ";
    cout << "\n"
         << maxSum;
    return 0;
}