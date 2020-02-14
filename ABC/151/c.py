def main():
    n,m = map(int,input().split())
    flag = [False for i in range(n+5)]
    AC = 0
    WA = [0 for i in range(n+5)]
    _WA = 0
    for i in range(m):
        input_line = input().split()
        p,s = int(input_line[0]), input_line[1]
        if flag[p] == False:
            if s == "AC":
                AC += 1
                _WA += WA[p]
                flag[p] = True
            else:
                WA[p] += 1
    print(AC,_WA)
    return


if __name__ == "__main__":
    main()