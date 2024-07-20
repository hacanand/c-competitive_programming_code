#include <iostream>
#include <vector>
#include <queue>
#include <set>
#include <cstring>
using namespace std;

// Time Complexity: O(rows*cols)
// Space Complexity: O(rows*cols)
// solution using BFS

// int minDistanceBFS(vector<vector<int>> &matrix)
// {
//     int rows = matrix.size();
//     int cols = matrix[0].size();
//     int startRow, startCol;
//     for (int i = 0; i < rows; i++)
//     {
//         for (int j = 0; j < cols; j++)
//         {
//             if (matrix[i][j] == 2)
//             {
//                 startRow = i;
//                 startCol = j;
//                 break;
//             }
//         }
//     }
//     if (startCol == -1 or startCol == -1)
//         return -1;
//     vector<pair<int, int>> directions = {{0, 1}, {1, 0}, {0, -1}, {-1, 0}};
//     queue<pair<int, int>> q;
//     set<pair<int, int>> visited;
//     q.push({startRow, startCol});
//     visited.insert({startRow, startCol});
//     int distance = 0;
//     while (!q.empty())
//     {
//         int size = q.size();
//         for (int i = 0; i < size; i++)
//         {
//             int row = q.front().first;
//             int col = q.front().second;
//             q.pop();
//             if (row == 0 or row == rows - 1 or col == 0 or col == cols - 1)
//                 return distance;
//             for (auto &dir : directions)
//             {
//                 int newRow = row + dir.first;
//                 int newCol = col + dir.second;
//                 if (newRow >= 0 and newRow < rows and newCol >= 0 and newCol < cols and matrix[newRow][newCol] == 0 and visited.find({newRow, newCol}) == visited.end())
//                 {
//                     q.push({newRow, newCol});
//                     visited.insert({newRow, newCol});
//                 }
//             }
//         }
//         distance++;
//     }
//     return -1;
// }

// Time Complexity: O(rows*cols)
// space complexity: O(rows*cols)
// solution using DP
#define rows 6
#define cols 6
int minDistanceDP(vector<vector<int>> &matrix, int trow, int tcol, vector<vector<int>> &dp, vector<vector<bool>> &visited)
{   
    
    if (trow == 0 or trow == rows - 1 or tcol == 0 or tcol == cols - 1)
    {
        return 0;
    }
    if (dp[trow][tcol] != -1)
    {
        return dp[trow][tcol];
    }
    visited[trow][tcol] = true;
    int ans1, ans2, ans3, ans4;
    ans1 = ans2 = ans3 = ans4 = INT_MAX;
    if (trow - 1 >= 0 and matrix[trow - 1][tcol] == 0 and visited[trow - 1][tcol] == false)
    {
        ans1 = minDistanceDP(matrix, trow - 1, tcol, dp, visited);
    }
    if (trow + 1 < rows and matrix[trow + 1][tcol] == 0 and visited[trow + 1][tcol] == false)
    {
        ans2 = minDistanceDP(matrix, trow + 1, tcol, dp, visited);
    }
    if (tcol - 1 >= 0 and matrix[trow][tcol - 1] == 0 and visited[trow][tcol - 1] == false)
    {
        ans3 = minDistanceDP(matrix, trow, tcol - 1, dp, visited);
    }
    if (tcol + 1 < cols and matrix[trow][tcol + 1] == 0 and visited[trow][tcol + 1] == false)
    {
        ans4 = minDistanceDP(matrix, trow, tcol + 1, dp, visited);
    }
    dp[trow][tcol] = 1 + min(ans1, min(ans2, min(ans3, ans4)));
    return dp[trow][tcol];
}

int main()
{
    vector<vector<int>> matrix = {{0, 1, 1, 0, 0, 0},
                                  {1, 0, 1, 0, 0, 0},
                                  {1, 2, 0, 0, 1, 0},
                                  {0, 1, 1, 0, 1, 1},
                                  {0, 0, 1, 1, 0, 1},
                                  {0, 0, 0, 1, 1, 0}};

    // int minDistance = minDistanceBFS(matrix);
    // int rows = matrix.size();
    // int cols = matrix[0].size();
    int startRow = -1;
    int startCol = -1;
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            if (matrix[i][j] == 2)
            {
                startRow = i;
                startCol = j;
                break;
            }
        }
    }
    if (startCol == -1 or startCol == -1)
        return -1;
    vector<vector<int>> dp(rows, vector<int>(cols, -1));
   vector<vector<bool>> visited(rows, vector<bool>(cols, false));
   // memset(visited, false, sizeof(visited));
    int minDistance = minDistanceDP(matrix, startRow, startCol, dp, visited);
    if(minDistance >= INT_MAX)
    {
        cout << "No path found" << endl;
        return 0;
    }
    cout << minDistance << endl;
    return 0;
}