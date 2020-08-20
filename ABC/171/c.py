OFFSET = 97
def main():
    n = int(input())

    ans = []
    while True:
        n -= 1
        n,mod = divmod(n,26)
        ans.append(chr(mod+OFFSET))
        if n==0:
            break
    print(''.join(ans)[::-1])
    return

if __name__ == '__main__':
    main()