import copy


def main():
    n = int(input())
    A = list(map(int, input().split()))
    B = copy.copy(A)
    while 2 < len(A):
        tmp = []
        for i in range(0, len(A), 2):
            if A[i] < A[i+1]:
                tmp.append(A[i+1])
            else:
                tmp.append(A[i])
        A = copy.copy(tmp)
    rate = min(A)
    print(B.index(rate)+1)
    return


if __name__ == "__main__":
    main()
