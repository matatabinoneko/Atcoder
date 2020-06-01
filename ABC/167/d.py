def main():
    n, k = map(int, input().split())
    a = list(map(lambda x: int(x)-1, input().split()))
    flag = [-1 for i in range(n)]
    now = 0
    cnt = 0

    while flag[now] == -1:
        flag[now] = cnt
        cnt += 1
        now = a[now]
    # print(cnt, now, flag[now])
    k = (k-flag[now]) % (cnt-flag[now])

    for i in range(k):
        now = a[now]
    print(now+1)
    return


if __name__ == "__main__":
    main()
