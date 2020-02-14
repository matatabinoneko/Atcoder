
def main():
    n = int(input())

    sosuu_mask = sosuu()

    r = [0 for i in range(int(1e5+1))]
    l = [0 for i in range(int(1e5+1))]
    for i in range(len(r)-2,0,-1):
        r[i] += r[i+1] + sosuu_mask[i+1]
    for i in range(1,len(l)):
        l[i] += l[i-1] + sosuu_mask[i-1]
    _all = len([s for s in sosuu_mask if s==1])
    
    # print(_all)
    # print(r[:10])
    # print(l[:10])

    for i in range(n):
        a,b = list(map(int,input().split(' ')))
        # print(list(map(int,input().split(' '))))
        print(_all-l[a]-r[b])
    return 

def sosuu():
    ret = [1 for i in range(int(1e5+1))]
    ret[0]=0
    ret[1]=0
    for i in range(2,len(ret)):
        if ret[i]==0:
            continue
        else:
            for j in range(2*i,len(ret),i):
                ret[j] = 0
    # print(ret[:54])
    ret2 = [s for s in ret]
    for i in range(len(ret)):
        if i%2==1 and ret[(i+1)//2]!=1 or i%2==0:
            ret2[i]=0
    # print(ret2[:54])
    return ret2


if __name__ == "__main__":
    main()