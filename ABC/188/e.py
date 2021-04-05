INF = int(1e9+7)


def main():
    N, M = map(int, input().split())
    A = list(map(int, input().split()))
    graph = [[] for _ in range(N)]
    for _ in range(M):
        x, y = map(lambda x: int(x)-1, input().split())
        graph[x].append(y)
    min_buy_cost_list = [INF for _ in range(N)]
    ans = -1*INF
    for i in range(N):
        if min_buy_cost_list[i] != INF:
            ans = max(ans, A[i] - min_buy_cost_list[i])
        for next_node in graph[i]:
            min_buy_cost_list[next_node] = min(
                min_buy_cost_list[next_node], A[i], min_buy_cost_list[i])
    print(ans)
    return


if __name__ == "__main__":
    main()
