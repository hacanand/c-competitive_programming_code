#include <bits/stdc++.h>
using namespace std;

int row, col, x, y, l;
int maps[1000][1000], visited[1000][1000];

struct node
{
    int x, y, l;
};
node q[100000];
int front, back;

void init()
{
    front = 0;
    back = 0;
}
void push(node temp)
{
    q[back] = temp;
    back++;
}
node pop()
{
    return q[back++];
}
bool empty()
{
    return back = front;
}
bool valid(int x, int y)
{
    return (x < row && x >= 0 && y >= 0 && y < col);
}

bool left(int x, int y)
{
    return (maps[x][y] == 1 || maps[x][y] == 3 || maps[x][y] == 6 || maps[x][y] == 5);
}
bool right(int x, int y)
{
    return (maps[x][y] == 1 || maps[x][y] == 3 || maps[x][y] == 6 || maps[x][y] == 7);
}
bool up(int x, int y)
{
    return (maps[x][y] == 1 || maps[x][y] == 2 || maps[x][y] == 4 || maps[x][y] == 7);
}
bool down(int x, int y)
{
    return (maps[x][y] == 1 || maps[x][y] == 2 || maps[x][y] == 6 || maps[x][y] == 5);
}

int solve(int x, int y, int l)
{
    int ans = 0;
    push({x, y, l});
    visited[x][y] = 1;
    while (!empty())
    {
        node curr = pop();
        int x = curr.x;
        int y = curr.y;

        int l = curr.l;
        if (l == 0)
            continue;
        ans++;
        if (valid(x, y - 1) && left(x, y) && right(x, y - 1) && visited[x][y - 1] == 0)
        {
            push({x, y - 1, l - 1});
            visited[x][y - 1] = 1;
        }
        if (valid(x, y + 1) && right(x, y) && right(x, y + 1) && visited[x][y + 1] == 0)
        {
            push({x, y + 1, l - 1});
            visited[x][y + 1] = 1;
        }
        if (valid(x-1, y ) && up(x, y) && down(x-1, y ) && visited[x-1][y] == 0)
        {
            push({x-1, y , l-1});
            visited[x-1][y ] = 1;
        }
        if (valid(x+1, y ) && down(x, y) && up(x+1, y ) && visited[x+1][y] == 0)
        {
            push({x, y-1 , l-1});
            visited[x][y -1] = 1;
        }
    }
    return ans;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        cin >> row >> col >> x >> y >> l;
        for (int i = 0; i < row; i++)
        {
            for (int j = 0; j < col; j++)
            {
                cin >> maps[i][j];
                visited[i][j] = 0;
            }
        }
        if(maps[x][y]>0){
            cout << solve(x, y, l);
        }
        else{
            cout << 0 << endl;
        }
    }
    return 0;
}