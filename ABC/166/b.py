def main():
    n, k = map(int, input().split())
    people = [True for i in range(n)]
    for i in range(k):
        d = int(input())
        for j in map(lambda x: int(x)-1, input().split()):
            people[j] = False
    print(sum(people))
    return


if __name__ == "__main__":
    main()
