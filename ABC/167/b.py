def main():
    a, b, c, k = map(int, input().split())
    ans = min(a, k)
    k = max(k-a, 0)
    if k == 0:
        print(ans)
        return
    k = max(k-b, 0)
    if k == 0:
        print(ans)
        return
    print(ans - k)
    return


if __name__ == "__main__":
    main()
