import copy

from collections import defaultdict


def main():
    N, C = map(int, input().split())
    # date = []
    date = defaultdict(int)
    for _ in range(N):
        a, b, c = map(int, input().split())
        # date.append([a, c])
        date[a] += c
        date[b+1] += -1*c
        # date.append([b, -1*c])
    # date = sorted(date, key=lambda x: x[0])

    # print(date)
    ans = 0
    sum_cost = 0
    date_list = sorted(date.keys())
    before_date = date_list[0]
    for d in date_list:
        c = date[d]
        if sum_cost < C:
            ans += (d - before_date)*sum_cost
        else:
            ans += (d - before_date)*C
        before_date = d
        # print(sum_cost)
        sum_cost += c
    print(ans)
    return


if __name__ == "__main__":
    main()
