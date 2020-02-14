import itertools
def main():
    n = int(input())
    p = tuple(map(int,input().split(' ')))
    q = tuple(map(int,input().split(' ')))
    for i,seq in enumerate(itertools.permutations(range(1,n+1))):
        if p==seq:
            a = i
        if q==seq:
            b = i
    print(abs(a-b))
    return 


if __name__ == "__main__":
    main()
