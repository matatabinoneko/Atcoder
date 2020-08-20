def main():
    s = input()
    t = input()
    if s == t:
        print("same")
        return
    s = s.lower()
    t = t.lower()
    if s == t:
        print("case-insensitive")
        return
    print("different")
    return


if __name__ == '__main__':
    main()
