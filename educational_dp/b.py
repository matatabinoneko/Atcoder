def main2():
    N,K = map(int,input().split())
    h = list(map(int,input().split())) + [0 for _ in range(K)]
    cost  = [float("inf") for _ in range(N+K)]
    cost[0] = 0
    for i in range(N):
        for k in range(1,K+1):
            cost[i+k] = min(cost[i]+abs(h[i]-h[i+k]),cost[i+k])
    print(cost[N-1])

def main():
    N,K = map(int,input().split())
    h = list(map(int,input().split()))
    cost  = [0 for _ in range(N)]
    cost[1] = abs(h[1] - h[0])
    for i in range(2, N):
        cost[i] = min([abs(h[i]-h[i-k])+cost[i-k] for k in range(1,K+1) if 0 <= i-k])
    print(cost[N-1])
    return


if __name__ == "__main__":
    main()