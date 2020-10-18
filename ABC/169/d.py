# import queue
def main():
    N = int(input())
    if N == 1:
        print(0)
        return
    n = N
    prime = [True for i in range(10**6+1)]
    prime[0] = False
    prime[1] = False
    for i in range(2, len(prime)):
        if prime[i] == True:
            for j in range(i*2, len(prime), i):
                prime[j] = False

    ans = 0
    for i in range(len(prime)):
        if prime[i] == True and n % i == 0:
            p = i
            flag = False
            while n % p == 0:
                ans += 1
                n = n//p
                p *= i
            while n % i == 0:
                n = n//i
    if 1 < n:
        ans += 1
    print(ans)


if __name__ == "__main__":
    main()
