def kaijou(a):
    ret = 1
    for i in range(1,a+1):
        ret *= i
    return ret


def main():
    x,y = map(int,input().split(' '))
    for i in range(x+1):
        if (x-i)%2 != 0:
            continue
        one = i
        two = (x-i)//2
        if one*2 + two == y:
            print(kaijou(333333))
            # print((kaijou(one+two)/(kaijou(one)+kaijou(two)))%(int(1e9+7)))
            return
    print(0)
    return 


if __name__ == "__main__":
    main()