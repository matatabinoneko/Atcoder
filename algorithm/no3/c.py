

def main():
    a, r, n = map(int, input().split())
    if r == 1:
        tmp = a*pow(r, n-1)
        if tmp <= (1e9):
            print(tmp)
        else:
            print('large')
        return
    else:

        for i in range(n-1):
            a = a*r
            if int(1e9) < a:
                print('large')
                return
        print(a)


if __name__ == '__main__':
    main()
