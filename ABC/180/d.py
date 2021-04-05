def main():
    x, y, a, b = map(int, input().split())
    keikenti = 0
    while x*a < b and x*a < y:
        x *= a
        keikenti += 1

    keikenti += (y-x-1)//b
    print(keikenti)
    return


if __name__ == '__main__':
    main()
