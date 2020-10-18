def main():
    flag = [False for _ in range(int(1e5+3))]
    n, x, m = map(int, input().split())
    def f(a: int) -> int: return a**2 % m
    cycle = [x]
    flag[x] = True
    for _ in range(n):
        x = f(x)
        if flag[x] == True:
            break
        else:
            flag[x] = True
        cycle.append(x)
    cycle_index = 0
    # print(cycle)
    while cycle[cycle_index] != x:
        cycle_index += 1
    # print(cycle_index)
    # print(len(cycle[:x]))
    ans = sum(cycle[:cycle_index]) + \
        sum(cycle[cycle_index:]) * ((n-cycle_index) // len(cycle[cycle_index:])) + \
        sum(cycle[cycle_index:cycle_index+(n-cycle_index) %
                  len(cycle[cycle_index:])])
    print(ans)

    return


if __name__ == "__main__":
    main()
