import queue
import itertools
OFFSET = 205


maze = [['.' for i in range(420)] for j in range(420)]
for i in range(420):
    maze[0][i] = '#'
    maze[i][0] = '#'
    maze[419][i] = '#'
    maze[i][419] = '#'


def main():
    n, X, Y = map(int, input().split())
    X = X+OFFSET
    Y = Y+OFFSET
    global maze
    for i in range(n):
        a, b = map(lambda x: int(x)+OFFSET, input().split())
        maze[a][b] = '#'
    q = queue.Queue()
    maze[OFFSET][OFFSET] = '#'
    q.put([0+OFFSET, 0+OFFSET, 0])
    while not q.empty():
        # print(q.qsize())
        x, y, cnt = q.get()
        if (x, y) == (X, Y):
            print(cnt)
            return
        for _x, _y in [(-1, 0), (-1, 1), (0, 1), (1, 1), (1, 0), (0, -1)]:
            if maze[x+_x][y+_y] == '.':
                maze[x+_x][y+_y] = '#'
                q.put([x+_x, y+_y, cnt+1])
    print(-1)
    return


if __name__ == '__main__':
    main()
