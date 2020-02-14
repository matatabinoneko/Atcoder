MOD = int(1e9+7)

def main():
    w,h = map(int,input().split())
    w-=1
    h-=1
    ans = 1
    for i in range(1,w+h+1):
        ans *= i
    # print(ans)
    for i in range(1,w+1):
        ans //= i
    # print(ans)
    for i in range(1,h+1):
        ans //= i
    print(ans%MOD)

if __name__ == "__main__":
     main()