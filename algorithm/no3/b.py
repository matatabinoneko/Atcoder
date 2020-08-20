def main():
    n, m, q = map(int, input().split())
    cnt = [0 for i in range(m)]  # 何人解いたか
    answer = [[False for i in range(m)] for j in range(n)]  # iは問題jを解いたか

    for i in range(q):
        s = input().split()
        # 参加者aの現在のスコアを出力せよ。
        if int(s[0]) == 1:
            a = int(s[1])-1
            ans = sum([n-c for i, c in enumerate(cnt) if answer[a][i]])
            print(ans)
        # 参加者aが問題bを解いた。
        else:
            a = int(s[1])-1
            b = int(s[2])-1
            answer[a][b] = True
            cnt[b] += 1

    return


if __name__ == '__main__':
    main()
