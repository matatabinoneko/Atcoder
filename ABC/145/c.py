from itertools import permutations

if __name__ == "__main__":
    n = int(input())
    x = [0 for i in range(n)]
    y = [0 for i in range(n)]

    for i in range(n):
        x[i],y[i] = map(int,input().split(' '))

    ans = 0
    for perm in permutations(range(n)):

        for i in range(len(perm)-1):
            # print(((x[perm[i]]-x[perm[i]+1])**2 + (y[perm[i]]-y[perm[i]+1])**2)**0.5)
            ans +=  ((x[perm[i]]-x[perm[i+1]])**2 + (y[perm[i]]-y[perm[i+1]])**2)**0.5
    # print(ans)
    print(ans/len(list(permutations(range(n)))))