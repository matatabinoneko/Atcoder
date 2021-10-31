def main():
    A = list(sorted(map(int,input().split())))
    if A[2] - A[1] == A[1] - A[0]:
        print("Yes")
    else:
        print("No")
    return 

if __name__ == "__main__":
    main()