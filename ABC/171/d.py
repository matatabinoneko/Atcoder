
N = int(input())
A = list(map(int, input().split()))
Q = int(input())

count = [0 for i in range(int(1e5+1))]

total = 0
for a in A:
    count[a] += 1
    total += a

for _ in range(Q):
    b, c = map(int, input().split())
    total = total - b*count[b] + c*count[b]
    count[c] += count[b]
    count[b] = 0
    print(total)
