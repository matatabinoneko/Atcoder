def main():
    n = int(input())
    cnt = 0
    for _ in range(n):
        a, b = map(int, input().split())
        if a == b:
            cnt += 1
        else:
            cnt = 0
        if cnt == 3:
            print("Yes")
            return
    print('No')
    return


if __name__ == "__main__":
    main()
