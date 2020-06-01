def gcd(a,b):
    if b < a:
        b,a = a,b
    if a==0:
        return b
    
    return gcd(b%a,a)

def main():
    k = int(input())
    ans = 0
    for i in range(1,k+1):
        for j in range(1,k+1):
            tmp = gcd(i,j)
            for k in range(1,k+1):
                ans += gcd(tmp,k)
    print(ans)
    

if __name__== "__main__":
    main()