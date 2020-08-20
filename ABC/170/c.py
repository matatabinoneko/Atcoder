def main():
    x,n = map(int,input().split())
    p = list(map(int,input().split()))
    ans = -100
    for i in range(-1,102):
        if i not in p and abs(i-x) < abs(ans-x):
            ans = i
    print(ans)
    
    return

if __name__ == '__main__':
    main()