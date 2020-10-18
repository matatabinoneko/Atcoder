def main():
    x,k,d = map(int,input().split())
    x = abs(x)
    if x < k*d:
        # minimum = min(d-(x%d),x % d)
        cnt, amari = divmod(x,d)
        if abs(amari-d) < amari:
            amari = abs(amari - d)
            cnt += 1
        if (k-cnt)%2==0:
            print(amari)
        else:
            print(abs(amari-d))

    else:
        print(x-k*d)
    return

if __name__ == '__main__':
    main()