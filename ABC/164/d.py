def main():
    s = input()
    start = 0
    end = 1
    cnt = 0
    while(start != len(s)-1):
        # print("now", start, end, int(s[start:end]))
        tmp = int(s[start:end])
        if tmp % 2019 == 0:
            print(start, end)
            cnt += 1
            start = end-1
        else:
            if end <= len(s)-1:
                end += 1
            else:
                start += 1
    print(cnt)
    return


if __name__ == "__main__":
    main()
