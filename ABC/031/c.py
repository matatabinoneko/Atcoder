def main():
    n = int(input())
    a = [int(i) for i in input().split()]
    ans = -1*1e9
    for i in range(n):
        aoki = -1*1e9
        takahashi = -1*1e9
        for j in range(n):
            tmp_takahashi = 0
            tmp_aoki = 0
            if i!=j:
                p = min(i,j)
                q = max(i,j)
                for k in range(p,q+1):
                    if (k-p)%2==0:
                        tmp_takahashi += a[k]
                    else:
                        tmp_aoki += a[k]

                if aoki < tmp_aoki:
                    aoki = tmp_aoki
                    takahashi = tmp_takahashi

        if ans < takahashi:
            ans = takahashi
    print(ans)
    return


if __name__=="__main__":
    main()
    