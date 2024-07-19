#include <iostream>
#include <string>
using namespace std;

int main() {
    int testCases;
    cin >> testCases;
    while (testCases--) {
        int length, allowedChanges;
        cin >> length >> allowedChanges;
        string str1, str2;
        cin >> str1 >> str2;
        if (str1 == str2 && (str1 == "01" || str1 == "10") && allowedChanges % 2 == 1) {
            cout << "NO" << endl;
            continue;
        }
        int diffCount = 0, sumOfOnes = 0, sameCount = 0;
        for (int i = 0; i < length; i++) {
            if (str1[i] != str2[i]) {
                diffCount++;
                sumOfOnes += str1[i] - '0';
            }
            else {
                sameCount++;
            }
        }
        if (diffCount == 2 && length == 2 && allowedChanges % 2 == 0) {
            cout << "NO" << endl;
            continue;
        }
        if (diffCount == sumOfOnes * 2 && sumOfOnes <= allowedChanges) {
            cout << "YES" << endl;
        }
        else {
            cout << "NO" << endl;
        }
    }
    return 0;
}
