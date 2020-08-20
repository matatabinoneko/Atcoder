
def calc(n, i, j, trans):
    if trans % 2 == 1:
        i, j = j, i
    return n*(i-1)+j-1


def main():

    n = int(input())
    q = int(input())

    row_dict = {}
    col_dict = {}
    trans = 0
    for i in range(1, n+1):
        row_dict[i] = i
        col_dict[i] = i

    for i in range(q):
        query = input().split()
        if query[0] == '1':
            a = int(query[1])
            b = int(query[2])
            row_dict[a], row_dict[b] = row_dict[b], row_dict[a]
        elif query[0] == '2':
            a = int(query[1])
            b = int(query[2])
            col_dict[a], col_dict[b] = col_dict[b], col_dict[a]
        elif query[0] == '3':
            trans += 1
            row_dict, col_dict = col_dict, row_dict
        else:
            a = int(query[1])
            b = int(query[2])
            print(calc(n, row_dict[a], col_dict[b], trans))
        # print(row_dict)
        # print(col_dict)
    return


if __name__ == '__main__':
    main()
