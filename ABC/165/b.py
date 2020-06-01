import math


def main():
    x = int(input())
    year = 0
    ans = 100

    while ans < x:
        ans = math.floor(ans*1.01)
        year += 1
    print(year)
    return


if __name__ == "__main__":
    main()
