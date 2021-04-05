def main():
    n, x = map(int, input().split())
    drink = 0.0
    for i in range(n):
        v, p = map(int, input().split())
        drink += v*p*0.01
        if x < drink - 1e-6:
            print(i+1)
            return
    print(-1)
    return


if __name__ == "__main__":
    main()
