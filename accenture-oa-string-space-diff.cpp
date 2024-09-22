#include <iostream>
using namespace std;

int main()
{
    string s1;
    string s2;
    getline(cin, s1);
    getline(cin, s2);
    int s1_space = 0;
    int s2_space = 0;
    for (char i : s1)
        if (i == ' ')
            s1_space++;
    for (char i : s2)
        if (i == ' ')
            s2_space++;

    int diff = s1_space - s2_space;
    if(diff%2==0)
    cout<<"Even"<<diff<<endl;
    else
    cout<<"Odd"<<diff<<endl;
    return 0;
}
