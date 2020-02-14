def main():
    n,q = map(int,input().split())
    a = [0 for i in range(n+2)]
    for i in range(q):
        l,r = map(int,input().split())
        a[l]+=1
        a[r+1]-=1
    # print(a)
    for i in range(1,len(a)-1):
        a[i] = a[i-1]+a[i]
        if a[i]%2==0:
            print(0,end='')
        else:
            print(1,end='')
    # print(a)
    print()
    return 

if __name__ == "__main__":
     main()