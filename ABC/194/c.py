def main():
    N = int(input())
    A = list(map(int, input().split()))
    ans = 0
    sum_a = sum(A)
    for a in A:
        ans += (a**2)*(N-1)
        ans -= (sum_a - a)*a
    print(ans)
    return


if __name__ == "__main__":
    main()
