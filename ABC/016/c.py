def main():
    n,m = map(int,input().split())

    friend = [[]for i in range(n)]

    for i in range(m):
        a,b = map(int,input().split())
        a-=1
        b-=1

        friend[a].append(b)
        friend[b].append(a)

    # print(friend)
    for i in range(n):
        ans = 0
        flag = [False for i in range(n)]
        flag[i] = True
        for f in friend[i]:
            flag[f] = True
        for j in range(len(friend[i])):
            for k in range(len(friend[friend[i][j]])):
                # print(k,friend[i])
                if flag[friend[friend[i][j]][k]] == False:
                    flag[friend[friend[i][j]][k]] = True
                    ans += 1
            # ans += len(friend[friend[i][j]])
        print(ans)



if __name__ == "__main__":
    main()