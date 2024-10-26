def iscycle(graph):
    visited=set()
    def dfs(node):
        if node in visited:
            return True
        visited.add(node)
        for neighbour in graph[node]:
            if dfs(neighbour):
                return True
        visited.remove(node)
        return False
    for node in graph:
        if dfs(node):
            return True
    return False

graph = {
    0: [1, 2],
    1: [2],
    2: [0, 3],
    3: [3]
}
print(iscycle(graph)) # True