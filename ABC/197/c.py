def main():
    N = int(input())
    A = list(map(int, input().split()))
    ans = 1e12
    # split_flag = []
    for flag in range(2**(N-1)):
        or_list = []
        tmp = A[0]
        for i in range(N-1):
            if ((flag >> i) & 1) == 1:
                # wakeru
                or_list.append(tmp)
                tmp = A[i+1]
            else:
                # wakenai
                tmp |= A[i+1]
        or_list.append(tmp)

        tmp_ans = or_list[0]
        for tmp_or in or_list[1:]:
            tmp_ans ^= tmp_or
        if tmp_ans < ans:
            ans = tmp_ans
    print(ans)

    return


if __name__ == "__main__":
    main()
