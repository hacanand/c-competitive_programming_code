from collections import deque


def is_valid(x, y, M, N, grid, visited):
    return 0 <= x < M and 0 <= y < N and grid[x][y] == 0 and (x, y) not in visited


def bfs(grid, src, dst, move_rule, M, N):
    directions = [
        (move_rule[0], move_rule[1]),  # forward
        (move_rule[1], -move_rule[0]),  # right (90° clockwise)
        (-move_rule[0], -move_rule[1]),  # backward (180° rotation)
        (-move_rule[1], move_rule[0]),
    ]  # left (90° anticlockwise)

    queue = deque([(src[0], src[1], 0)])  # (x, y, steps)
    visited = set([(src[0], src[1])])

    while queue:
        x, y, steps = queue.popleft()

        if (x, y) == (dst[0], dst[1]):
            return steps

        for dx, dy in directions:
            new_x, new_y = x + dx, y + dy
            if is_valid(new_x, new_y, M, N, grid, visited):
                visited.add((new_x, new_y))
                queue.append((new_x, new_y, steps + 1))

    return -1  # In case no valid path is found


# Input reading
M, N = map(int, input().split())
grid = [list(map(int, input().split())) for _ in range(M)]
src = tuple(map(int, input().split()))
dst = tuple(map(int, input().split()))
move_rule = tuple(map(int, input().split()))

# Output the result
print(bfs(grid, src, dst, move_rule, M, N))
