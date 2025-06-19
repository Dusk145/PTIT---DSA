def dfs(u, v):
    stack = [(u, [u], set([u]))]
    cnt = 0
    freq = {}
    while stack:
        x, path, visited = stack.pop()
        if x == v:
            cnt += 1
            for i in range(1, len(path) - 1):
                freq[path[i]] = freq.get(path[i], 0) + 1
            continue
        for i in a[x]:
            if i not in visited:
                stack.append((i, path + [i], visited | {i}))
    if cnt == 0:
        return 0
    res = 0
    for key, value in freq.items():
        if value == cnt:
            res += 1
    return res

if __name__ == "__main__":
    t = int(input())
    for _ in range(t):
        n, m, u, v = map(int, input().split())
        a = []
        for i in range(n + 1):
            a.append([])
        for i in range(m):
            x, y = map(int, input().split())
            a[x].append(y)
        print (dfs(u, v))