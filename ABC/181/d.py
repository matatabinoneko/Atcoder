from collections import Counter


def main():
    s = input()
    count = Counter(s)
    for i in range(1000):
        if i % 8 != 0:
            continue
        i = f"{i:0>{len(s)}}"
        num_counter = Counter(list(i))
        flag = True
        for key, value in num_counter.items():
            if count[key] < value:
                flag = False
                break
        if flag:
            print("Yes")
            return
    print('No')
    return


if __name__ == "__main__":
    main()
