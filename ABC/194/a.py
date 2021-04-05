def main():
    A, B = map(int, input().split())
    solid = A+B
    milk = B
    if 15 <= solid and 8 <= milk:
        print(1)
    elif 10 <= solid and 3 <= milk:
        print(2)
    elif 3 <= solid:
        print(3)
    else:
        print(4)
    return


if __name__ == "__main__":
    main()
