import queue


def bfs(index, before):
    if direct[index] != -1:
        return
    print(index, before)
    direct[index] = before
    for next in graph[index]:
        bfs(index=next, before=index)


def main():
    n, m = map(int, input().split())
    graph = [[]for i in range(n+2)]
    direct = [-1 for i in range(n+2)]
    q = queue.Queue()

    for i in range(m):
        # a,b = map(lambda x:int(x)-1,input().split())
        a, b = map(int, input().split())
        graph[a].append(b)
        graph[b].append(a)
    q.put([1, 1])
    while q.qsize() != 0:
        index, before = q.get()
        if direct[index] == -1:
            direct[index] = before
            for next in graph[index]:
                q.put([next, index])
    print("Yes")
    for i in range(2, n+1):
        print(direct[i])

    return


if __name__ == "__main__":
    main()
