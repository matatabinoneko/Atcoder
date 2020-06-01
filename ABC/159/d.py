from collections import Counter
def main():
    n = int(input())
    a = list(map(int,input().split()))
    full = [0 for i in range(n+1)]
    one = [0 for i in range(n+1)]


    c = Counter(a)
    for i in range(1,n+1):
        if 1 <= c[i]:
            full[i] = c[i]*(c[i]-1)//2
        if 2 <= c[i]:
            one[i] = (c[i]-1)*(c[i]-2)//2
    sum_full = sum(full)

    for i in range(len(a)):
        print(sum_full - full[a[i]]+one[a[i]])

    return

if __name__ == "__main__":
    main()