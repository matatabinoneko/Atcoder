def main():
    n,k = map(int,input().split())
    t = []
    for i in range(n):
        t.append([int(j) for j in input().split()])
        
    # print(t)

    for i in range(pow(k,n)):
        tmp = []
        index = i
        for j in range(n):
            tmp.append(t[j][index%k])
            index = index//k
        
        # print(tmp)
        for j in range(1,len(tmp)):
            tmp[0] = tmp[0]^tmp[j]
        if tmp[0] == 0:
            print("Found")
            return 

    print("Nothing")
    return 


if __name__ == "__main__":
    main()