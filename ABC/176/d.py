import queue

def main():
    h,w = map(int,input().split())
    Ch,Cw = map(lambda x:int(x)+1,input().split())
    Dh, Dw = map(lambda x:int(x)+1,input().split())

    maze = []
    for i in range(2):
        maze.append(['#' for j in range(4+w)])
    for i in range(h):
        maze.append(['#' for j in range(2)]+list(input())+ ['#' for j in range(2)])
    for i in range(2):
        maze.append(['#' for j in range(4+w)])

    # for i in range(len(maze)):
    #     print(''.join(maze[i]))

    maze_separate = [[0 for i in range(len(maze[0]))] for j in range(len(maze))]
    number = 1
    for i in range(len(maze_separate)):
        for j in range(len(maze_separate[i])):
            if maze[i][j]=='.' and maze_separate[i][j]==0:
                maze_separate[i][j] = number
                number += 1
                q = queue.Queue()
                q.put([i,j])
                while not q.empty():
                    x,y = q.get()
                    for dx,dy in [(0,1),(1,0),(0,-1),(-1,0)]:
                        if maze[x+dx][y+dy] == '.' and maze_separate[x+dx][y+dy]==0:
                            maze_separate[x+dx][y+dy] = maze_separate[x][y]
                            q.put([x+dx,y+dy])

    # for i in range(len(maze_separate)):
    #     print(maze_separate[i])

    have_been = [False for i in range(number+3)]
    have_been[0] = True
    have_been[maze_separate[Ch][Cw]] = True

    maze[Ch][Cw] = '#'
    q = queue.Queue()
    q.put([Ch,Cw,0])
    while not q.empty():
        x,y,cnt = q.get()
        # print(x,y,cnt)
        if x==Dh and y == Dw:
            print(cnt)
            return 
        else:
            for dx,dy in [(0,1),(1,0),(0,-1),(-1,0)]:
                if maze[x+dx][y+dy] == '.':
                   maze[x+dx][y+dy] = '#'
                   q.put([x+dx,y+dy,cnt]) 
            for dx in range(-2,3):
                for dy in range(-2,3):
                    if maze[x+dx][y+dy] == '.' and maze_separate[x+dx][y+dy] != maze_separate[x][y] and have_been[maze_separate[x+dx][y+dy]] == False:
                        have_been[maze_separate[x+dx][y+dy]] = True
                        maze[x+dx][y+dy] = '#'
                        q.put([x+dx,y+dy,cnt+1]) 
    print(-1)
    return

if __name__ == '__main__':
    main()