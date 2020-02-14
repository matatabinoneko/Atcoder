
maze = []
newmaze = []
have_been = []
start = -1 
goal = -1

def dfs(i,j,cnt):
    if have_been[i][j] == False:
        return 
    if [i,j] == goal:
        return cnt
    if 


def main():
    h,w = map(int,input().split())
    maze.append(''.join(['#' for i in range(w+2)]))
    for i in range(h):
        tmp = input()
        tmp = '#' + tmp + '#'
        maze.append(tmp)
    maze.append(''.join(['#' for i in range(w+2)]))
    # print(maze)
    for i in range(h):
        for j in range(w):
            new_maze = []
            for a in range(h):
                new_maze.append(maze[a])
            have_been = [[False for j in range(w)] for i in range(h)]
            start = [i,j]
            dfs(i,j,0)

    return 0


if __name__ == "__main__":
    main()