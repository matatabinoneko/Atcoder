maze = []
cnt = []
H,W = None,None

def dfs(x,y):
    if x< H-1:
        if cnt[x][y] + (maze[x+1][y]=="#") < cnt[x+1][y]:
            cnt[x+1][y] = cnt[x][y] + (maze[x+1][y]=="#")
            dfs(x+1,y)

    if y< W-1:
        if cnt[x][y] + (maze[x][y+1]=="#") < cnt[x][y+1]:
            cnt[x][y+1] = cnt[x][y] + (maze[x][y+1]=="#")
            dfs(x,y+1)


def main():
    INF = pow(10,6)
    global H,W,maze,cnt
    H,W = map(int,input().split())
    cnt = [[INF for i in range(W)] for j in range(H)]
    for i in range(H):
        tmp = list(input())
        maze.append(tmp)

    cnt[0][0] = 1 if maze[0][0]=="#" else 0
    dfs(x=0,y=0)
    print(cnt[H-1][W-1])
    return

if __name__ == "__main__":
    main()