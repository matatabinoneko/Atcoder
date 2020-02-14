INF = 10000000000
a=[0 for i in range(int(1e5))]
b=[0 for i in range(int(1e5))]
ans = [INF for i in range(int(1e5))]

def main():
    h,n = map(int,input().split())
    for i in range(n):
        tmp = list(map(int,input().split()))
        a[i] = tmp[0]
        b[i] = tmp[1]
        index = min(h,a[i])
        if b[i] < ans[index]:
            ans[index] = b[i]
    
    
    for i in range(h):
        if ans[i]!=INF:
            for j in range(n):
                index = min(h,a[j]+i)
                if ans[i]+b[j] < ans[index]:
                    ans[index] = ans[i]+b[j]
    print(ans[h])
if __name__=="__main__":
    main()
    