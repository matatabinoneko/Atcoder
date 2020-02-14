def main():
    n = int(input())
    buka = [[1e10,0]for i in range(n)]


    salary = [1 for i in range(n)]

    b = [0 for i in range(n)]

    for i in range(1,n):
        b[i] = int(input())-1

    for i in reversed(range(1,n)):
        # print(i,buka[i])
        if buka[i] !=[1e10,0]:
            salary[i] = buka[i][0] + buka[i][1] + 1
            # print(i,salary[i])

        buka[b[i]] = [min(buka[b[i]][0],salary[i]),max(buka[b[i]][1],salary[i])]
    
    print(buka[0][0]+buka[0][1]+1)

    return 

if __name__ == "__main__":
    main()