import numpy as np 
def main():
    n = int(input())
    a = [int(i) for i in input().split()]
    ans = 0 
    cnt = 0
    tmp = 0

    mean = np.mean(a)
    if not mean.is_integer():
        print(-1)
        return 
        
    for i in range(len(a)):
        tmp += a[i]
        if tmp/(cnt+1) != mean:
            cnt+=1
        else:
            ans += cnt
            cnt = 0
            tmp = 0
        
    print(ans)
    return 

if __name__ == "__main__":
    main()