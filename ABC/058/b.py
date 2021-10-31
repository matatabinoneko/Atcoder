def main():
    O = input()
    E = input()
    for o,e in zip(O,E):
        print(o,e,sep='',end='')
    if len(E) < len(O):
        print(O[-1],end='')
    print()
    return

if __name__ == "__main__":
    main()