#include <iostream>
#include <algorithm>
using namespace std;

// Function to reverse the digits of a number
int reverseNumber(int num)
{
    int reversed =num;
    string s = to_string(reversed);
    reverse(s.begin(), s.end());
    
    // while (num > 0)
    // {
    //     reversed = reversed * 10 + num % 10;
    //     num /= 10;
    // }
    return stoi(s);
}

// Function to check if a number is a palindrome
bool isPalindrome(int num)
{
    return num == reverseNumber(num);
}

// Function to make a number palindrome by repeatedly adding its reverse
void makePalindrome(int num)
{
    int iterations = 0;
    while (!isPalindrome(num))
    {
        num += reverseNumber(num);
        iterations++;
        if (iterations > 1000)
        { // To prevent infinite loop in case no palindrome is found
            std::cout << "No palindrome exists for the given number within 1000 iterations." << std::endl;
            return;
        }
    }
    std::cout << "Palindrome: " << num << " (found in " << iterations << " iterations)" << std::endl;
}

int main()
{
    int num;
    // std::cout << "Enter a number: ";
    std::cin >> num;
    makePalindrome(num);
    return 0;
}
