def main():
    h,w,k = map(int,input().split())
    maze = [['.' for j in range(6)] for i in range(6)]


    for i in range(h):
        line = list(input())
        for j in range(w):
            maze[i][j] = line[j]
    
    # print(maze)

    ver = [0 for i in range(6)]
    hor = [0 for i in range(6)]
    horver = [[0 for i in range(6)] for j in range(6)]
    total = 0
    for i in range(6):
        for j in range(6):
            if maze[i][j] == '#':
                ver[j] += 1
                hor[i] += 1
                horver[i][j] = 1
                total += 1
    # print(ver,hor,horver)

    ans = 0
    for bit in range(2**(h+w)):
        tmp = total
        valid_hor = []
        for i in range(h):
            if (bit >> i & 1) == 1:
                valid_hor.append(i)
                tmp -= hor[i] 
        
        for j in range(h,h+w):
            if (bit >> j & 1) == 1:
                tmp -= ver[j-h]
                for i in valid_hor:
                    tmp += horver[i][j-h]
    
        if tmp == k:
            ans += 1

    print(ans)
    return 

if __name__ == '__main__':
    main()