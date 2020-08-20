
def main():
    n = int(input())
    a = [input() for i in range(n)]
    # for i in a:
    #     print(i)
    ans = []
    start = 0
    end = len(a)-1
    while start < end:
        flag = False
        for s in a[start]:
            if s in a[end]:
                ans.append(s)
                flag = True
                break
        if not flag:
            print(-1)
            return
        start += 1
        end -= 1
    ans = ''.join(ans)
    center = ''
    if n % 2 == 1:

        center = a[start][0]
    print("{}{}{}".format(ans, center, ans[::-1]))
    return


if __name__ == '__main__':
    main()
