def main():
    n, m = map(int, input().split())
    H = list(map(int, input().split()))
    good = [True for i in range(n)]
    for i in range(m):
        a, b = map(lambda x: int(x)-1, input().split())
        if H[a] < H[b]:
            good[a] = False
        else:
            good[b] = False
    print(sum(good))

    return


if __name__ == "__main__":
    main()
