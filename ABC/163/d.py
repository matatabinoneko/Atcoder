MOD = int(1e9+7)
def main():
    n,k = map(int,input().split())
    ans = 0
    for i in range(k,n+2):
        # min_sum = sum(range(i))
        min_sum = i*(i-1)//2
        # max_sum = sum(range(n,n-i,-1))
        max_sum = (2*n-i+1)*(i)//2
        # print(min_sum,max_sum)
        ans = (ans + (max_sum-min_sum+1))%MOD
    print(ans)
    return

if __name__ == "__main__":
    main()