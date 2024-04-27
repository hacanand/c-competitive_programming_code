#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int minCards(const vector<int> &cards, int k)
{
    // Count the frequency of each number
    vector<int> frequency(101, 0); // Assuming card numbers are between 1 and 100
    for (int card : cards)
    {
        frequency[card]++;
    }

    // Sort the frequencies in descending order
    sort(frequency.begin(), frequency.end() );
 
    int ans = 0;
    for (int i=frequency.size()-1; i>=0; i--)
    {
        if (frequency[i] >= k)
        {
            frequency[i] = 0;
            if(i-1>=0)
                frequency[i - 1] += k - 1;
            else if (i == frequency.size() - 1)
                ans = k - 1;
            else
                break;
        }
    }
    
    for (int i = 0; i < frequency.size(); i++)
    {
        if (frequency[i] != 0)
        {
            ans += frequency[i];
        }
    }
    return ans;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;

        vector<int> cards(n);
        for (int i = 0; i < n; ++i)
        {
            cin >> cards[i];
        }

        int minRemainingCards = minCards(cards, k);
        cout << minRemainingCards << endl;
    }
    return 0;
}