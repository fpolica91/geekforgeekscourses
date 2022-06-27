


moves = [
    (-1, 0),  # up
    (1, 0 ),  # down
    (0, -1),  # left
    (0, 1)    #  right
  ]

def is_valid(x,y):
  if x < 0 or x >=n  or y < 0 or y >= m:
    return False
  if visited[x][y] == True:
    return False
  return True

def dfs(x,y):
  visited[x][y] = True
  for move in moves:
    row = x + move[0]
    col = y + move[1]
    if is_valid(row, col):
      dfs(row, col)
    

n = 0
m = 0


def count_rooms():
  count = 0
  for i in range(0, n):
    for j in range(0, m):
      if visited[i][j] == False:
        dfs(i,j)
        count += 1
  return count






visited = []
if __name__ == '__main__':
    n, m = map(int, input().split())
    for i in range(n):
        arr = list(input())
        visited.append(arr)
    
    for i in range(n):
      for j in range(m):
        if visited[i][j] == '.':
          visited[i][j] = False
        else:
          visited[i][j] = True
    print(count_rooms())
    


