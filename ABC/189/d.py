def main():
    n = int(input())
    # ans_list = []
    ans = 1
    for _ in range(n):
        s = input()
        if s == "OR":
            ans *= 2
        else:
            # ans_list.append(ans)
            # ans = 1

    ans_list.append(ans)
    if s == "OR":
        ans_list.append(2)

    answer = 1
    for a in ans_list:
        answer *= a
    print(answer)

    return


if __name__ == "__main__":
    main()
