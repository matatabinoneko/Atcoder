from collections import Counter

n = int(input())

cnt = []
for i in range(n):
    cnt.append(input())
    
cnt = Counter(cnt)

tmp = cnt.most_common()

ans = [name for name,cnt in tmp if cnt==tmp[0][1]]

ans = sorted(ans)

for a in ans:
    print(a)