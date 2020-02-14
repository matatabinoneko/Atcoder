import queue
import copy
def main():
    h,w = map(int,input().split())
    maze = []
    maze.append(['#' for i in range(w+2)])
    for i in range(h):
        tmp = input()
        tmp = list('#' + tmp + '#')
        maze.append(tmp)
    maze.append(['#' for i in range(w+2)])
    # print(maze)

    dx_ = [0,1,0,-1]
    dy_ = [1,0,-1,0]
    ans = -1
    q = queue.Queue()
    for i in range(1,h+1):
        for j in range(1,w+1):
            new_maze = copy.deepcopy(maze)
            
            dis = [[-1 for a in range(w+2)]for b in range(h+2)]
            # for a in range(1,h):
            #     for b in range(1,w):
            #         dis[a][b] = -1

            if new_maze[i][j]=='.':
                dis[i][j]=0
                q.put([i,j])
            max_dis = -1
            while(not q.empty()):
                [x,y] = q.get()
                new_maze[x][y]='#'
                # print(x,y)
                if max_dis < dis[x][y]:
                    max_dis = dis[x][y]

                for dx,dy in zip(dx_,dy_):
                    # print(x+dx,y+dy)
                    if dis[x+dx][y+dy] == -1 and new_maze[x+dx][y+dy] != '#':
                        # new_maze[x+dx][y+dy] = '#'
                        dis[x+dx][y+dy] = dis[x][y]+1
                        q.put([x+dx,y+dy])
                        # print("put",x+dx,y+dy)

                        # for i in range(len(maze)):
                        #     print(maze[i])
                        # print()
            # print("max is",max_dis)
            if ans < max_dis:
                ans = max_dis

            
    print(ans)
    return 0


if __name__ == "__main__":
    main()