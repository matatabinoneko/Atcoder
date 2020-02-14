def main():
    cost = [[1e10 for j in range(10)]for i in range(10)]
    h,w = map(int,input().split())
    for i in range(10):
        tmp = list(map(int,input().split()))
        for j in range(10):
            if tmp[j] != -1:
                cost[i][j]=tmp[j]
    
    a = list()
    for i in range(h):
        tmp = list(map(int,input().split()))
        a.append(tmp)
    


    for k in range(10):
        for i in range(10):
            for j in range(10):
                cost[i][j] = min(cost[i][k]+cost[k][j],cost[i][j])
    
    ans = 0
    for i in range(h):
        for j in range(w):
            if a[i][j] != -1:
                ans += cost[a[i][j]][1]

    print(ans)
    return

if __name__ == "__main__":
    main()
    