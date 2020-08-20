def main():
    n = int(input())
    ans = 1
    A = list(map(int,input().split()))
    A.sort()
    for a in A:
        ans *= a
        if 1e18 < ans:
            print(-1)
            return 
    print(ans)

if  __name__ == "__main__":
    main()