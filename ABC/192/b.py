def main():
    S = input()
    print("Yes") if (len(S) == 1 and S.islower()) or (S[::2].islower and S[1::2].isupper()) else print("No")
    return 

if __name__ == "__main__":
    main()