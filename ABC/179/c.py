def main():
    n = int(input())
    ans = 0
    for i in range(1, n):
        ans += (n-1)//i
    print(ans)
    return


if __name__ == "__main__":
    main()
