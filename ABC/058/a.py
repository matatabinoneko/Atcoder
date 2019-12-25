from itertools import *

if __name__=="__main__":
    n,k = map(int,input().split(' '))
    d = list(map(int,(input().split(' '))))
    d = [i for i in range(10) if i not in d]
    ans = 1e10
    keta = len(str(n))
    for k in range(1,keta+2):
        for perm in product(d,repeat=k):
            num = 0
            for v in perm:
                num = 10*num+v
            if n <= num and num < ans:
                ans = num
    print(ans)

