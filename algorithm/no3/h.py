
INF = int(1e9+10)


def main():

    n, l = map(int, input().split())
    hardle = [False for i in range(l+10)]
    for x in map(int, input().split()):
        hardle[x] = True
    t1, t2, t3 = map(int, input().split())  # 全て偶数です

    dp = [INF for i in range(l+10)]
    dp[0] = 0

    for i in range(l):
        dp[i+1] = min(dp[i]+t1+t3*hardle[i+1], dp[i+1])
        dp[i+2] = min(dp[i]+t1+t2+t3*hardle[i+2], dp[i+2])
        dp[i+4] = min(dp[i]+t1+2*t2 + t3*hardle[i+4], dp[i+4])

    print(dp[l+1])
    return


if __name__ == '__main__':
    main()
