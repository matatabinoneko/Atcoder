def main():
    n = int(input())
    A = list(map(int,input().split()))
    front = 0
    ans = 0
    for a in A:
        if front < a:
            front = a
        else:
            ans += front - a
    print(ans)
    return

if __name__ == '__main__':
    main()