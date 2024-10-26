#include <iostream>
#include <vector>
#include <cmath>
#include <queue>
#include <set>
using namespace std;

// Structure to store the position of each car
struct Car
{
    int x, y;
};

// Structure to store the state of each step
struct State
{
    vector<Car> cars;
    int t; // number of moves

    bool operator<(const State &other) const
    {
        return t > other.t;
    }
};

// Function to check if all cars are at the city square (p, q)
bool allAtCitySquare(const vector<Car> &cars, int p, int q)
{
    for (const Car &car : cars)
    {
        if (car.x != p || car.y != q)
        {
            return false;
        }
    }
    return true;
}

// Function to move cars and check validity
vector<Car> moveCars(const vector<Car> &cars, const vector<pair<int, int>> &moves)
{
    vector<Car> newCars = cars;
    for (size_t i = 0; i < newCars.size(); ++i)
    {
        newCars[i].x += moves[i].first;
        newCars[i].y += moves[i].second;
    }
    return newCars;
}

// Function to solve the problem using BFS
int minMovesToCitySquare(int N, int M, int p, int q, vector<Car> &cars)
{
    priority_queue<State> pq;
    set<vector<Car>> visited;

    pq.push({cars, 0});
    visited.insert(cars);

    while (!pq.empty())
    {
        State current = pq.top();
        pq.pop();

        if (allAtCitySquare(current.cars, p, q))
        {
            return current.t;
        }

        int t = current.t + 1;

        // Generate all possible moves (up, down, left, right)
        vector<pair<int, int>> directions = {{1, 0}, {-1, 0}, {0, 1}, {0, -1}};

        // Try all combinations of moves
        for (auto &dir1 : directions)
        {
            for (auto &dir2 : directions)
            {
                vector<pair<int, int>> moves;
                for (size_t i = 0; i < cars.size(); ++i)
                {
                    moves.push_back({dir1.first * t, dir2.second * t});
                }
                vector<Car> newCars = moveCars(current.cars, moves);

                // Check if the new state is valid
                if (visited.find(newCars) == visited.end())
                {
                    pq.push({newCars, t});
                    visited.insert(newCars);
                }
            }
        }
    }

    return -1; // Cannot gather all cars at city square
}

int main()
{
    int N, M, p, q;
    cin >> N >> M >> p >> q;

    vector<Car> cars(N);
    for (int i = 0; i < N; ++i)
    {
        cin >> cars[i].x >> cars[i].y;
    }

    int result = minMovesToCitySquare(N, M, p, q, cars);
    cout << result << endl;

    return 0;
}