


def main():
    n,q = map(int,input().split())
    follow = [set() for i in range(n)]
    for i in range(q):
        s = list(map(int,input().split()))
        action = s[0]
        if action == 1:#フォロー
            fr,to = map(lambda x:x-1,s[1:])
            follow[fr].add(to)
        elif action == 2:
            fr = s[1]-1
            for j in range(n):
                if fr in follow[j]:
                    follow[fr].add(j)
        elif action == 3:
            fr = s[1]-1
            kari = []
            for tmp in follow[fr]:
                for to in follow[tmp]:
                    if to != fr:
                        kari.append(to)
            for k in kari:
                follow[fr].add(k)

    for s in follow:
        ans = []
        for i in range(n):
            ans.append('Y') if i in s else ans.append("N")
        print(''.join(ans))
    return


if __name__ == '__main__':
    main()
