def main():
    n = int(input())
    A = list(map(int, input().split()))
    B = list(map(int, input().split()))
    dot_product = sum([a*b for a, b in zip(A, B)])
    if dot_product == 0:
        print("Yes")
    else:
        print("No")
    return


if __name__ == "__main__":
    main()
