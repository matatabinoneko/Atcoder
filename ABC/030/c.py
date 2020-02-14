def main():
    n,m = map(int,input().split())
    x,y = map(int,input().split())
    a = [int(i) for i in input().split()]
    b = [int(i) for i in input().split()]
    a_idx = 0
    b_idx = 0
    ans = 0
    time = 0
    while True:
        flag = True
        while True:
            if len(a) <= a_idx:
                flag = False
                break
            if a[a_idx] < time:
                a_idx += 1
            else:
                time = a[a_idx] + x
                break
        # print(time)
        if flag == False:
            break

        while True:
            if len(b) <= b_idx:
                flag = False
                break
            if b[b_idx] < time:
                b_idx += 1
            else:
                time = b[b_idx] + y
                break    
        if flag == False:
            break
        # print(time)
        ans += 1
    print(ans)
    return 

if __name__=="__main__":
    main()