def main():
    n,m = map(int,input().split())
    if m==0:
        if n==1:
            print(0)
            return
        else:
            print(pow(10,n-1))
        return

    ans = [-1 for i in range(n)]
    for i in range(m):
        s,c = map(int,input().split())
        if ans[s-1] == -1 or ans[s-1]==c:
            ans[s-1] = c
        else:
            print(-1)
            return

    if  not ans[0] in [0, -1]:
        ans = [a if a!=-1 else 0 for a in ans]
        print("".join(map(str,ans)))
        return

    print(-1)
    return
    


    return 

if __name__=="__main__":
    main()