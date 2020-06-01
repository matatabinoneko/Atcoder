def main():
    n = int(input())
    n = n % 10
    if n == 3:
        print("bon")

    elif n in [0, 1, 6, 8]:
        print("pon")
    else:
        print("hon")
    return


if __name__ == "__main__":
    main()
