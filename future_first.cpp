#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
using namespace std;

int MathChallenge(int num)
{
    string strNum = to_string(num);
    vector<char> digits(strNum.begin(), strNum.end());

    int i = digits.size() - 2;
    while (i >= 0 && digits[i] >= digits[i + 1])
    {
        i--;
    }

    if (i == -1)
    {
        return -1;
    }

    int j = digits.size() - 1;
    while (digits[j] <= digits[i])
    {
        j--;
    }

    swap(digits[i], digits[j]);

    sort(digits.begin() + i + 1, digits.end());

    string nextLargerStr = "";
    for (char digit : digits)
    {
        nextLargerStr += digit;
    }

    return stoi(nextLargerStr);
}

int main()
{
    int num1;
    cin >> num1;
    cout   << MathChallenge(num1) << endl;

    return 0;
}