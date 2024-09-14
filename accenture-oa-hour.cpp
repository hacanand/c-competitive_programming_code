 
    #include <iostream>
    #include <vector>
    #include <unordered_map>
    using namespace std;

    int countPairs(vector<int> &minutes)
    {
        unordered_map<int, int> remainderCount;
        int count = 0;
        for(int minute:minutes){
            int remainder = minute % 60;
            remainderCount[remainder]++;
        }
            for(int minute:minutes){
                int remainder=minute%60;
                int complement=(60-remainder)%60;
                if(remainderCount.find(complement)!=remainderCount.end()){
                    count+=remainderCount[complement];
                    remainderCount.erase(remainder);
                }

            }

        // for (int minute : minutes)
        // {
        //     int remainder = minute % 60;
        //     int complement = (60 - remainder) % 60;

        //     if (remainderCount.find(complement) != remainderCount.end())
        //     {
        //         count += remainderCount[complement];
        //         //cout << minute << " " << complement << endl;
        //     }
        //     remainderCount[remainder]++;
        // }

        return count;
    }

    int main()
    {
        int n;
        cin >> n;
        vector<int> minutes(n);
        for (int i = 0; i < n; i++)
        {
            cin >> minutes[i];
        }
        int result = countPairs(minutes);
        cout << "Number of pairs: " << result << endl;
        return 0;
    }
 