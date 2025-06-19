if __name__ == "__main__":
    t = int(input())
    for _ in range(t):
        n, m = map(int, input().split())
        a = list(map(int, input().split()))
        maxi = max(a)
        idx = a.index(maxi)
        a.insert(idx, m)
        for i in a:
            if i < 0:
                print (i, end = " ")
        for i in a:
            if i >= 0:
                print (i, end = " ")
        print ()