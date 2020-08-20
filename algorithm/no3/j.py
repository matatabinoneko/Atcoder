
import bisect


def main():
    n, m = map(int, input().split())
    children = [0 for i in range(n)]
    for a in map(int, input().split()):
        index = bisect.bisect_left(children, a)
        if index == 0:
            print(-1)
            continue
        children[index-1] = a
        print(n-index+1)
    return


if __name__ == '__main__':
    main()
