def main():
    input_line = map(int,input().split(' '))
    k,x = input_line
    if x <= 500*k:
        print("Yes")
    else:
        print("No")
    return 


if __name__ == "__main__":
    main()
