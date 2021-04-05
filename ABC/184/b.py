def main():
    N, X = map(int, input().split())
    for s in input():
        if s == "x":
            X = max(0, X-1)
        else:
            X += 1
    print(X)
    return


if __name__ == '__main__':
    main()
