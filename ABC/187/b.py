def main():
    n = int(input())
    X, Y = [], []
    for i in range(n):
        x, y = map(int, input().split())
        X.append(x)
        Y.append(y)
    cnt = 0
    for i in range(n):
        for j in range(i+1, n):
            if abs((Y[i]-Y[j])/(X[i]-X[j])) <= 1:
                cnt += 1
    print(cnt)
    return


if __name__ == '__main__':
    main()
