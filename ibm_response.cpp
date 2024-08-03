#include <bits/stdc++.h>
using namespace std;

int main()
{
    string filename;
    getline(cin, filename);
    ifstream file(filename);
    if (!file.is_open())
    {
        cerr << "Error: file not found" << endl;
        return 1;
    }
    long bytes = 0, count = 0;
    string line;
    while (getline(file, line))
    {
        line.erase(line.find_last_not_of("\t\r\n") + 1);
        istringstream iss(line);
        vector<string> words;
        string word;
        while (iss >> word)
        {
            words.push_back(word);
        }
        if (words.size() > 0 and stoi(words.back()) > 5000)
        {
            count++;
            bytes += stoi(words.back());
        }
    }
    file.close();
    ofstream outputFile("bytes_" + filename);
    outputFile << count << endl
               << bytes << endl;
    outputFile.close();
    cout << filename << endl;
    return 0;
}