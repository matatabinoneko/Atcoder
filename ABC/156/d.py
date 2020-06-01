MOD = int(1e9+7)

def com(n,k):
    ret = 1
    for i in range(n):
        ret = (ret*i)%MOD
    for j in range(k):
        ret = 
    # if k==1:
    #     return n
    # else:
    #     return (n * com(n-1,k-1)//k)%MOD

def main():
    n,a,b = map(int,input().split())
    all = (pow(2,n,MOD) - 1)%MOD

    print(((all - com(n,a))%MOD - com(n,b))%MOD)
    return 

if __name__ == "__main__":
    main()