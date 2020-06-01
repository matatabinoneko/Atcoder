def main():
    n,m = map(int,input().split())
    a = list(map(int,input().split()))
    print(max(-1,n-sum(a)))
    return

if __name__ == "__main__":
    main()