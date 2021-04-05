def main():
    N = int(input())
    ans = 0
    for _ in range(N):
        a, b = map(int, input().split())
        ans += b*(b+1)//2 - a*(a-1)//2
    print(ans)
    return


if __name__ == "__main__":
    main()
