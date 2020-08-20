


def main():
    n = int(input())
    flag = [False for i in range(n)]
    double = -1

    for i in range(n):
        a = int(input()) - 1
        if flag[a] == True:
            double = a+1
        else:
            flag[a] = True
    for i in range(len(flag)):
        if flag[i] == False:
            print(double,i+1)
            return 
    print("Correct")
    return


if __name__ == '__main__':
    main()
