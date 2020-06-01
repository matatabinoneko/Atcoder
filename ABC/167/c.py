INF = pow(10, 9)


def main():
    n, m, x = map(int, input().split())
    i = 0
    c = []
    a = []

    for i in range(n):
        tmp = list(map(int, input().split()))
        c.append(tmp[0])
        a.append(tmp[1:])

    ans = INF
    for i in range(2**n):
        tmp = [0 for i in range(m)]
        cost = 0
        flag = True
        for j in range(n):
            if ((i >> j) & 1) == 1:
                tmp = [x+y for x, y in zip(tmp, a[j])]
                cost += c[j]
        # print(tmp)
        for j in range(m):
            if tmp[j] < x:
                flag = False
                break
        # print(cost)
        if flag == True:
            if cost < ans:
                ans = cost
    print(ans) if ans != INF else print(-1)

    return


if __name__ == "__main__":
    main()
