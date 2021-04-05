def main():
    x, y = map(int, input().split())
    if abs(y-x) <= 2:
        print("Yes")
    else:
        print("No")

    return


if __name__ == "__main__":
    main()
