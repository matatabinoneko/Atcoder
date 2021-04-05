import sys
sys.setrecursionlimit(200000)


def expect_value(n, k):
    '''
        n:ノードの数
        k:連結したいノード数
    '''
    if k == 1:
        return 0
    return expect_value(n, k-1) + (n/(n-k+1))


def main():
    N = int(input())
    print(f"{expect_value(N, N):.10f}")
    return


if __name__ == "__main__":
    main()
