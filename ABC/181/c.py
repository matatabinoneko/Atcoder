
def main():
    N = int(input())
    X, Y = [], []
    for _ in range(N):
        x, y = map(int, input().split())
        X.append(x)
        Y.append(y)
    for i in range(N):
        for j in range(i+1, N):
            for k in range(i+1, j):
                if (Y[i]-Y[j]) * (X[i]-X[k]) == (X[i]-X[j]) * (Y[i]-Y[k]):
                    print("Yes")
                    return
    print("No")
    return


if __name__ == "__main__":
    main()
