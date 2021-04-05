def main():
    n = int(input())
    ret = set()
    for i in range(1, int(n**0.5)+1):
        if n % i == 0:
            ret.add(i)
            ret.add(n//i)
    for r in sorted(ret):
        print(r)
    return


if __name__ == '__main__':
    main()
