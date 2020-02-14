
def main():
    n,k = map(int,input().split())
    ans = (k-1)*(n-k)*6 + (k-1)*3 + (n-k)*3 + 1
    print(ans/n**3)


if __name__ == "__main__":
    main()