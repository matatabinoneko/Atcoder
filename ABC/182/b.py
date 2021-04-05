def main():
    N = int(input())
    A = list(map(int, input().split()))
    ans = 2
    cnt = 0
    for i in range(2, max(A)+1):
        tmp_cnt = 0
        for a in A:
            if a % i == 0:
                tmp_cnt += 1
        if cnt <= tmp_cnt:
            cnt = tmp_cnt
            ans = i
    print(ans)

    return


if __name__ == "__main__":
    main()
