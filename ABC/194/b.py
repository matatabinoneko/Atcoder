INF = 1e9


def main():
    N = int(input())
    A = [INF, INF]
    B = [INF, INF]
    min_ab = INF
    flag = False
    for _ in range(N):
        a_flag = False
        b_flag = False
        a, b = map(int, input().split())
        if a < A[0]:
            a_flag = True
            A = [a, A[0]]
        elif a < A[1]:
            A = [A[0], a]
        if b < B[0]:
            b_flag = True
            B = [b, B[0]]
        elif b < B[1]:
            B = [B[0], b]

        if flag:
            if a_flag ^ b_flag:
                flag = False
        else:
            if a_flag and b_flag:
                flag = True

        min_ab = min(min_ab, a+b)
    if flag:
        print(min(max(A[0], B[1]), max(A[1], B[0]), min_ab))
    else:
        print(max(A[0], B[0]))

    return


if __name__ == "__main__":
    main()
