def main():
    n = int(input())
    ans = [0 for i in range(n)]
    a_list = list(map(lambda x: int(x)-1,input().split()))
    for a in a_list:
        ans[a] += 1

    for a in ans:
        print(a)


    return

if __name__ == "__main__":
    main()