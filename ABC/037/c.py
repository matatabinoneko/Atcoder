input_line = map(int,input().split(" "))
n,k = input_line
input_line = map(int,input().split(" "))
a = list(input_line)

sum_a = sum(a[:k])
ans = sum_a
for i in range(1,len(a)-k+1):
    sum_a = sum_a - a[i-1] + a[i+k-1]
    ans += sum_a
print(ans)
    