import math


def insuu(x):
    ret = []
    for i in range(2, math.ceil(x)):
        if x % i == 0:
            ret.append(i)
    return ret


def main():
    x = int(input())
    insuu = insuu(x)

    return


if __name__ == "__main__":
    main()
