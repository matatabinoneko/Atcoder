MOD = int(1e9+7)


def main():
    n = int(input())
    ten = 1
    eight = 1
    nine = 1
    for _ in range(n):
        ten = (ten*10) % MOD
        eight = (eight*8) % MOD
        nine = (nine*9) % MOD
    nine = (nine*2) % MOD
    print((ten-nine+eight) % MOD)
    return


if __name__ == "__main__":
    main()
