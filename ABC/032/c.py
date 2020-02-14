def main():
    n,k = map(int,input().split())
    s = [0 for i in range(n)]
    for i in range(n):
        s[i] = int(input())
        if s[i]==0:
            print(n)
            return
    l=0
    r=0
    sum_a = s[0]
    ans = 0
    while(r < n):
        # sum_a *= s[r]
        # if sum_a > k:
        #     sum_a //= s[l]
        #     l += 1
        #     if r <= l:
        #         r += 1
        # else:
        #     r += 1
        


        if sum_a <= k:
            if ans < r-l+1:
                ans = r-l+1
            r += 1
            if r < n:
                sum_a *= s[r]
        else:
            # print(sum_a,end=' ')
            sum_a //= s[l]
            l+=1
            if r < l:
                r += 1
                if r < n:
                    sum_a *= s[r]
        # print(sum_a)

    print(ans)
    return

if __name__=="__main__":
    main()


