def main():
    N = int(input())
    cnt = 0
    thresh = 999
    while thresh < N:
        cnt += N - thresh
        thresh = thresh * 1000 + 999
    print(cnt)
    return


if __name__ == '__main__':
    main()
