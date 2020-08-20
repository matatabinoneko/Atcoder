

member = [i for i in range(1, int(1e5+3))]
oncontainer = [i for i in range(1, int(1e5+3))]

container = [ & member[i] for i in range(len(member))]


def main():
    global member
    global oncontainer
    global container

    n, q = map(int, input().split())
    for i in range(q):
        f, t, x = map(int, input().split())
        f -= 1
        t -= 1
        print(container[f])

    return


if __name__ == '__main__':
    main()
