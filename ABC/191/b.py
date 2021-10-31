
input_lines1 = input().split()
input_lines2 = input().split()
n = int(input_lines1[0])
x = int(input_lines1[1])

ans = []
for i in range(len(input_lines2)):
    a = int(input_lines2[i])
    if a != x:
        ans.append(a)
print(*ans)
