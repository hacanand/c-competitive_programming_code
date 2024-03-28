#include <iostream>
#include <vector>

void printCheckerboard(int n)
{
    std::vector<std::vector<char>> board(2 * n, std::vector<char>(2 * n));

    for (int i = 0; i < 2 * n; i++)
    {
        for (int j = 0; j < 2 * n; j++)
        {
            if ((i / 2 + j / 2) % 2 == 0)
            {
                board[i][j] = '#';
            }
            else
            {
                board[i][j] = '.';
            }
        }
    }

    for (int i = 0; i < 2 * n; i++)
    {
        for (int j = 0; j < 2 * n; j++)
        {
            std::cout << board[i][j];
        }
        std::cout << "\n";
    }
}

int main()
{
    int t;
    std::cin >> t;
    for (int i = 0; i < t; i++)
    {
        int n;
        std::cin >> n;
        printCheckerboard(n);
    }
    
    return 0;
}
