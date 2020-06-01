from itertools import permutations as pm

def main():
    n = int(input())
    s = input()

    red = [0 for i in range(n+1)]
    green = [0 for i in range(n+1)]
    blue = [0 for i in range(n+1)]

    for i in range(2,n+1):
        if s[i-2]=='R':
            red[i] = red[i-1] + 1
        else:
            red[i] = red[i-1]
        if s[i-2]=='G':
            green[i] = green[i-1] + 1
        else:
            green[i] = green[i-1]
        if s[i-2]=='B':
            blue[i] = blue[i-1] + 1
        else:
            blue[i] = blue[i-1]
    # red[n] = red[n-1]
    # green[n] = green[n-1]
    # blue[n] = blue[n-1]

    # print(red)
    # print(blue)
    # print(green)


    ans = 0
    for i in range(1,n+1):
        for j in range(i+2,n+1):

            if s[i-1]+s[j-1] == "RB" or s[i-1]+s[j-1] =="BR":
                ans += green[j] - green[i+1]
                if (j-i)%2==0 and s[(j-i)//2+i-1] == "G":
                    ans -= 1
            elif s[i-1]+s[j-1] == "RG" or s[i-1]+s[j-1] =="GR":
                ans += blue[j] - blue[i+1]
                if (j-i)%2==0 and s[(j-i)//2+i-1] == "B":
                    ans -= 1
            elif s[i-1]+s[j-1] == "BG" or s[i-1]+s[j-1] =="GB":
                ans += red[j] - red[i+1]
                if (j-i)%2==0 and s[(j-i)//2+i-1] == "R":
                    ans -= 1

    print(ans)

if __name__== "__main__":
    main()