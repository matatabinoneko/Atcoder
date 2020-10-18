from collections import defaultdict
N = int(input())
A = list(map(int, input().split()))
A = sorted(A)

divisible = [False for _ in range(int(1e6+1))]
cnt = defaultdict(int)

for a in A:
    cnt[a] += 1
    if divisible[a] == False and cnt[a] <= 1:
        for i in range(a+a, len(divisible), a):
            divisible[i] = True
ans = 0
for a in A:
    if divisible[a] is False and cnt[a] <= 1:
        ans += 1
print(ans)
