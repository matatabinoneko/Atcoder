def main():
    n,d,k = map(int,input().split())
    l = [0 for i in range(d)]
    r = [0 for i in range(d)]
    s = [0 for i in range(k)]
    t = [0 for i in range(k)]
    ans = [0 for i in range(k)]
    flag = [False for i in range(k)]
    
    for i in range(d):
        l[i],r[i] = map(int,input().split())
    for i in range(k):
        s[i],t[i] = map(int,input().split())
        

    for i in range(d):

        # print(ans,s)
        for j in range(k):

            if flag[j] == False and l[i] <= s[j] and s[j] <= r[i]:
                if t[j] - s[j] > 0:
                    s[j] = r[i]
                    if t[j] - s[j] <= 0:
                        ans[j] = i+1
                        flag[j] = True
                elif t[j] - s[j] < 0:
                    s[j] = l[i]
                    if 0 <= t[j] - s[j]:
                        ans[j] = i+1
                        flag[j] = True
        
    
    for i in range(k):
        print(ans[i])
                



if __name__ == "__main__":
    main()