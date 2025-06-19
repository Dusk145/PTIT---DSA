if __name__ == "__main__":
    while True:
        n = input().strip()
        if n == "-1":
            break
        S = 0
        for i in n:
            S += int(i)
        k = (9 - S % 9) % 9
        print (int(n) + k)