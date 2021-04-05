from itertools import combinations

n = int(input())
tosi = []
for _ in range(n):
    tosi.append(list(map(int, input().split())))
# dp[i][j]:i番目の年にいてj個（bit）の都市をおとづれている状態での最小コスト
dp = [[1e12 for _ in range(2**n)] for _ in range(n)]
dp[0][0] = 0


def dist(i: int, j: int) -> int:
    '''
        都市iから都市jへの移動コスト
    '''
    return abs(tosi[j][0] - tosi[i][0]) + abs(tosi[j][1] - tosi[i][1]) + max(0, tosi[j][2] - tosi[i][2])


def num2binary(n: int) -> int:
    return 2**n


def set2binary(s: set) -> int:
    ret = 0
    for num in s:
        ret += num2binary(num)
    return ret


def length2binary(n: int) -> int:
    ret = 0
    for i in range(n):
        ret += 2**i
    return ret


def main():
    # 0からiに移動
    for i in range(1, n):
        dp[i][set2binary({i})] = dist(0, i)

    for com_num in range(1, n+1):
        for com in combinations(range(n), com_num):
            # com = set(com)
            s2b = set2binary(com)

            for now_tosi in com:
                # cost = []
                for from_tosi in com:
                    if now_tosi != from_tosi:

                        # print(com)
                        #             # print("from", from_tosi, "to", now_tosi)

                        # cost.append(dp[from_tosi][s2b - num2binary(now_tosi)] +
                        #             dist(from_tosi, now_tosi))
                        dp[now_tosi][s2b] = min(
                            dp[now_tosi][s2b], dp[from_tosi][s2b - num2binary(now_tosi)] + dist(from_tosi, now_tosi))
                        # if cost:
                        #     dp[now_tosi][s2b] = min(cost)

    print(dp[0][length2binary(n)])
    return


if __name__ == '__main__':
    main()
