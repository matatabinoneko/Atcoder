def main():
    n, m, q = map(int, input().split())
    edge = [[] for i in range(n)]
    for i in range(m):
        u, v = map(lambda x: int(x)-1, input().split())
        edge[u].append(v)
        edge[v].append(u)

    color = list(map(int, input().split()))

    for i in range(q):
        s = input().split()
        if int(s[0]) == 1:
            x = int(s[1])-1
            print(color[x])
            for j in edge[x]:
                color[j] = color[x]
        else:
            x = int(s[1])-1
            y = int(s[2])
            print(color[x])
            color[x] = y

    return


if __name__ == '__main__':
    main()
