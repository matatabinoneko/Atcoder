def main():
    a, b = input().split()
    sum_a = sum(map(int, list(a)))
    sum_b = sum(map(int, list(b)))
    if sum_a < sum_b:
        print(sum_b)
    else:
        print(sum_a)
    return


if __name__ == '__main__':
    main()
