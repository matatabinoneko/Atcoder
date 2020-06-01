import math


def main():
    a, b, n = map(int, input().split())
    if b == 1:
        print(0)
        return
    while True:
        if n % b == 0:
            n -= 1
        else:
            print(math.floor((a*n)/b) - a*math.floor(n/b))
            return
    return


if __name__ == "__main__":
    main()
