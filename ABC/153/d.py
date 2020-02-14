def main():
    h  = int(input())
    sum = 0
    tmp = 1
    while(h!=0):
        sum += tmp
        tmp *= 2
        h = h//2
    print(sum)
    return 

if __name__=="__main__":
    main()
    