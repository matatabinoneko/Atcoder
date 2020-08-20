def main():
    n = int(input())
    before = int(input())
    for i in range(n-1):
        now = int(input())
        state = now-before
        if 0 < state:
            print('up', state)
        elif state < 0:
            print('down', abs(state))
        elif state == 0:
            print("stay")
        before = now
    return


if __name__ == '__main__':
    main()
