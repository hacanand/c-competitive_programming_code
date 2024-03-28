#include <iostream>
#include <string>

std::string convert_time(const std::string &time_str)
{
    int hours = std::stoi(time_str.substr(0, 2));
    std::string minutes = time_str.substr(3, 2);
    std::string period = (hours < 12) ? "AM" : "PM";
    if (hours == 0)
    {
        hours = 12;
    }
    else if (hours > 12)
    {
        hours -= 12;
    }
    return (hours < 10 ? "0" : "") + std::to_string(hours) + ":" + minutes + " " + period;
}

int main()
{
    int t;
    std::cin >> t;
    for (int i = 0; i < t; ++i)
    {
        std::string s;
        std::cin >> s;
        std::cout << convert_time(s) << std::endl;
    }
    return 0;
}
