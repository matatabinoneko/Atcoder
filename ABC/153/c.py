def main():
    n,k = map(int,input().split())
    h = list(map(int,input().split()))
    h.sort()
    sum = 0
    for i in range(0,len(h)-k):
        sum += h[i]
    print(sum)
    return 

if __name__=="__main__":
    main()
    