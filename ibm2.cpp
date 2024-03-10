#include <iostream>
#include <vector>

int playSegments(const std::vector<int> &coins)
{
    int totalScore = 0;
    for (int coin : coins)
    {
        totalScore += (coin == 1) ? 1 : -1;
    }

    // If the total score is non-positive, Player 1 should not play any segments
    if (totalScore <= 0)
    {
        return 0;
    }

    int player1Score = 0;
    for (size_t i = 0; i < coins.size(); ++i)
    {
        player1Score += (coins[i] == 1) ? 1 : -1;
        int player2Score = totalScore - player1Score;
        if (player1Score > player2Score)
        {
            return static_cast<int>(i) + 1;
        }
    }

    return 0; // Return 0 if Player 1 cannot have a higher score than Player 2.
}

int main()
{
    std::cout << playSegments({1, 1, 0, 1}) << std::endl;    // Output: 2
     
    return 0;
}
