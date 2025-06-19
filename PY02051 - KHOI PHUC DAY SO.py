if __name__ == "__main__":
    n = int(input())
    a = []
    for i in range(n):
        temp = list(map(int, input().split()))
        a.append(temp)
    if n == 2:
        print (a[0][1] // 2, a[0][1] //2)
    else:
        temp = (a[0][1] + a[0][2] - a[1][2]) // 2
        print (temp, end = " ")
        for i in range(1, n):
            print (a[0][i] - temp, end = " ")