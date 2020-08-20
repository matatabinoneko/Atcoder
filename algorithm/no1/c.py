import queue


def main():
    q = queue.PriorityQueue()
    for tmp in map(int, input().split()):
        q.put(-1*tmp)

    for i in range(3):
        a = q.get()
    print(-1*a)

    return


if __name__ == '__main__':
    main()
