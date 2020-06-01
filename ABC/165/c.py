from itertools import combinations_with_replacement


def main():
    n, m, q = map(int, input().split())
    abcd = []
    for i in range(q):
        tmp = list(map(int, input().split()))
        tmp[0] -= 1
        tmp[1] -= 1
        abcd.append(tmp)
    # abcd.sort(key=lambda x: x[3], reverse=True)

    ans = 0
    for comb in combinations_with_replacement(range(1, m+1), n):
        # print(comb)
        tmp = 0
        for a, b, c, d in abcd:
            if comb[b]-comb[a] == c:
                tmp += d
        if ans < tmp:
            ans = tmp
    print(ans)

    return


if __name__ == "__main__":
    main()
