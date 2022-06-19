
def dfs_util(adj, visited, current):
  if visited[current]:
    return
  print(current, "->", end=" ")
  visited[current] = True
  for neighbor in adj[current]:
    if not visited[neighbor]:
      print(neighbor, end=" ")
      dfs_util(adj, visited, neighbor)
  print()

def dfs(adj):
  n = len(adj)
  visited = [0] * 100
  for i in range(n):
    dfs_util(adj, visited, i)


if __name__ == "__main__":
  
  dfs([[1, 2], [0, 3], [0, 4], [3, 2], [4, 3]])