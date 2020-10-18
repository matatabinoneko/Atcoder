def main():
    k = int(input())
    seven = 7
    already = set()
    cnt = 0
    if k%2==0:
        print(-1)
        return 
    while seven != 0:
        if seven in already:
            print(-1)
            return 
        seven %= k
        already.add(seven)
        cnt += 1 
        if seven != 0:
            seven = seven * 10 + 7
    print(cnt)
    return

if __name__ == '__main__':
    main()