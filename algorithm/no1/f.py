

def main():
    s = input()
    words = []
    begin = 0
    end = 1
    while end < len(s):
        if s[end].isupper():
            words.append(s[begin:end+1].lower())
            begin = end+1
            end += 2
        else:
            end += 1
    words.sort()
    ans = []
    for word in words:
        ans.append(word[0].upper()+word[1:-1]+word[-1].upper())
    print(''.join(ans))
    return


if __name__ == '__main__':
    main()
