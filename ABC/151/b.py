def main():
    n,k,m = map(int,input().split())
    a = list(map(int,input().split()))
    sum_a = sum(a)
    need = m*n - sum_a
    if k < need:
        print(-1)
    else:
        print(max(0,need))

    return 0


if __name__ == "__main__":
    main()