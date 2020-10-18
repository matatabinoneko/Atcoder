from functools import reduce
from operator import mul
from itertools import combinations
MOD = int(1e9+7)


def combinations_count(n: int, r: int) -> int:
    r = min(r, n - r)
    numer = reduce(mul, range(n, n - r, -1), 1)
    denom = reduce(mul, range(1, r + 1), 1)
    return numer // denom


def main():
    s = int(input())
    ans = 0
    for i in range(1, s//3+1):
        nokori = s - (i*3)
        ans = (ans + combinations_count(nokori+(i-1), (i-1))) % MOD

    print(ans)
    return


if __name__ == "__main__":
    main()
