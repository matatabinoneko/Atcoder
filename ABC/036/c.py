
def main():
    n = int(input())
    a = [0 for i in range(n)]
    for i in range(n):
        a[i] = int(input())
    tmp = sorted(list(zip(range(n),a)),key=lambda x:x[1])
    # print(tmp)
    cnt = 0
    for i in range(1,n):
        if tmp[i-1][1]!= tmp[i][1]:
            tmp[i-1] = (tmp[i-1][0],cnt)
            cnt += 1
        else:
            tmp[i-1] = (tmp[i-1][0],cnt)

    tmp[i] = (tmp[i][0],cnt)
    # print(tmp)
    tmp = sorted(tmp,key=lambda x:x[0])
    for i in range(n):
        print(tmp[i][1])
    return 

if __name__ == "__main__":
    main()
    