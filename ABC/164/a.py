def main():
    s, w = map(int, input().split())
    if s <= w:
        print("unsafe")
    else:
        print("safe")
    return


if __name__ == "__main__":
    main()
