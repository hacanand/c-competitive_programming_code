#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

std::string codewithvirus(const std::string &text)
{
    std::vector<std::string> dictionary = {"environment", "always", "protect", "irreplaceable", "different", "abs"};
    std::vector<std::string> c;

    for (auto word : text)
    {
        if (word == ' ')
            continue;

        if (std::find(dictionary.begin(), dictionary.end(), word) != dictionary.end())
        {
            c.push_back(word);
        }
        else
        {
            bool found = false;

            for (const auto &d : dictionary)
            {
                if (word.size() == d.size() &&
                    std::count_if(
                        word.begin(), word.end(), &d, &word {
                            return ch == d[&ch - &word[0]];
                        }) == 1)
                {
                    c.push_back(d);
                    found = true;
                    break;
                }
            }

            if (!found)
                c.push_back(word);
        }
    }

    return std::accumulate(
        c.begin(), c.end(), std::string(),
                                ->std::string {
                                    return a + ' ' + b;
                                });
}

int main()
{
    std::cout << "Enter text: ";
    std::string text;
    getline(std::cin, text);

    result = codewithvirus(text);

    // Print result
}
