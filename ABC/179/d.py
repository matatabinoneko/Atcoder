MOD = 998244353


def main():
    n, k = map(int, input().split())
    hani = [False for _ in range(10)]
    s = set()
    for _ in range(k):
        l, r = map(int, input().split())
        for i in range(l, r+1):
            s.add(i)

    return


if __name__ == "__main__":
    main()
