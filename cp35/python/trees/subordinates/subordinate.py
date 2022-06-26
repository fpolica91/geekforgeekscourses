
from collections import defaultdict
N = 20
cnt = [ 0 for i in range(N) ]
n = int(input().strip())
g = defaultdict(list)


def dfs(s):
    cnt[s] = 1
    for e in g[s]:
        dfs(e)
        cnt[s] += cnt[e]



def main():
    for i in range(2, n + 1):
        x = int(input().strip())
        g[x].append(i)
    dfs(1)
    for i in range(1, n + 1):
        print(cnt[i] - 1, end=" ")
    print()


if __name__ == '__main__':
  main()