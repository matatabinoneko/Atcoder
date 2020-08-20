
number_string = ['.###..#..###.###.#.#.###.###.###.###.###.', '.#.#.##....#...#.#.#.#...#.....#.#.#.#.#.',
                 '.#.#..#..###.###.###.###.###...#.###.###.', '.#.#..#..#.....#...#...#.#.#...#.#.#...#.', '.###.###.###.###...#.###.###...#.###.###.']

number = {}
for i in range(10):
    tmp = [number_string[j][4*(i+1)-3:4*(i+1)] for j in range(5)]
    # for t in tmp:
    #     print(t)
    number[i] = tmp


def nprint(tmp):
    for t in tmp:
        print(t)


def main():
    n = int(input())
    display = []
    for i in range(5):
        tmp = input()
        display.append(tmp)

    # for s in display:
    #     print(s)
    for i in range(n):
        tmp = [display[j][4*(i+1)-3:4*(i+1)] for j in range(5)]
        # nprint(tmp)
        for j in range(10):

            if tmp == number[j]:
                print(j, end='')
    print()
    return


if __name__ == '__main__':
    main()
