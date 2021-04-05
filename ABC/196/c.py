def main():
    N = int(input())
    cnt = 0
    for i in range(1, N):
        if N < int(f"{i}{i}"):
            break
        cnt += 1
    print(cnt)
    return


if __name__ == '__main__':
    main()
